/*Implement a C++ program to find the non-repeating characters in string.*/

#include<iostream>
using namespace std;

int main()
{
     char arr[100];
    cout<<"enter the string in an array:\n";
    cin.getline(arr,100);
     char arr2[200];
     int i,j,count=0;
     for(i=0;arr[i]!='\0';i++)
     {
        for(j=0;arr[i]!='\0';j++)
        {
           if(arr[i]==arr[j])
           {
            break;
           }
        }
        if(i==j)
        {
          arr2[count++]=arr[i];
        }
     }
     cout<<"string after removal of doublicates:\n";
     for(int i=0;i<count;i++)
     {
        cout<<arr2[i];
     }
     return 0;
}