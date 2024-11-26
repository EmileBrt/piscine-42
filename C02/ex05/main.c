#include <stdio.h>
#include "ft.h"
#include <string.h>

int main(){
    char *source = "az";
    printf("is \"%s\" uppercase ? : %d \n",source, ft_str_is_uppercase(source));
    source = "AZ";
    printf("is \"%s\" uppercase ? : %d \n",source, ft_str_is_uppercase(source));
    return 0;
}