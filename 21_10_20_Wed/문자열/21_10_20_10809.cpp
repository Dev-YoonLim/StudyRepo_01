#include <iostream>

void FindString(char *input){
    int count[26];
    int inputnumber;
    for(int i = 0; i < 26; i++)
        count[i] = -1;
    for(int i = 0; input[i] != '\0'; i++){
        int number = input[i];
        for(int j = 97; j <= 122; j++){
            if(number == j){
                inputnumber = number - 97;
                if(count[inputnumber] == -1)
                    count[inputnumber] = i;
            }
        }
    }
    for(int i = 0; i < 26; i++){
        std::cout<<count[i]<<" ";
    }
}
int main(){
    char input[101];
    std::cin>>input;
    FindString(input);
}