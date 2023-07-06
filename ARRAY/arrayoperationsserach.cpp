#include<iostream>
using namespace std;
#define max 10000  //to define the array size max to avoid stack overflow
// function to search an element in an unsorted array

int search(int arr[],int n,int x)  //here  arr is the array and n is the size of tha array and x is the element to search
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==x)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int n;
    cin>>n;
    //enter the size of the array
    int arr[max];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int y;
    //enter the element you want to search
    cin>>y;
    int result=search(arr,n,y);
    if(result==-1){
        cout<<"element is not present here";
    }
    else{
        cout<<"element is present in the array";
    }
    return 0;

}