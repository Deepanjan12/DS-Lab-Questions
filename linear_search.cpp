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
    int a[100],n,key;                       //{2,5,17,89,66,84,11,93,1,0};
    printf("Enter The Number of Elements:\t");
    scanf("%d",&n);
    printf("Enter the Array Elements : ");
    for(int i=0;i<n;i++)
    {
          scanf("%d",&a[i]);       
    }
    printf("Enter the element to be searched:\t");
    scanf("%d",&key);
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