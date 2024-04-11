// now we will see efficient implementation using deque
// the idea is we will push elements into q and when we see element larger than current 
// we will empty our deque and push the largest incoming eleemnt 
// we will store indexs of the element
// below is the implementation
#include<iostream>
#include<deque>
using namespace std;
void printkmax(int arr[],int k,int n)
{
    // now we will process the first window first
    deque<int> q;
    for(int i=0;i<k;i++)
    {
        while(!q.empty() && arr[i]>=arr[q.back()]){
            q.pop_back();
            //keep popping from back if element is smaller 
        }
        q.push_back(i);  // else push it in back its index if larger 
    }
    //first window is succesfully analyzed 
    // npoe for next windows
    for(int i=k;i<n;i++)
    {
        cout<<arr[q.front()]<<" ";//first element and rest larger elements 
        while(!q.empty()&&q.front()<=(i-k))  // i-k to check index not out of scope 
        {
           q.pop_front(); // for removing smaller and out of scope windows 
        }
        while(!q.empty()&&arr[i]>=arr[q.back()])
        {
            q.pop_back();
        }
        q.push_back(i); // push the elements remaing in the back 
    }
    cout<<arr[q.front()]<<" ";
}
//driver code
int main()
{
    int arr[]={10,8,5,12,15,7,6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int k=3;
    printkmax(arr,k,n);
    return 0;
}