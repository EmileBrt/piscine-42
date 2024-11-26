#include <stdio.h>
#include "ft.h"
#include <string.h>

int main(){
    char *source = "source";
    printf("is \"%s\" alpha ? : %d \n",source, ft_str_is_alpha(source));
    return 0;
}