#include<iostream>
using namespace std;
int getlargest(int arr[],int n)  //function to find the largest
{  int largest=0;

   for(int i=0;i<n;i++)
   {
    if(arr[i]>arr[largest])
    {
        largest=i;
    }
   }
    return largest;
}
int secondlargest(int arr[],int n)  //function to find the second largest
{
    int largest=getlargest(arr,n);
    int res=-1;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=arr[largest])
        {
            if(res==-1){
                res=i;
            }
            else if(arr[i]>arr[res])
            {
                res=i;
            }
        }
    }
    return res;

}

int main()
{
    int arr[5]={10,9,17,23,19};  //array 
    int n=sizeof(arr)/sizeof(arr[0]);  
    int result=secondlargest(arr,n);  //function call
    cout<<arr[result];   //result is displayed
    return 0;
}