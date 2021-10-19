#include <iostream>

int main(){
    int input;
    int NumArray[100];
    int Count = 0;
    for(int i = 0; i < 100; i++)
        NumArray[i] = 0;
    for(int i = 0; i < 10; i++){
        std::cin>>input;
        NumArray[input%42] = 1;
    }
    for(int i = 0; i < 100; i++)
        if(NumArray[i] != 0)
            Count++;
    
    std::cout<<Count;
}