#include <iostream>
#include "AccountClassHeader.h"

using namespace std;

//Start of the instructor's definition.
Account::Account(int balanceAmount){
if(balanceAmount>=0)
    balance=balanceAmount;
else
    cout<<"The initial balance was invalid."<<endl;
}
//End of the instructor's definition.

//Start of the credit member function.
void Account::credit(int amount){
balance+=amount;
}
//End of the credit member function.

//Start of the debit member function.
void Account::debit(int amount){
int test=balance;
 test-=amount;
if(test>=0)
    balance-=amount;
else
  cout<<"Debit amount exceeded account balance."<<endl;
}
//End of the debit member function.

int Account::getBalance(){
return balance;
}

