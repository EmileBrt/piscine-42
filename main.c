#include <stdio.h>
#include "ft.h"

int main(){
    char *a = "       ---+--+1234ab567";
    int r = ft_atoi(a);
    printf("r : %d \n", r);
    return 0;
}