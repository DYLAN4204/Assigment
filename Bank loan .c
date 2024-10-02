/*
author:kigen Dylan 
reg no:CT101/G/21726/24
*/
#include <stdio.h>
int main()
{
 int age;
 float salary;
 
 //prompt the user to enter age
 printf("enter the age:");
 scanf("%d",&age);
 
 //prompt the user to enter amount of salary
 printf("enter amount of the salary:");
 scanf("%f",&salary);
 
 if(age>=21&&salary>=21000) {
 printf("congratulations you qualify for the loan");
 }
 else{
  printf("unfortunately we are unable to offer you a loan this time");
  
  }
  return 0;
  }
  