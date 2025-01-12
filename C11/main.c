#include <stdio.h>
#include "ft.h"
#include <stdio.h>

int main(int argc, char *argv[]) {
    if(argc == 4){
        int a = atoi(argv[1]);
        char * op = argv[2];
        int b = atoi(argv[3]);
        // printf("a : %i op : %s b : %i\n",a,op,b);
        if(*op == '+')ft_putnbr(a+b);
        if(*op == '-')ft_putnbr(a-b);
        if(*op == '%')ft_putnbr(a%b);
        if(*op == '*')ft_putnbr(a*b);
        if(*op == '/'){
            if(b != 0)ft_putnbr(a/b);
            else{
                ft_putstr("Stop: diving by zero \n");
            }
        }
    }else{
        ft_putstr("Wrong Number of arguments : value1 OPERATOR value2 \n");
    }
    return 0;
}
