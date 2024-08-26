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
    int amount(int tariff,int nod)
    {
        if((nod*tariff)>10000)
        {
        return 1.05*nod*tariff;
        }
        else{
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
        cout<<"rno = "<<rno<<endl<<"name = "<<name<<endl<<"tariff = "<<tariff<<endl<<"Nod = "<<nod<<endl<<"total = "<<amount(tariff,nod)<<endl;
    }

};
int main()
{
    hotel h1;
    h1.checkin(59,"rajnessh",3000,1000);
    h1.checkout();

}