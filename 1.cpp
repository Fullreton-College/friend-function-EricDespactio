#include <iostream>
#include <string>
#include <fstream>
#include <algorithm>
#include <cmath>
#include <iomanip> // manipulator class
#include <cctype> 

using namespace std;

class BankAccount{
    private:
        string account_holder;
        double balance;
    public:
        BankAccount(){
            account_holder = "";
            balance = 0.0;
        }
        BankAccount(string n, double b){
            account_holder = n;
            balance = b;
        }
        void display_balance() const{
            cout << fixed << setprecision(2);
            cout << "The balance of the account is: " << balance << endl;
        }
        friend void apply_interest(BankAccount& bankacc, double rate){
            bankacc.balance = bankacc.balance * (1 + rate);
        }
};

int main(){
    BankAccount account("Julius", 1000000);
    account.display_balance();
    apply_interest(account, 0.05);
    account.display_balance();
    return 0;
}
