#include <stdio.h>
#include "ft.h"
#include <string.h>

int main(){
    char *source = "az AAZZ";
    printf("is \"%s\" upper ? : %s \n",source, ft_strupcase(source));
    return 0;
}