// we consider the first element as pivot element
// we begin with two indices i and j as i=l-1 and j=h+1
// and we increse i and decrease j and when we find i greater than pivot we will stop
// and if we find j less than pivot we will stop
// if i and j crossed we return j
// else we sill swap them
#include<iostream>
using namespace std;

// function for partition 
int partition(int arr[],int l,int h)
{
    int pivot = arr[l];
    int i =l-1;
    int j = h+1;
    while(true)
    {
        do{
            i++;}
            while(arr[i]<pivot);
        do{
              j--;
        }while(arr[j]>pivot);

        if(i>=j) {
            return j;
        }
        swap(arr[i],arr[j]);
    }
}

// driver code
int main()
{
    int arr[]={5,10,9,12};
    int result = partition(arr,0,3);
    cout<<result;
    return 0;
}