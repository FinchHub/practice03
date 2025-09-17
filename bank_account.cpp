#include <iostream>
#include <fstream>
#include <limits>
#include <sstream>
#include <string>
#include <limits>

void saveBalance(const std::string&); 
double loadBalance(const std::string&);
bool isValidWithdrawal(double amount);
int displayMenu();
double getBalance();


int main() {
    return displayMenu();    

    return 0;
}

void saveBalance(const std::string& filename = "account.txt"){

}

double loadBalance(const std::string& filename = "account.txt"){
return 0;
}

bool isValidWithdrawal(double amount){
return 0;
}

int displayMenu(){
    int menuOption;

    while (1) {
        std::cout << "==========================================\n" 
                  << "        SIMPLE BANK ACCOUNT SYSTEM        \n"
                  << "==========================================\n"
                  << "1. Deposit Money\n"
                  << "2. Withdraw Money\n"
                  << "3. Check Balance\n"
                  << "4. Exit\n"
                  << "==========================================\n"
                  << "Enter your choice (1-4): ";
        std::cin >> menuOption;
        
        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << "ERROR: Invalid menu option.\n";
        } else if (menuOption < 1 || menuOption > 4) {
            std::cout << "ERROR: Invalid menu option.\n";
        } 
    }
        return menuOption;
}

double getBalance(){
    return 0;
}
