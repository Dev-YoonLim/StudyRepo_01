#include <iostream>

int main(){
    int input;
    float Max;
    float Total;
    float Avg;
    std::cin>>input;
    float Point[input];
    for(int i = 0; i < input; i++){
        std::cin>>Point[i];
        if(i == 0){
            Max = Point[0];
        }
        else{
            if(Point[i] > Max)
                Max = Point[i];
        }
    }
    for(int i = 0; i < input; i++){
        Point[i] = (Point[i]/Max) * 100;
        Total += Point[i];
    }
    Avg = Total/input;
    std::cout<<Avg;
}