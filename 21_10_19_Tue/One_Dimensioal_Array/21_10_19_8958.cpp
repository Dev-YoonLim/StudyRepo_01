#include <iostream>

int main(){
    int input;
    int Point = 0;
    int Total;
    std::cin>>input;
    char ox[input][80];

    for(int i = 0; i < input; i++){
        std::cin>>ox[i];
    }
    for(int i = 0; i < input; i++){
        for(int j = 0; ox[i][j] != '\0'; j++){
            if(ox[i][j] == 'o' || ox[i][j] == 'O'){
                Point++;
                Total += Point;
            }
            else
                Point = 0;
        }
        std::cout<<Total<<std::endl;
        Total = 0;
        Point = 0;
    }
}