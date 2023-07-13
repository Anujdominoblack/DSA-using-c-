#include<iostream>

using namespace std;

int  maxprofit(int price[],int start,int end)
{
    if(end<start)
    {
        return 0;
    }
    int profit=0;
    for(int i=start;i<end;i++)
    {
        for(int j=i+1;j<=end;j++)
        {
            if(price[j]>price[i])
            {
                int curr=price[j]-price[i]+maxprofit(price,start,i-1)+maxprofit(price,j+1,end);
            }
        }
    }
    return profit;
}
int main()
{
    int arr[]={1,5,3,8,12};
    cout<<maxprofit(arr,1,5);
    return 0;
}