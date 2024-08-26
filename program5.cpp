/*Implement a C++ program to demonstrate the concept of data abstraction using the
concept of Class and Object*/

#include<iostream>
using namespace std;
class employee
{
    private:
    int id;
    string name;
    float salary;
    string cmpname;
    public:
    void setDetail(int id,string name,float salary,string cmpname)
    {
        this->id=id;
        this->name=name;
        this->salary=salary;
        this->cmpname=cmpname;
    }
    int getId()
    {
       return id;
    }
      string getNmae()
    {
       return name;
    }
      float getSalary()
    {
       return salary;
    }
      string getCmpname()
    {
       return cmpname;
    }
    void showDetails()
    {
        cout<<"id = "<<id<<endl<<"name = "<<name<<endl<<"salary = "<<salary<<endl<<"company Name = "<<cmpname<<endl;
    }

};
int main()
{
    employee e1;
    e1.setDetail(12,"rajneesh",49000.00,"xyz");
    cout<<e1.getId()<<endl;
    cout<<e1.getNmae()<<endl;
    cout<<e1.getSalary()<<endl;
    cout<<e1.getCmpname()<<endl;
    e1.showDetails();
    return 0;
}