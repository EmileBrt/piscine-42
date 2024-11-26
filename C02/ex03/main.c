#include <stdio.h>
#include "ft.h"
#include <string.h>

int main(){
    char *source = "1";
    printf("is \"%s\" numeric ? : %d \n",source, ft_str_is_numeric(source));
    source = "12ab3";
    printf("is \"%s\" numeric ? : %d \n",source, ft_str_is_numeric(source));
    return 0;
}