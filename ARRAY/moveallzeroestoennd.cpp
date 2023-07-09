#include<iostream> //this is a naive method for swapping
using namespace std;
void movetoend(int arr[],int n)  //function for moving all zeroes to end
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==0)
        {
            for(int j=i+1;j<n;j++)
            {
                if(arr[j]!=0)
                {
                   swap(arr[i],arr[j]);   //swap function is called
                }
            }
        }
    }
    
}

int main()
{
    int arr[]={8,5,0,10,0,20};  //array is created
    int n=sizeof(arr)/sizeof(arr[0]);  //sizeofarray
    movetoend(arr,n);  //functioncall
    for(int i=0;i<n;i++)  //loop for displaying the result
    {
        cout<<arr[i]<<" ";  //output
    }
    return 0;

}