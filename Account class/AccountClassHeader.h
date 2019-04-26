#include <string>
using namespace std;

class Account
{
public:
    Account(int balanceAmount);
   void credit(int amount);
   void debit(int amount);
   int getBalance();

private:
    int balance;
};
