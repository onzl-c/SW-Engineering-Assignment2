#ifndef SIGNUPUI_H
#define SIGNUPUI_H
#include "SignUp.h"

// User interface class for handling sign-up requests.
class SignUpUI {
public:
    // Receives input and delegates account creation to SignUp controller.
    // @param signUp The SignUp controller.
    // @param id User ID.
    // @param pw User password.
    // @param phone User phone number.
    void createNewAccount(SignUp& signUp, string id, string pw, string phone);
};

#endif