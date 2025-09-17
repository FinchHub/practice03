#include <iostream>
#include <fstream>
#include <limits>
#include <sstream>
#include <string>
#include <limits>

void saveBalance(const std::string&); 
double loadBalance(const std::string&);
bool isValidWithdrawal(double);
int displayMenu();
double getBalance();
void deposit (double);
void deposit (double, std::string);
bool withdraw (double);
bool withdraw (double, std::string);

int main() {
    double depositAmt;
    std::string description;
    // loadBalance();

    while (1) {
        int menuOption { displayMenu() };
        if ( menuOption == 1) {

            std::cout << "Enter amount to deposit: ";
            std::cin >> depositAmt;
            std::cin >> description;

        } else if (menuOption == 2) {
            std::cout << "D: Withdraw Money\n";
        } else if (menuOption == 3) {
            std::cout << "D: Check Balance\n";
        } else if (menuOption == 4) {
            std::cout << "D: Exit\n";
            return 0;
        }
    }
    return 0;
}

void saveBalance(const std::string& filename = "account.txt"){

}

double loadBalance(const std::string& filename = "account.txt"){
    
}

bool isValidWithdrawal(double amount){
return 0;
}

int displayMenu(){
    int menuOption;

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
    return menuOption;
}

double getBalance(){
    return 0;
}
