#include <iostream>

int main(){
    int input1;
    int input2;
    while(1){
        scanf("%d%d", &input1, &input2);
        if(input1 == 0 && input2 == 0)
            break;
        printf("%d\n", input1+input2);
    }
}