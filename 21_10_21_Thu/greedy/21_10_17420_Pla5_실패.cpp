#include <iostream>

int main() {
    int ConCount;
    int ConLimit[1001] = {0};
    int ConUseDay[1001] = {0};
    int Total = 0;

    std::cin>>ConCount;
    for(int i = 0; i < ConCount; i++) {
        std::cin>>ConLimit[i];
    }
    for(int i = 0; i < ConCount; i++) {
        std::cin>>ConUseDay[i];
    }
  
    std::cout<<Total;
}
