#include <iostream>

void Sum(int input){
    char numstring[input];
    int sumnum = 0;
    int num;
    for(int i = 0; i < input; i++){
        std::cin>>numstring[i];
        num = numstring[i] - '0';
        sumnum += num;
    }
    std::cout<<sumnum;
}

int main(){
    int input;
    std::cin>>input;
    Sum(input);
}