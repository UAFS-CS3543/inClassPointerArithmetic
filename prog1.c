#include <stdio.h>
#include "funlib.h"

int main(){
   int numbers[]={5,10,15,20};
   int sum;
   char str[1000]="This is a test";
   char str1[100]="Hello";
   int len;

   sum=sumArray1(numbers,4);
   printf("Sum: %d\n",sum);

   sum=sumArray2(numbers,4);
   printf("Sum: %d\n",sum);

   len=lenString(str);
   printf("Len: %d\n",len);

   len=lenString(str1);
   printf("Len: %d\n",len);
   return 0;
}
