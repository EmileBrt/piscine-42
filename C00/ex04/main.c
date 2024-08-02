#include "ft_putchar.h"
#include <unistd.h>

int main(){
    int p = 0;
    int n = -3;
    ft_is_negative(p);
    write(1,"\n",1);
    ft_is_negative(n);
    write(1,"\n",1);
    return 0;
}