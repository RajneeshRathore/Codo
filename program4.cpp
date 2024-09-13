/*You are given an array of elements. Now you need to choose the best index of this
array. An index of the array is called best if the special sum of this index is maximum
across the special sum of all the other indices. To calculate the special sum for any
index you pick the first element that is and add it to your sum. Now you pick next
two elements i.e., and and add both of them to your sum. Now you will pick the
next elements, and this continues till the index for which it is possible to pick the
elements. Find the best index and in the output print its corresponding special sum.
Note that there may be more than one best index, but you need to only print the
maximum special sum.
*/
#include<iostream>
#include<climits>
using namespace std;

int main()
{
   int n;
   cout<<"enter the size of an array:\n";
   cin>>n;
   int arr[n];
   cout<<"enter the elements in an array:\n";
   for(int i=0;i<n;i++)
   {
    cin>>arr[i];
   }
   int max=-1;
   for(int k=0;k<n;k++)
   {
    int sum=arr[k],x=1,j;
    for(int i=k+1;i<n;i+=x)
    {
        if((i+x)<n)
        {
            for(j=i;j<=x+i;j++)
            {
                sum+=arr[j];
            }
            x++;
        }
    }
    if(sum>max)
    {
        max=sum;
    }
   }
   cout<<"special max sum : "<<max;
   return 0;
}