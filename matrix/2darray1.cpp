#include<iostream>
using namespace std;

int main()
{
    int arr[3][2] ={10,20,30,40,50,60}; // 3 rows and two columns 
    // internal curly brackets are optional

    for(int i=0;i<3;i++)
    {
        for(int j=0;j<2;j++)
        {
            cout<<arr[i][j]<<" ";
        }
    }

    return 0;
}
// note this example shows that internal curly braces are not important 