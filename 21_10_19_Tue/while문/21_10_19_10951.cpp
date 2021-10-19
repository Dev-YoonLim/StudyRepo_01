#include <iostream>

int main(){
    int input;
    int value1;
    int value2;
    int value3;
    int count = 1;
    std::cin>>input;
    value3 = input;
    while(1){
        value1 = input/10;
        value2 = input%10;
        input = value2*10 + (value1+value2)%10;
        if(value3 == input)
            break;
        count++;
    }
    std::cout<<count<<std::endl;
}