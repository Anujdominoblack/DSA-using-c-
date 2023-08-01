#include<iostream>
using namespace std;

//we are implementating the naive soluiton here 

int search(int arr[],int x)  //function for searching in infinite array
{
   int i=0;
   while(true)  //infinite loop
   {
    if(arr[i]==x){  //loop break condition
        return i;
    }
    if(arr[i]>x){return -1;}
    i++;  //loop control variable 
   }
}

//driver code

int main()
{   int arr[]={10,20,30,40,50,60,70,80}; //array is created
    int x;
    cout<<"enter the number you want to search";
    cin>>x;
    int result=search(arr,x);  //function call
    cout<<result;
    return 0;

}