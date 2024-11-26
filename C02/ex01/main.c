#include <stdio.h>
#include "ft.h"

int main(){
    char *source = "source";
    char dest [100];
    
    printf("Source in Dest : %s \n", ft_strncpy(dest,source,50));
    return 0;
}