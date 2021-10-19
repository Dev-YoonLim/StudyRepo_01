#include <iostream>

int main(){
    int input;
    int Max, min;
    std::cin>>input;
    int Array[input];

    for(int i = 0; i < input; i++){
        std::cin>>Array[i];
        if(i == 0){
            Max = Array[i];
            min = Array[i];
        }
        if(Array[i] > Max)
            Max = Array[i];
        if(Array[i] < min)
            min = Array[i];
    }
    std::cout<<min<<" "<<Max<<std::endl;
}