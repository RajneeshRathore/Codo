/*Create a class called Invoice that a hardware store might use to represent an invoice
for an item sold at the store. An Invoice should include four pieces of information
as instance.
Data Members ‐
• partNumber (type String)
• partDescription (type String)
• quantity of the item being purchased (type int)
• price_per_item (type double)
Your class should have a constructor that initializes the four instance variables.
Provide a set and a get method for each instance variable. In addition, provide a
method named getInvoiceAmount() that calculates the invoice amount (i.e.,
multiplies the quantity by the price per item), then returns the amount as a double
value. If the quantity is not positive, it should be set to 0. If the price per item is not
positive,it should be set to0.0. Write a test application named invoiceTest that
demonstrates class Invoice’s capabilities.
*/
#include<iostream>
using namespace std;

class invoice
{
   string pName;
   string descri;
   int qutofItm;
   double pricItm;
   public:
   invoice(string pname,string descri,double qutofItm,double pricItm)
   {
      this->pName=pName;
      this->descri=descri;
      this->qutofItm=qutofItm;
      this->pricItm=pricItm;
   
   }
   void setName(string pName)
   {
   this->pName=pName;
   }
   void setDesc(string descri)
   {
        this->descri=descri;
   }
   void setQut(double qutofItm)
   {
       this->qutofItm=qutofItm;
   }
   void setPric(double priItem)
   {
      this->pricItm=pricItm;
   }
   
 string getName()
   {
      return pName;
   }
  string getDesc()
   {
        return descri;
   }
   int  getQut()
   {
      return qutofItm;
   }
   double getPric()
   {
      return pricItm;
   }
   double getInvoiceAmount()
   {
     if(qutofItm<0)
     {
       qutofItm=0.0;
     }
     if(pricItm<0)
     {
       pricItm=0.0;
     }
     return qutofItm*pricItm;
   }
   void test()
   {
     cout<<"Invoice capabilities : "<<getInvoiceAmount()<<endl;
   }
   
};
int main()
{
  invoice d1("Xc12","this is best upto 12 months",30,50.00);
  d1.setName("Cp23");
  d1.setDesc("not to store dry area ");
  d1.setQut(20);
  d1.setPric(60);
  
  cout<<"partNumber : "<<d1.getName()<<endl;
  cout<<"Part Description :"<<d1.getDesc()<<endl;
  cout<<"Ouantity of items :"<<d1.getQut()<<endl;
  cout<<"price of item : "<<d1.getPric()<<endl;
  cout<<"Invoice amount :"<<d1.getInvoiceAmount()<<endl;
  d1.test();
  
  
  
}