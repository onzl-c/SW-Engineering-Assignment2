// main.cpp
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include "Account.h"
#include "Bike.h"
#include "SignUp.h"
#include "SignUpUI.h"
#include "Login.h"
#include "LoginUI.h"
#include "Logout.h"
#include "LogoutUI.h"
#include "RegisterBike.h"
#include "RegistBikeUI.h"
#include "RentBike.h"
#include "RentBikeUI.h"
#include "RentalBikeInfo.h"
#include "RentalBikeInfoUI.h"

#define INPUT_FILE_NAME "input.txt"
#define OUTPUT_FILE_NAME "output.txt"

using namespace std;

ifstream in_fp;
ofstream out_fp;

void doTask(vector<Account>& accounts, vector<Bike>& bikes, Account*& currentUser);

int main() {
    in_fp.open(INPUT_FILE_NAME);
    out_fp.open(OUTPUT_FILE_NAME);

    vector<Account> accounts;
    accounts.emplace_back("admin", "admin", "00000000000");  // admin 계정 추가(hard coding)

    vector<Bike> bikes;
    Account* currentUser = nullptr;

    doTask(accounts, bikes, currentUser);

    out_fp.close();
    in_fp.close();
    return 0;
}

void doTask(vector<Account>& accounts, vector<Bike>& bikes, Account*& currentUser) {
    int menu_level_1 = 0, menu_level_2 = 0;
    bool is_program_exit = false;

    while (!is_program_exit && (in_fp >> menu_level_1 >> menu_level_2)) {
        switch (menu_level_1) {
            case 1:
                switch (menu_level_2) {
                    case 1: { // 회원가입
                        string id, pw, phone;
                        in_fp >> id >> pw >> phone;
                        
                        out_fp << "1.1. 회원가입" << endl;

                        SignUp signup(accounts);
                        SignUpUI signupUI;
                        signupUI.createNewAccount(signup, id, pw, phone); 

                        break;
                    }
                }
                break;
            case 2:
                switch (menu_level_2) {
                    case 1: { // 로그인
                        string id, pw;
                        in_fp >> id >> pw;

                        out_fp << "2.1. 로그인" << endl;

                        Login login(accounts);
                        LoginUI loginUI;
                        currentUser = loginUI.requestLogin(login, id, pw); 
                        
                        break;
                    }
                    case 2: { // 로그아웃
                        out_fp << "2.2. 로그아웃" << endl;

                        Logout logout;
                        LogoutUI logoutUI;
                        logoutUI.requestLogout(logout, currentUser); 
                        
                        break;
                    }
                }
                break;
            case 3:
                switch (menu_level_2) {
                    case 1: { // 자전거 등록
                        string bikeId, bikeName;
                        in_fp >> bikeId >> bikeName;

                        out_fp << "3.1. 자전거 등록" << endl;

                        RegisterBike reg(bikes);
                        RegistBikeUI regUI;
                        regUI.requestBike(reg, bikeId, bikeName);  
                        
                        break;
                    }
                }
                break;
            case 4:
                switch (menu_level_2) {
                    case 1: { // 자전거 대여
                        string bikeId;
                        in_fp >> bikeId;

                        out_fp << "4.1. 자전거 대여" << endl;

                        RentBike rent(bikes);
                        RentBikeUI rentUI;
                        rentUI.selectBike(rent, currentUser, bikeId); 
                        
                        break;
                    }
                }
                break;
            case 5:
                switch (menu_level_2) {
                    case 1: { // 자전거 대여 리스트
                        out_fp << "5.1. 자전거 대여 리스트" << endl;
                        
                        RentalBikeInfo info;
                        RentalBikeInfoUI infoUI;
                        infoUI.requestRentalBikeInfo(info, currentUser); 

                        break;
                    }
                }
                break;
            case 6:
                switch (menu_level_2) {
                    case 1: { // 종료
                        out_fp << "6.1. 종료";

                        is_program_exit = true;

                        break;
                    }
                }
                break;
        }
    }
}