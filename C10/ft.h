#include <unistd.h>

void ft_putstr(char *str){
    int i = 0;
    while(str[i] != '\0'){
        write(1,&str[i],1);
        i++;
    }
};

int ft_strlen(char *str){
    int i = 0;
    while(str[i] != '\0'){
        i++;
    }
    return i;
};

int ft_str_is_printable(char *str){
    for(int i = 0; i < ft_strlen(str); i++){
        if(32>(int)str[i])return 0;
        if(126<(int)str[i])return 0;
    }
    return 1;
};

