#include <iostream>

int main(){
    int input;
    std::cin>>input;
    for(int i = 0; i < input; i++){
        for(int j = 0; j < input-i-1; j++){
            std::cout<<" ";
        }
        for(int z = 0; z <= i; z++){
            std::cout<<"*";
        }
        std::cout<<std::endl;
    }
}