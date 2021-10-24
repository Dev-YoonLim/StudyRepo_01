#include <iostream>
#include <algorithm>
#include <vector>
#include <queue>

std::priority_queue < int,
std::vector<int>,
std::greater<int> > pq;

struct SendInfo {
    int StartTown;
    int EndTown;
    int SendBox;
};

bool Compare(const SendInfo & a, const SendInfo & b) {
    if (a.EndTown == b.EndTown) {
        if (a.StartTown == b.StartTown) {
            return a.SendBox < b.SendBox;
        }
        else {
            return a.StartTown < b.StartTown;
        }
    } 
    else {
        return a.EndTown < b.EndTown;
    }
}

int main() {
    int Town;
    int BoxLimit;
    int SendCount;
    int TakeBox = 0;
    long long TotalBox = 0;
    int NowTown = 1;
    int temp = 0;
    SendInfo SendInfos[10001] = {0,0,0};
    int trunk[10001] = {0};
    std::cin >> Town >> BoxLimit;
    std::cin >> SendCount;
    for (int i = 0; i < SendCount; i++) {
        std::cin >> SendInfos[i].StartTown >> SendInfos[i].EndTown >> SendInfos[i].SendBox;
    }
    std::sort(SendInfos, SendInfos + SendCount, Compare);

    //std::cout << std::endl;
    for (int i = 0; i < SendCount; i++) {
        TakeBox = 0;
        //std::cout << SendInfos[i].StartTown << " "; std::cout << SendInfos[i].EndTown
        //<< " "; std::cout << SendInfos[i].SendBox << std::endl;
        for(int j = SendInfos[i].StartTown; j < SendInfos[i].EndTown; j++){
            TakeBox = std::max(trunk[j], TakeBox);
        }
        int value = std::min(SendInfos[i].SendBox, BoxLimit - TakeBox);
        TotalBox += value;

        for(int j = SendInfos[i].StartTown; j < SendInfos[i].EndTown; j++){
            trunk[j] += value;
        }
    }
    std::cout<<TotalBox;
}


/*for(int i = 0; i < SendCount; i++){
        std::cout<<SendInfos[i].StartTown<<" ";
    }
    std::cout<<std::endl;
    for(int i = 0; i < SendCount; i++){
        std::cout<<SendInfos[i].EndTown<<" ";
    }
    std::cout<<std::endl;
    for(int i = 0; i < SendCount; i++){
        std::cout<<SendInfos[i].SendBox<<" ";
    }*/

    /*NowTown = SendInfos[0].StartTown;
    for(int i = 0; i < SendCount; i++){
        if(SendInfos[i].StartTown != NowTown){
            NowTown = SendInfos[i].StartTown;
            TotalBox += trunk[NowTown];
            TakeBox -= trunk[NowTown];
            trunk[NowTown] = 0;
        }
        if(TakeBox < BoxLimit){
            TakeBox += SendInfos[i].SendBox;
            trunk[SendInfos[i].EndTown] += SendInfos[i].SendBox;
            if(TakeBox > BoxLimit){
                TakeBox -= (TakeBox-BoxLimit);
                trunk[SendInfos[i].EndTown]-=(TakeBox-BoxLimit);
            }
        }
        else{
            if(SendInfos[i].EndTown < pq.top()){
                if(trunk[pq.top()] > SendInfos[i].SendBox){
                    trunk[pq.top()] -= SendInfos[i].SendBox;
                    trunk[SendInfos[i].EndTown] += SendInfos[i].SendBox;
                }
                else{
                    trunk[SendInfos[i].EndTown] += trunk[pq.top()];
                    trunk[pq.top()] = 0;
                    temp = pq.top();
                    while(temp == pq.top())
                        pq.pop();
                }
            }
        }
        if(pq.empty() == true)
            pq.push(SendInfos[i].EndTown);
        else if (pq.top() != SendInfos[i].EndTown)
            pq.push(SendInfos[i].EndTown);
    }
    if(TakeBox != 0)
        TotalBox += TakeBox;
    std::cout<<TotalBox;*/