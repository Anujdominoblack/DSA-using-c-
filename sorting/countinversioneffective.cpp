// the idea is based on merge sort 
// we divide the array into two halves andd sort it  recursively
// and then we will merge it
// we also count inversion while we are sorting the array
// we count the inversion in both halves
#include<iostream>
using namespace std;
// first count and merge function
// this function is similar to merge sort function except we have res variable for counting
int countandmerge(int arr[],int l,int m,int r) //paramters are same as merge function
{  int n1=m-l+1,n2=r-m;
   int left[n1],right[n2];
   for(int i=0;i<n1;i++)
   {
    left[i]=arr[i];
   }
   for(int i=0;i<n2;i++)
   {
    right[i]=arr[m+1+i];
   }

   int res=0,i=0,j=0,k=l;
   while(i<n1 && j<n2)
   {
    if(left[i]<=right[j])
    {
        arr[k]=left[i];
        i++;
    }
    else{
        arr[k]=right[j];
        j++;
        res=res+(n1-i);  // we are using it as both the array are sorted when left becomes greater every element of left will be 
        // bigger so we subtract current index from that particular index
}k++;
   }
while(i<n1)   // for filling the remaing eleemnts
{
    arr[k]=left[i];i++;k++;
}
while(j<n2)
{
    arr[k]=right[j];j++;k++;
}
return res;
}

// now we will write our cout inversion function
int countinv(int arr[],int l,int r)
{
    int res=0;
    if(l<r)// as we want minimum of two elements
    {
       int m=(l+r)/2;
       res+=countinv(arr,l,m);
       res+=countinv(arr,m+1,r);
       res+=countandmerge(arr,l,m,r);
    }
    return res;
}
// driver code
int main()
{
    int arr[]={2,4,1,3,5};
    int res=countinv(arr,0,4);
    cout<<res;
    return 0;
}