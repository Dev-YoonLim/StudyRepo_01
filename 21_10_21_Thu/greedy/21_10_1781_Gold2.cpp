#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

#define MAX 200000
//int Que[MAX] = {0};
std::priority_queue<int, std::vector<int>, std::greater<int>> Que;

struct Ramenjoa{
    int DeadLine;
    int CupRamen;
};

bool Compare(const Ramenjoa& q1, const Ramenjoa& q2){
    if(q1.DeadLine == q2.DeadLine){
        return q1.CupRamen < q2.CupRamen;
    }
    else
        return q1.DeadLine < q2.DeadLine;
}

bool SortCompare(const int a, const int b){
    return a > b;
}

int main(){
    int QCount;
    int TotalCupRamen = 0;
    int QueCount = 0;
    int IndexCount = 0;
    int Lowestindex = 0;
    int LostNumberCount = 0;
    std::cin>>QCount;
    Ramenjoa Q[MAX] = {0, 0};
    for(int i = 0; i < QCount; i++){
        std::cin>>Q[i].DeadLine>>Q[i].CupRamen;
    }
    std::sort(Q, Q+QCount, Compare);
    for(int i = 1; IndexCount < QCount;){
        if(i > QueCount){
            Que.push(Q[IndexCount].CupRamen);
            QueCount++;
            IndexCount++;
        }
        else{
            Que.pop();
            Que.push(Q[IndexCount].CupRamen);
            //std::sort(Que, Que+QueCount, SortCompare);
            //Que[QueCount-1] = Q[IndexCount].CupRamen;
            IndexCount++;
        }
        if(i != Q[IndexCount].DeadLine)
            i++;
    }
    for(int i = QueCount; i > 0; i--){
        TotalCupRamen+=Que.top();
        Que.pop();
    }
    std::cout<<TotalCupRamen;
}

 /*for(int i = 0; i < QCount; i++){
        std::cout<<Q[i].DeadLine<<" ";
    }
    std::cout<<std::endl;
    for(int i = 0; i < QCount; i++){
        std::cout<<Q[i].CupRamen<<" ";
    }*/

/*if(i == Q[CupRamenindex].DeadLine){
            LowestCupRamen[CupRamenindex] = Q[CupRamenindex].CupRamen;
            Lowestindex++;
            TotalCupRamen += Q[CupRamenindex].CupRamen;
            std::cout<<i<<" main "<<TotalCupRamen<<std::endl;
            //std::cout<<TotalCupRamen<<std::endl;
            CupRamenindex++;
            std::sort(LowestCupRamen, LowestCupRamen+Lowestindex);
        }
        while(i == Q[CupRamenindex].DeadLine){
            if(i >= 2){
                if(LowestCupRamen[0] < Q[CupRamenindex].CupRamen){
                    TotalCupRamen -= LowestCupRamen[0];
                    TotalCupRamen += Q[CupRamenindex].CupRamen;
                    LostNumber[LostNumberCount] = LowestCupRamen[0];
                    LowestCupRamen[0] = Q[CupRamenindex].CupRamen;
                    std::cout<<i<<" pass "<<TotalCupRamen<<std::endl;
                    std::sort(LowestCupRamen, LowestCupRamen+Lowestindex);
                    LostNumberCount++;
                    //LowestCupRamen[0] < Q[CupRamenindex].CupRamen
                }
            }
            CupRamenindex++;
        }*/