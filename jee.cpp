#include<stdio.h>
#include <string.h>
struct student
{
    char name [50];
    int jeerank;      // <50,000
    int aadharnumber;
    float percent10;    // >60
    float percent12;    // >50
    char stream[10]={"CSE"};
};
student Admission_Bit[99999];
int verify(student abc)
{
      if(abc.jeerank<50000 && (int)abc.percent10>60 && (int)abc.percent12>50)
      {
          return 1;
      }
      return 0;
}
int payment()
{
     int ans;
     printf("Did you Paid your Admission Fee of Rs 70,000 ?\n");
     printf("Enter 1 for YES      0 for NO: \t");
     scanf("%d",&ans);
     return ans;
}
int cse=0,ece=0,it=0,bt=0;
void count(student *abc)
{
       int k=0;
       printf("Enter Your Stream \n");
       printf("1 for CSE   2 for ECE   3 for IT   4 for BT:");
       scanf("%d",&k);
       switch(k)
       {
           case 1: cse++;
                   strcpy(abc->stream,"CSE");
                   break;
           case 2: ece++;
                   strcpy(abc->stream,"ECE");
                   break;
           case 3: it++;
                   strcpy(abc->stream,"IT");
                   break;
           case 4: bt++;
                   strcpy(abc->stream,"BT");
                   break;
           default: cse++;                             
       }
}
int main()
{
    int n,total_students=0;
    printf("Enter Number of Students:\t");
    scanf("%d",&n);
    student s1;
    for(int i=0;i<n;i++)
    {
           printf("\nEnter your Name:\t");
           scanf("%s",&s1.name);   

           printf("\nEnter your Jee rank:\t");  
           scanf("%d",&s1.jeerank);

           printf("\nEnter your Aadhar Number:\t");
           scanf("%d",&s1.aadharnumber);

           printf("Enter your class 10th Percentile:\t");
           scanf("%f",&s1.percent10);

           printf("Enter your class 12th Percentile:\t");
           scanf("%f",&s1.percent12);

           int x=verify(s1);
           if(x==1)
           {
               x=payment();
           }
           if(x==1)
           {
                count(&s1);
                Admission_Bit[total_students]=s1;
                total_students++;
           }
    }
    printf("\nStudents Enrolled\n\n\nStream\tStudent's Name\n");
    for(int i=0;i<total_students;i++)
    {
                 printf("%s\t%s\n",Admission_Bit[i].stream,Admission_Bit[i].name);
    }
    printf("\n\n Total Students enrolled in:\n");
    printf("CSE= %d\n",cse);
    printf("ECE= %d\n",ece);
    printf("IT= %d\n",it);
    printf("BT= %d\n",bt);
    return 0;
}
