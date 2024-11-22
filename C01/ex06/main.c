#include <stdio.h>
#include "ft.h"

int main(){
    char *toprint  = "hello world";
    int len = ft_strlen(toprint);
    printf("%s is %d char long \n", toprint,len);
    return 0;
}