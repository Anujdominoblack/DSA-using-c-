#include<iostream>
using namespace std;

int squarerot(int x)
{
    int low=0;
    int high=x;
    int ans=-1;
    while(low<=high)
    {
        int mid = low+high/2;
        int msq = mid*mid;
        if(msq==x)
        {
            return mid;
        }
        else if (msq>x){
            high = mid-1;

        }
        else{
            low=mid+1;
            ans=mid;
        }
    }
    return ans;
}

// driver code
int main()
{
    int x;
    cin>>x;
    int result = squarerot(x);
    cout<<result;
    return 0;

}