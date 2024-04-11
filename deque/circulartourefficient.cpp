// the idea of efficient approach is if petrol becomes negative at pi ,then none of the petrol pums from o to pi 
// can be a solution
#include<iostream>
using namespace std;
int firstpetrolpump(int petrol[],int dist[],int n)
{
    int start=0,curr_pet=0;
    int prev=0; //prev because it is circular array
    for(int i=0;i<n;i++)
    {
        curr_pet +=(petrol[i]-dist[i]);
        if(curr_pet<0)
        {
            start = i+1; //increasing our start to next position
            prev +=curr_pet;// and increasing our curr pet as it is circular
            curr_pet =0; //setting curr to zero for next iteration
        }
    }
    return (curr_pet+prev)>=0?(start+1): -1 ; // this is what  we will implement if sum zero posiiton is found 
}
//driver code
int main()
{
     int petrol[]={4,8,7,4};
    int dist[]={6,5,3,5};
    int n = sizeof(petrol)/sizeof(petrol[0]);
    int result = firstpetrolpump(petrol,dist,n);
    cout<<result;
    return 0;
    //succesfully implemeented 
}