#include <iostream>

int main(){
    int input;
    int temp;
    std::cin>>input;
    temp = input;
    for(int i = 1; i < input; i++)
        temp += i;
    std::cout<<temp<<std::endl;
}