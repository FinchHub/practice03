#include <iostream>
#include <fstream>
#include <sstream>
#include <string>

void saveBalance(const std::string&); 
double loadBalance(const std::string&);
bool isValidWithdrawal(double amount);
int displayMenu();
double getBalance();


int main() {
    
}

void saveBalance(const std::string& filename = "account.txt"){

}

double loadBalance(const std::string& filename = "account.txt"){

}

bool isValidWithdrawal(double amount){

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
    std::cout << "D: Entered " << menuOption << std::endl;
    
}

double getBalance(){

}
