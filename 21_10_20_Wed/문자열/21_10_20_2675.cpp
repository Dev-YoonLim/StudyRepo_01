#include <iostream>
#include <string.h>
/*int wordloop(int* linecount, int loopcount){
    int wordcount[loopcount];
    for(int i = 0; i < loopcount; i++)
        wordcount[i] = 0;
    char words[loopcount][20];
    for(int i = 0; i <loopcount; i++){
        std::cin>>linecount[i];
        std::cin>>words[i];
        for(int j = 0; words[i][j] != '\0'; j++)
            wordcount[i]++;
    }
    for(int i = 0; i <loopcount; i++){
        for(int j = 0; j < wordcount[i]; j++){
            for(int z = 0; z < linecount[i]; z++){
                std::cout<<words[i][j];
            }
        }
        std::cout<<std::endl;
    }
}
int wordloop(int loopcount){
    int stringnum;
    char strings[21];
    int stringstream;
    for(int i = 0; i < loopcount; i++){
        std::cin>>stringnum;
        std::cin>>strings;
        for(int j = 0; j < strlen(strings); j++){
            for(stringstream = 0; stringstream < stringnum; stringstream++){
                std::cout<<strings[j];
            }
        }
        std::cout<<std::endl;
    }
}*/

int main(){
    int loopcount;
    std::cin>>loopcount;
    int stringnum;
    char strings[21];
    int stringstream;
    for(int i = 0; i < loopcount; i++){
        std::cin>>stringnum;
        std::cin>>strings;
        for(int j = 0; j < strlen(strings); j++){
            for(stringstream = 0; stringstream < stringnum; stringstream++){
                std::cout<<strings[j];
            }
        }
        std::cout<<std::endl;
    }
}