#include <unistd.h>
// C01-ex02
void ft_swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
};

// C01-ex03
void ft_div_mod(int a, int b, int *div, int *mod){
    *div = a / b ;
    *mod = a % b ;
};

// C01-ex04
void ft_ultimate_div_mod(int *a, int *b){
    int q = *a / *b;
    int r = *a % *b;
    *a = q;
    *b = r;
};

// C01-ex05
void ft_putstr(char *str){
    int i = 0;
    while(str[i] != '\0'){
        write(1,&str[i],1);
        i++;
    }
};

// C01-ex06
int ft_strlen(char *str){
    int i = 0;
    while(str[i] != '\0'){
        i++;
    }
    return i;
};

void ft_rev_int_tab(int *tab, int size){
    int temp_tab[size];
    for(int i=0; i<size;i++){
        temp_tab[i] = tab[size-1-i];
    }
    for(int i=0; i<size;i++){
        tab[i] = temp_tab[i];
    }
};