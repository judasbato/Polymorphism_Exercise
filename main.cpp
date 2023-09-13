#include <iostream>
#include <memory>
#include "Account.h"
#include "Checking_Account.h"
#include "Savings_Account.h"
#include "Trust_Account.h"
#include "Account_Util.h"

using namespace std;

int main() {

    Checking_Account battal {"Battal", 5000};
    cout << battal << endl;

    Account *trust = new Trust_Account("Fevzi");
    cout << *trust << endl;

    Account *p1 = new Checking_Account("Yigit", 10000);
    Account *p2 = new Savings_Account("Murat", 1000);
    Account *p3 = new Trust_Account("Enis");

    std::vector<Account *> accounts {p1,p2,p3};

    display(accounts);
    deposit(accounts, 1000);
    withdraw(accounts, 2000);

    display(accounts);

    delete p1;
    delete p2;
    delete p3;
    return 0;
}

