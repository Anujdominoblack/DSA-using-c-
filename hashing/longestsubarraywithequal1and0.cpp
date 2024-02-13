// now we will naive solution is
// idea is we have two variables starting from zero and if we encounter 0 then we will increment  first
// and if we ecounter 1 we will increment second if first ==second then we will return max
#include<iostream>
using namespace std;

int longestsub(int arr[],int n)
{
    int res=0;
    for(int i=0;i<n;i++)
    {
        int co=0;
        int c1=0;
        for(int j=i;j<n;j++)
        {
            if(arr[j]==0){co++;}
            else{
                c1++;
            }
            if(co==c1){
                res = max(res,j-i+1); // it gives element as j is ending and i is start
            }
        }
    }
    return res;
}

// driver code
int main()
{
    int arr[]={1,0,1,1,1,0,0};
    int n = sizeof(arr)/sizeof(arr[0]);
    int result = longestsub(arr,n); // function call 
    cout<<result;
    return 0;
}