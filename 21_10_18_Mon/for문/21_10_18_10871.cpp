#include <iostream>

int main(){
    int input1;
    int input2; 
    int input3;
    int count = 0;
    std::cin>>input1>>input2;
    
    int temp[input1];
    for(int i = 0; i < input1; i++){
        std::cin>>input3;
        if(input3 < input2){
            temp[count] = input3;
            count++;
        }
    }
    for(int i = 0; i < count; i++)
        std::cout<<temp[i]<<" ";
}