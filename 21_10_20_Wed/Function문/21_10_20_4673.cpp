#include <iostream>

void selfnum(){
    char numstring[50000];
    bool check[10001];
    int checknumer = 0;
    for(int i = 1; i <= 10000; i++)
        check[i] = false;
    for(int i = 1; i <= 10000; i++){
        sprintf(numstring, "%d", i);
        for(int j = 0; numstring[j] != '\0'; j++){
            int num = numstring[j] - '0';
            checknumer += num;
            //std::cout<<checknumer<<std::endl;
        }
        checknumer += i;
        for(int z = 1; z <= 10000; z++){
            if(z == checknumer){
                check[z] = true;
                checknumer = 0;
            }
        }
    }
    for(int i = i; i <= 9993; i++){
        if(check[i] == false)
            std::cout<<i<<std::endl;
    }
}
int main(){
    int num = 0;
    selfnum();
}