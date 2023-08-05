// in this we will implement binary search and implement the two pointer method one low and one high 
// if low+high return true if more than that decrease high and if low increase right
//break the loop is low becomes greater than high

#include<iostream>
using namespace std;

bool ispresent(int arr[],int n,int x)  //function for searching 
{
    int low=0;
    int high=n-1;
    while(low<high)  //low  high for traversal
    {
        if(arr[low]+arr[high]==x){return true; }  //if condition match
        else if(arr[low]+arr[high]>x)  //if low+hihg is more decrease high 
        {
            high--;
        }
        else{
            low++;  // or increase low 
        }

    }
    return false;
}


//driver code

int main()
{
    int arr[]={10,20,30,40,50,60,70,80,90};
    int n=sizeof(arr)/sizeof(arr[0]);
    int x;
    cout<<"element you want to search";
    cin>>x;
    int result=ispresent(arr,n,x);  //function call
    cout<<result;  //output 
    return 0;
}