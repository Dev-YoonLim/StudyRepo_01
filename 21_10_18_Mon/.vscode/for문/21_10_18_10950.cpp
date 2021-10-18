#include <iostream>

int main(){
    int testcount;
    int input1;
    int input2;
    scanf("%d", &testcount);
    for(int i = 0; i < testcount; i++){
        scanf("%d%d", &input1, &input2);
        printf("%d\n", input1+input2);
    }
}