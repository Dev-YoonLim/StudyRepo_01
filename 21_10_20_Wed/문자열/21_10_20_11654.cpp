#include <iostream>

void askiicode(char charinput){
    int num = charinput;
    std::cout<<num;
}

int main(){
    char charinput;
    std::cin>>charinput;
    askiicode(charinput);
}