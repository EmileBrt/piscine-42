#include <stdio.h>
#include "ft.h"

int main(){
    char *source = "source";
    char dest [100];
    
    printf("Source in Dest : %s \n", ft_strcpy(source,dest));
    return 0;
}