// Search for an Element in an Array (works for both sorted and unsorted ones)
//Time Complexity O(N)

//Used Recursion
#include<stdio.h>
int lsearch(int *a,int n,int key)
{
        if(n==-1)
        {
            return -1;
        }
        if(a[n-1]==key)
        {
            return n-1;
        }
        return lsearch(a,n-1,key);
}
int main()
{
    int a[]={2,5,17,89,66,84,11,93,1,0};
    int n=10;
    int key=84;
    int res=lsearch(a,n,key);
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