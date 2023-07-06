#include<iostream>
using namespace std;


//a function for insertion

int insert(int arr[],int n,int cap,int pos,int x) //here n is size of array,cap is capacity of array,pos is position of new element 
 {       // and x is the element 
  if(n==cap)
  {
    
    return n;
  }
  int index=pos-1;
  for(int i=n-1;i>=index;i--)
  {
      arr[i+1]=arr[i];
  }
arr[index]=x;
return (n+1);

}

int main()
{   
    int arr[100]={10,20,30,50,60,40,90,78,12};
    int n=sizeof(arr)/sizeof(arr[0]);
    int cap=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]!=0)
        {
            cap++;
        }
    }
    int position,element;
    cin>>position>>element;
    int result=insert(arr,n,cap,position,element);
    if(result==n+1){
    for(int i=0;i<cap+1;i++)
    {
        cout<<arr[i]<<endl;
    }}
    return 0;
    }