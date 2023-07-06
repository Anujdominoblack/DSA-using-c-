#include<iostream>
using namespace std;
int main()
{
    // arrays  are collection of data of same type
    // arrays are used to store the elements in one place and the elements are of same type
   int arr[]={10,20,30,40,50};
   int arr2[4]={1,1,0};
   //different ways of array initilaisation
   for(int i=0;i<5;i++)
   {
    cout<<arr[i]<<endl;
   }
   for(int i=0;i<3;i++)
   {
    cout<<arr2[i]<<endl;
   }
   return 0;

}