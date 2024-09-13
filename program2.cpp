/*Construct a C++ program that removes a specific character from a given string and
return the updated string. 
*/
#include<iostream>
#include<cstring>
using namespace std;

int main()
{
    char arr[200];
    cout<<"enter the string in an array:\n";
    cin.getline(arr,200);
     int n=strlen(arr);//size of an character array
      char c=0;
     cout<<"enter the character to remove form an string:\n";
     cin>>c;
     cout<<"string after removal of an character:\n";
    for(int i=0;i<n;i++)
    {
       if(arr[i]!=c)
       {
        cout<<arr[i];
       }
    }
    return 0;
}