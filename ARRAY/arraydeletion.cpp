#include<iostream>
using namespace std;

//function for the deletion operation

int deleteelement(int arr[],int n,int x)
{
    int i;
    for(i=0;i<n;i++)
    {
        if(arr[i]==x)
        {
            break;
        }
    }
    if(i==n)
    {
        return n;  //if element is at last 
    }

    for(int j=i;j<n-1;j++)
    {
        arr[j]=arr[j+1];  //moving all elements one position before 
    }
    return n-1;
}

int main()
{
    int arr[10]={10,20,30,40,50};
    int n=sizeof(arr)/sizeof(arr[0]);
    int element;
    //enter the element 
    cin>>element;
    int result=deleteelement(arr,n,element);
    if(result==n-1)
    {
        cout<<"delete operation succesfull"<<endl;
    }
    else
    {
        cout<<"delete operation failed"<<endl;
    }
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<endl;   //printing the result
    }
    return 0;
}