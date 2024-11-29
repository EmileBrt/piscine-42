#include <stdio.h>
#include <string.h>
#include "ft.h"

int main(){
    char test_str[] = "to up in UPPER \n";
    printf("test : %s \n", test_str);
    printf("after : %s \n", ft_strupcase(test_str));
    return 0;
}