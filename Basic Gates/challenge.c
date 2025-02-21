#include <stdio.h>

int main() {

int a,b,andResult,orResult,notResult1,notResult2;

printf("This is a program that that tells the value of two passing gates\n");
printf("Enter two values use 0 and 1 only\n");

  scanf("%d %d", &a, &b);

     andResult = ( a && b);
     orResult = ( a || b);

     notResult1 = !andResult;
     notResult2 = !orResult;


printf("Your result in AND operator is %d\n",andResult);
printf("Your result in OR operator is %d\n",orResult);
printf("Your result in using with Not operator with two gates are %d and %d",notResult1, notResult2);
return 0;

}