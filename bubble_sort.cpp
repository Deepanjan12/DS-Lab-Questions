#include<stdio.h>
void bubblesort(int *a,int n)
{
    for(int i=0;i<n;i++)
    {
        int count=0;
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                int t=a[j];
                a[j]=a[j+1];
                a[j+1]=t;
                count++;
            }
        }
        if(count==0)
          return;
    }
}
int main()
{
    int a[]={2,5,17,89,66,84,11,93,1,0};
    int n=10;

    bubblesort(a,n);
    for(int i=0;i<n;i++)
    {
        printf("%d  ",a[i]);
    }
    return 0;

}