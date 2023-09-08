#include<iostream>
#include<algorithm>
using namespace std;

struct point{ // defining our own structure type
    int x,y;
};

bool mycmp(point p1,point p2)  // our own sorting function
{
    return p1.x<p2.x;
}

// driver code

int main()
{
    point arr[]={{3,10},{2,8},{5,4}};  // defining our own array 
   int n = sizeof(arr)/sizeof(arr[0]);
    sort(arr,arr+n,mycmp);  // sorting the array based on x values 
    for(auto z: arr)
    {
        cout<<z.x<<" "<<z.y<<endl;
    }
    return 0;

}

