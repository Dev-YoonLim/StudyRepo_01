#include <iostream>

int main(){
    int input;
    std::cin>>input;
    float Line[input];
    float Line2[1000];
    float Total;
    float AvgOverCount = 0.f;
    float Avg[input];
    float AvgOverPerArray[input];
    for(int i = 0; i < input; i++){
        std::cin>>Line[i];
        for(int j = 0; j < Line[i]; j++){
            std::cin>>Line2[j];
            Total += Line2[j];
        }
        Avg[i] = Total/Line[i];
        for(int j = 0; j < Line[i]; j++){
            if(Line2[j] > Avg[i])
                AvgOverCount++;
        }
        AvgOverPerArray[i] = (AvgOverCount/Line[i])*100.f;
        printf("%.3f%\n", AvgOverPerArray[i]);
        Total = 0.f;
        AvgOverCount = 0.f;
    }
}