/*Implement a Program in C++ by defining a class to represent a bank account.
Include the following:
Data Members
● Name of the depositor
● Account number
● Type of account (Saving, Current etc.)
● Balance amount in the account
Member Functions
● To assign initial values
● To deposit an amount
● To withdraw an amount after checking the balance
● To display name and balance
*/
#include<iostream>
using namespace std;

class bank
{
  private:
   string name;
   int accountNo;
   float balance;
   string acty;
   public:
  void setDetails(string name,int accountNo,float balance,string acty)
   {
     this->name=name;
     this->accountNo=accountNo;
     this->balance=balance;
     this->acty=acty;
   }
   void deposite(int money)
   {
      balance+=money;
   }
   void withdraw(int cash)
   {
      if(cash>balance)
      {
        cout<<"Sorry you have no balance to withdraw ?\n";
      }
      else
      {
        balance-=cash;
      }
   }
   void showDetails()
   {
     cout<<"Name = "<<name<<endl<<"Balance = "<<balance<<endl;
   }
};
int main()
{
   int n;
   cout<<"Enter the number of customer:\n";
   cin>>n;
   bank b[n];
   string name,type;
   float bal;
   int ac;
   int dp,wd;
   for(int i=0;i<n;i++)
   {
      cout<<"enter the name of an customer:";
      cin>>name;
      cout<<"enter the account number:";
      cin>>ac;
      cout<<"enter the balance:";
      cin>>bal;
      cout<<"type of an account:";
      cin>>type;
      b[i].setDetails(name,ac,bal,type);
      cout<<"enter  the amount to deposite:";
      cin>>dp;
      b[i].deposite(dp);
      cout<<"enter  the amount to withdraw:";
      cin>>wd;
      b[i].withdraw(wd);
      cout<<endl;
      b[i].showDetails();
      cout<<"thank you for connecting us!\n";
   }
  return 0;
}
