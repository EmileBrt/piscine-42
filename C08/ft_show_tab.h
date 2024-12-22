#include "ft_stock_str.h"
#include <unistd.h>

void ft_putstr(char *str){
    int i = 0;
    while(str[i] != '\0'){
        write(1,&str[i],1);
        i++;
    }
};

void ft_putnbr(int nb)
{
    if(nb >= 10){
        ft_putnbr((nb - (nb % 10))/10);
        int r = 48 + (nb % 10);
        write(1,&r,1);
    }else{
        char r = nb + 48;
        write(1,&r,1);
    }
}

void ft_show_tab(struct s_stock_str *par){
    int ac = sizeof(par);
    for(int i = 0; i < ac; i++){
        ft_putstr(par[i].str);
        write(1,"\n",1);
        ft_putnbr(par[i].size);
        write(1,"\n",1);
        ft_putstr(par[i].copy);
        write(1,"\n",1);        
    }
};