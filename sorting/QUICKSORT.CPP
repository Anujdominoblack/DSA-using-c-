// quciksort is based on divide and conquer algorithem
// worst time case complexity O(n2)
// partition is the key function here

#include<iostream>
#include<algorithm>
using namespace std;
// writing the partition function
// considering the lamuto partition

int partition(int arr[],int l,int h)
{
    int pivot = arr[h];
    int i =l-1;
    for(int j=l;j<=h-1;j++)
    {
        if(arr[j]<pivot)
        {
            i++;
            swap(arr[i],arr[j]);
        }
    }
    swap(arr[i+1],arr[h]);
    return (i+1);
}
void qsort(int arr[],int l,int h)
{
   if(l<h)
   {
      int p =partition(arr,l,h);
      qsort(arr,l,p-1);
      qsort(arr,p+1,h);  //  a recursive approach is used to do the partition recursively 
   }
}

int main()
{
    int arr[]={8,4,7,9,3,10,5};
    int n =sizeof(arr)/sizeof(arr[0]);
    int h=n-1;
    qsort(arr,0,h);
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";  // output 
    }
    return 0;
}
