// in this we have two input array one for petrola and one for distance 
// our objective is to start from the circuclar point from where we can travel all the pumps
// first we will implement naive solution
#include<iostream>
using namespace std;

int firstpetrolpump(int petrol[],int dist[],int n)
{
    for(int start=0;start<n;start++)
    {
        int curr_petrol = 0;
        int end=start;//setting end at the position
        while(true)
        {
            curr_petrol+=(petrol[start]-dist[start]); //subtracting for the cost 
            if(curr_petrol<0)
            {
                break;
            }
            end = (end+1)%n; //it is a circular array so we move end as this way 
            if(end==start)
            {
                // means it returned to same position 
                return(start+1); // we return position not index
            }
        }
    }
    return -1;
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