#include<iostream>
using namespace std;

//function for getting the largest

int getlargest(int arr[],int n)
{
    for(int i=0;i<n;i++)  //first loop
    {
        bool flag=true; //flag is set
        for(int j=0;j<n;j++)
        {
            if(arr[j]>arr[i])  //second loop
            {
                flag=false;   
                break;
            }
        }
        if(flag==true)  //for knowing the largest element 
        {
            return i;
        }

    }
    return -1;

}
int main()
{
    int arr[5]={1,2,3,0,15};  //array is created
    int result=getlargest(arr,5); //function  call 
    cout<<arr[result];   //result is being displayed
    return 0;
}