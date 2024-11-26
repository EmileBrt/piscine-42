#include <stdio.h>
#include "ft.h"
#include <string.h>

int main(){
    char *source = "az";
    printf("is \"%s\" lowercase ? : %d \n",source, ft_str_is_lowercase(source));
    source = "AZ";
    printf("is \"%s\" lowercase ? : %d \n",source, ft_str_is_lowercase(source));
    return 0;
}