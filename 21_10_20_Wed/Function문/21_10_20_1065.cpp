#include <iostream>

void hansu(int input){
    char numstring[4];
    int numcount = 0;
    int checkcount = 0;
    bool check = true;
    for(int i = 1; i <= input; i++){
        check = true;
        sprintf(numstring, "%d", i);
        for(int j = 0; numstring[j] != '\0'; j++){
            numcount++;
        }
        if(numcount <= 2){
            checkcount++;
        }
        else{
            int num1[numcount];
            int num2;
            for(int z = 0; z < numcount; z++){
                num1[z] = numstring[z] - '0';
            }
            num2 = num1[0] - num1[1];
            for(int x = 0; x < numcount; x++){
                if(x+1 < numcount){
                    if(num2 != num1[x] - num1[x+1]){
                        check = false;
                    }
                }
            }
            if(check == true)
                checkcount++;
        }
        numcount = 0;
    }
    std::cout<<checkcount<<std::endl;
    //sprintf(numstring, "%d", )
}

int main(){
    int input;
    std::cin>>input;
    hansu(input);
}