#include<stdio.h>
 struct student
 {
     int age;
     float cg;
     char name[100];
 };
 int main()
 {
     int n;
     scanf("%d",&n);
     struct student stu[n];
     for(int i=0;i<n;i++)
     {
         scanf("%d %f",&stu[i].age,&stu[i].cg);
         gets(stu[i].name);
     }
     for(int i=0;i<n;i++)
     {
         printf("%d %.2f %s\n",stu[i].age,stu[i].cg,stu[i].name);
     }

     return 0;
 }
