#include <iostream>

int main(){
    int input[9];
    int Max;
    int MaxCount;
    for(int i = 0; i < 9; i++){
        std::cin>>input[i];
        if(i == 0){
            Max = input[i];
            MaxCount = 1;
        }
        else{
            if(input[i] > Max){
            Max = input[i];
            MaxCount = i+1;
            }
        }
    }
    std::cout<<Max<<std::endl;
    std::cout<<MaxCount<<std::endl;
}