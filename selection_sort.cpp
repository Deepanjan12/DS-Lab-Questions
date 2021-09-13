//Sort an Array Using Selection Sort algorithm
//Time Complexity O(N^2)
#include<stdio.h>
void selectionsort(int *a,int n)
{
    for(int i=0;i<n-1;i++)
    {
        int min=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
            {
                min=j;
            }
        }
        int t=a[min];
        a[min]=a[i];
        a[i]=t;
    }
}
int main()
{
    int a[]={2,5,17,89,66,84,11,93,1,0};
    int n=10;

    selectionsort(a,n);
    for(int i=0;i<n;i++)
    {
        printf("%d  ",a[i]);
    }
    return 0;

}