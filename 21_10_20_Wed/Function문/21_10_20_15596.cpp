#include <iostream>
#include <vector>

long long sum(std::vector<int>&a){
    std::vector<int>::iterator vec = a.begin();
    int count = 0;
    for(;vec != a.end(); vec++){
        count += *vec;
    }
    return count;
}

int main(){
    std::vector<int> vec;
    vec.push_back(10);
    vec.push_back(50);
    vec.push_back(50);

    sum(vec);
}