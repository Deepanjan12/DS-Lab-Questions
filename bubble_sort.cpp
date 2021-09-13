// Sort an array using Bubble Sort Technique

//Time Complexity O(N^2)
#include<stdio.h>
void bubblesort(int *a,int n)
{
    for(int i=0;i<n;i++)
    {
        int count=0;// count variable checks whether any swap is made or not
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
        if(count==0)// 0 swaps denotes that the array is Sorted
          return;
    }
}
int main()
{
    int a[100],n;                       //{2,5,17,89,66,84,11,93,1,0};
    printf("Enter The Number of Elements:\t");
    scanf("%d",&n);
    printf("Enter the Array Elements : ");
    for(int i=0;i<n;i++)
    {
          scanf("%d",&a[i]);       
    }

    bubblesort(a,n);
    printf("The Array After Sorting: \n");
    for(int i=0;i<n;i++)
    {
        printf("%d  ",a[i]);
    }
    return 0;

}