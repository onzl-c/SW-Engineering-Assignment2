#include "Logout.h"

string Logout::performLogout(Account* currentUser) {
    return currentUser->getId(); 
}