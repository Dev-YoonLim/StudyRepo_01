#include <iostream>

int main(){
    int input1;
    int input2;

    scanf("%d%d", &input1, &input2);
    if(input1 > input2)
        printf(">");
    else if(input1 < input2)
        printf("<");
    else   
        printf("==");
}