/*An electricity board charges the following rates to domestic users to discourage
large consumption of energy.
For the first 100 units: - 60 P per unit
For the next 200 units: -80 P per unit
Beyond 300 units: -90 P per unit
All users are charged a minimum of Rs 50 if the total amount is more than Rs 300
then an additional surcharge of 15% is added. 
Implement a C++ program to read the names of users and number of units consumed
and display the charges with names
*/

#include<iostream>
using namespace std;

class consumption
{
    private:
    string name;//instance variables
    int unit;
    double total;
    public:
    void setDetails(string name,int unit)//setter method
    {
        this->name=name;
        this->unit=unit;
    }
    void totalunit(int unit)
    {
       if(unit>=0&&unit<=100)
       {
         total=unit*0.60+50;
       }
       else if(unit>=100&&unit<=300)
       {
         total=100*0.60+(unit-100)*0.80+50;
       }
       else
       {
           double sum=100*0.60+200*0.80+(unit-300)*0.90+50;
          total=0.15*sum+sum;
        
       }
      
    }
    void showDetails()
    {
        cout<<"name = "<<name<<endl<<"units consumed = "<<unit<<endl<<"total charges = "<<total<<endl;
    }


};
int main()
{
    string name;
    cout<<"enter the customer name :\n";
    cin>>name;
    int u;
    cout<<"enter the units used by an customer:\n";
    cin>>u;
   consumption c1;
   c1.setDetails(name,u);
   c1.totalunit(u);
   c1.showDetails();
}