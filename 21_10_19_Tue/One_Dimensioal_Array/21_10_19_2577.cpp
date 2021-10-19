#include <iostream>
#include <string.h>

int main(){
   int input1;
   int input2;
   int input3;
   int Value;
   int NumCount[10];
   char CharArray[10];
   std::cin>>input1>>input2>>input3; 
   Value = input1*input2*input3;
   sprintf(CharArray, "%d", Value);
   for(int i = 0; i < 10; i++)
    NumCount[i] = 0;

   for(int i = 0; CharArray[i] != '\0'; i++){
       for(int j = 0; j <= 9; j++){
           char* Check = new char;
           sprintf(Check, "%d", j);
           if(CharArray[i] == *Check){
               NumCount[j]++;
           }
           delete Check;
       }
       //std::cout<<NumCount[i]<<std::endl;
   }
   for(int i = 0; i <= 9; i++)
    std::cout<<NumCount[i]<<std::endl;
} 