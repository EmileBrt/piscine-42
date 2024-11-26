#include <stdio.h>
#include "ft.h"
#include <string.h>

int main(){
    char *source = "az";
    printf("is \"%s\" printable ? : %d \n",source, ft_str_is_printable(source));
    source = "A\0Z";
    printf("is \"%s\" printable ? : %d \n",source, ft_str_is_printable(source));
    return 0;
}