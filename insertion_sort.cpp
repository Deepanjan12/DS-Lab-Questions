//Sort an array using Insertion Sort Technique
//Time Complexity O(N^2)
#include<stdio.h>
void insertsort(int *a,int n)
{
     for(int i=1;i<n;i++)
              {
                  int k=i-1;
                  int store=a[i];
                  while(a[k]>store && k>-1)
                  {
                     a[k+1]=a[k];     
                     k--;
                  }
                  a[k+1]=store;
              }
}
int main()
{
    int a[]={2,5,17,89,66,84,11,93,1,0};
    int n=10;
    insertsort(a,n);
    for(int i=0;i<n;i++)
    {
        printf("%d  ",a[i]);
    }
    return 0;

}