#include <iostream>

int main(){
    int input;
    scanf("%d", &input);
    if(input < 60)
        printf("F");
    else if(input < 70)
        printf("D");
    else if(input < 80)
        printf("C");
    else if(input < 90)
        printf("B");
    else
        printf("A");
}