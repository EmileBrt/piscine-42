#include <stdio.h>

int main(){
    for(int i = 0; i < 256 ; i++){
        printf("number : %d value : %c \n", i, (char)i);
    }
    return 0;
}