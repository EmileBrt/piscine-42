#include <stdio.h>
#include "ft.h"

int main(){
    char a[100] = "Hello World Hello";
    char *b = "World";

    printf("res : %s \n", ft_strstr(a,b));

    return 0;
}