#include <stdio.h>

int sumArray1(int *array, int size){
   int index;
   int sum=0;

   for(index=0;index<size;index++){
      sum = sum + *(array+index);   // array + (index * 4)
   }
   return sum;
}

int sumArray2(int *array, int size){
   int index;
   int sum=0;

   for(index=0;index<size;index++){
      sum = sum + *array; 
      array++;   //array = array + (1*4);
   }
   return sum;
}

int lenString(char *str){
   int len=0;

   while(*str!='\0'){
      len++;
      str++;
   }
   return len;
}
