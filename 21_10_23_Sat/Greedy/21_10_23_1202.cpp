#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

std::priority_queue<int> pq;

struct Jewel{
    int Weight;
    int Cost;
};

bool JewelCompare(const Jewel& a, const Jewel& b){
    if(a.Weight == b.Weight){
        return a.Cost > b.Cost;
    }
    else
        return a.Weight < b.Weight;
}

void InitJewel(Jewel* Jewels, int JewelCount){
    for(int i = 0; i < JewelCount; i++){
        std::cin>>Jewels[i].Weight
        >>Jewels[i].Cost;
    }
}

void InitBagWeight(int* BagWeight, int BagCount){
    for(int i = 0; i < BagCount; i++){
        std::cin>>BagWeight[i];
    }
}

int main(){
    int JewelMaxCount;
    int BagMaxCount;
    int JewelCount = 0;
    int BagCount = 0;
    int BaginJew = 0;
    long long TotalCost = 0;
    std::cin>>JewelMaxCount>>BagMaxCount;
    Jewel Jewels[JewelMaxCount];
    int BagWeight[BagMaxCount];
    InitJewel(Jewels, JewelMaxCount);
    InitBagWeight(BagWeight, BagMaxCount);

    std::sort(BagWeight, BagWeight+BagMaxCount);
    std::sort(Jewels, Jewels+JewelMaxCount, JewelCompare);
    

    int index = 0;

    for(int i = 0; i < BagMaxCount; i++){
        for(; index < JewelMaxCount && BagWeight[i] >= Jewels[index].Weight; index++){
            pq.push(Jewels[index].Cost);
        }
        if(pq.empty() == false){
            TotalCost += pq.top();
            pq.pop();
        }
    }
    std::cout<<TotalCost;

}

/*if(i >= Jewels[JewelCount].Weight){
                if(Jewels[JewelCount].Cost > pq.top()){
                    pq.pop();
                    pq.push(Jewels[JewelCount].Cost);
                    JewelCount++;
                }
                else{
                    pq.push(Jewels[JewelCount].Cost);
                    BagCount++;
                    JewelCount++;
                    BaginJew++;
                }
            }
            else{
                BagCount++;
                if(BagWeight[BagCount] == Jewels[JewelCount].Weight){
                    i = Jewels[JewelCount].Weight;
                }
            }*/