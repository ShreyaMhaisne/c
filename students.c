#include<stdio.h>
int main()
{
    int roll,sub1,sub2,sub3;
    char name[10];
    printf("enter name of students");
    scanf("%s",&name); 

    printf("enter roll no of students");
    scanf("%d",&roll);

    printf("enter cs marks");
    scanf("%d",&sub1);

    printf("enter maths marks");
    scanf("%d",&sub2);

    printf("enter chem marks");
    scanf("%d",&sub3);
    int total=sub1+sub2+sub3;
  int per=total/3;

    printf("name %s ",name);
    printf("roll no %d ",roll);
    printf("cs %d ",sub1);
    printf("maths %d ",sub2);
    printf("chem %d ",sub3);
    printf(" total marks is %d ",total);
    printf(" percentage is %d ",per);

   if((sub1>40)&&(sub2>40)&&(sub3>40)){
    printf("student is pass ");
    if(per>=40 && per<=60){
        printf("grade is c");
    }
     else if(per>=60 && per<=75){
        printf("grade is B");
    }
     else{
        printf("grade is A");
    }
   }
    else{
        printf("students is fail");
    }
   }
