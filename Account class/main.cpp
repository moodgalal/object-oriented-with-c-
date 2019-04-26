#include <iostream>
#include "AccountClassHeader.h"
using namespace std;

int main()
{
    Account myAccount(50);

    myAccount.credit(2);

    myAccount.debit(52);

    cout<<"Your balance is "<<myAccount.getBalance()<<endl;
    return 0;
}
