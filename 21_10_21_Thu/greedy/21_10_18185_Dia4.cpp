#include <iostream>
#include <algorithm>
int main(){
    int input;
    int FCount[10001] = {0};
    int Total = 0;
    std::cin>>input;
    for(int i = 0; i < input; i++){
        std::cin>>FCount[i];
    }
    for(int i = 0; i < input; i++){
        if(FCount[i+1] > FCount[i+2]){
            int gap = 0;
            int minCountTwo = 0;
            gap = FCount[i+1] - FCount[i+2];
            minCountTwo = std::min(FCount[i], gap);
            Total += 5*minCountTwo;
            
            FCount[i] -= minCountTwo;
            FCount[i+1] -= minCountTwo;
            
            int minCountThree = 0;
            minCountThree = std::min(FCount[i], std::min(FCount[i+1], FCount[i+2]));
            Total += 7*minCountThree;
            
            FCount[i] -= minCountThree;
            FCount[i+1] -= minCountThree;
            FCount[i+2] -= minCountThree;
        }
        else{
            int minCountThree = 0;
            minCountThree = std::min(FCount[i], std::min(FCount[i+1], FCount[i+2]));
            Total += 7*minCountThree;
            
            FCount[i] -= minCountThree;
            FCount[i+1] -= minCountThree;
            FCount[i+2] -= minCountThree;
            
            int minCountTwo = 0;
            minCountTwo = std::min(FCount[i], FCount[i+1]);
            Total += 5*minCountTwo;
            
            FCount[i] -= minCountTwo;
            FCount[i+1] -= minCountTwo;
        }
        Total += 3*FCount[i];
    }
    std::cout<<Total;
}

/*int min(int a, int b){
    if(a<b)
        return a;
    else
        return b;
}*/