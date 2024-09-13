/*Define a class Hotel in C++ with the following specifications
Private members
• Rno Data member to store room number
• Name Data member to store customer name
• Tariff Data member to store per day charges
• NOD Data member to store number of days of stay
• CALC() Function to calculate and return amount as NOD*Tariff ,and if the value
of days* Tariff >10000,
then total amount is 1.05* days*Tariff.
Public members
• Checkin() Function to enter the content Rno, Name, Tariff and NOD
• Checkout() Function to display Rno, Name, Tariff,
NOD and Amount (amount to be displayed by calling function) CALC()
*/
#include<iostream>
using namespace std;

class hotel
{
  private:
    int rno;
    string name;
    float tariff;
    int nod;
    int calc(int nod,float tariff)
    {
       if((nod*tariff)>10000)
       {
         return 1.05*nod*tariff;
       }  
       else
       {
         return nod*tariff;
       }
    }
    public:
    void checkin(int rno,string name,float tariff,int nod)
    {
      this->rno=rno;
      this->name=name;
      this->tariff=tariff;
      this->nod=nod;
    }
    void checkout()
    {
      cout<<"room no = "<<rno<<endl<<"Name = "<<name<<endl<<"Tariff = "<<tariff<<endl<<"total amount = "<<calc(nod,tariff)<<endl;
    }
};
int main()
{
  int n;
  cout<<"enter the number of customer:\n";
  cin>>n;
  int r,nd;
  float tr;
  string name;
    hotel h[n];
    for(int i=0;i<n;i++)
    {
       cout<<"Welcome to hotel\n";
       cout<<"enter the detais of customer "<<i+1<<endl<<endl;
       cout<<"enter the room no:";
       cin>>r;
       cout<<"enter the name of an customer:";
       cin>>name;
       cout<<"enter the no. of days to stay in a hotel:";
       cin>>nd;
       cout<<"enter the traffic of an hotel:";
       cin>>tr;
       cout<<endl<<endl;
       cout<<"customer checkout details:";
       h[i].checkin(r,name,nd,tr);
       h[i].checkout();  
       cout<<endl;
       cout<<"thank you!";
    }
    return 0;
    
}
