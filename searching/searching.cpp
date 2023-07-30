#include<iostream>
using namespace std;

//we will first implement linear search having time complexity of O(n)
// the idea of the linear search is to traverse through all the elements in the array

//driver code

int main()
{
    int arr[]={10,20,30,40,50,60};  //array is created
    int n=sizeof(arr)/sizeof(arr[0]); //sieofarray
    int x;  
    cout<<"enter the element you want to find in the array";
    cin>>x;
    for(int i=0;i<n;i++)  //loop for linear search
    {
        if(arr[i]==x)
        {
            cout<<"the number belongs to array at position "<<i+1;
            return 0;
        }
       
    }
 cout<<"the number doesnt belong to array";   
 return 0;
 
}