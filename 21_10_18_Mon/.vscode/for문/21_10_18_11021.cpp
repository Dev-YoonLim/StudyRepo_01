#include <iostream>

int main(){
    int input;
    int input1;
    int input2;
    scanf("%d", &input);
    for(int i = 0; i < input; i++){
        std::cin>>input1>>input2;
        std::cout<<"Case #"<<i+1<<": "<<input1+input2<<std::endl;
    }
}