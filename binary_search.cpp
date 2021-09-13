// Program to check whether an element is present in a Sorted Array or not
// Time Complexity O(Log N)
#include<stdio.h>
int bsearch(int *a,int low,int high,int key)
{
        if(low<=high)
        {
              int mid=(low+high)/2;
             if(a[mid]==key)
             {
                 return mid;
             }
             else if(a[mid]<key)
             {
                 bsearch(a,mid+1,high,key);
             }
             else
             {
                 bsearch(a,low,mid-1,key);
             }
        }
        else
        {
             return -1;
        }      
}
int main()
{
    int a[]={0,1,2,5,11,17,66,84,89,93};
    int n=10;
    int key=84;
    int res=bsearch(a,0,n-1,key);
    if(res==-1)
    {
        printf("Element not found");
    }
    else
    {
        printf("Element is present as %dth position",res);
    }
    return 0;

}