// first the naive method we will traverse the array and check for the difference for ceiling
#include<iostream>
#include<climits>
using namespace std;

void printceiling(int arr[],int n){
    cout<<-1<<" "; // as for the first element there will be no celing in the left side
    for(int i=1;i<n;i++){
        int diff = INT_MAX;
        for(int j=0;j<i;j++){
            if(arr[j]>arr[i]){
                diff = min(diff,arr[j]-arr[i]); // the minimum difference will give us the ceiling
            }
        }
        if(diff == INT_MAX){
            cout<<-1<<" ";
        }
        else{
            cout<<arr[i]+diff<<" ";
        }
    }
}
// driver code
int main(){
    int arr[]={2,8,30,15,25,12};
    int n = sizeof(arr)/sizeof(arr[0]);
    printceiling(arr,n);
    return 0;
}