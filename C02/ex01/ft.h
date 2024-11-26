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

// C01-ex06
void ft_rev_int_tab(int *tab, int size){
    int temp_tab[size];
    for(int i=0; i<size;i++){
        temp_tab[i] = tab[size-1-i];
    }
    for(int i=0; i<size;i++){
        tab[i] = temp_tab[i];
    }
};

// C01-ex08
void ft_sort_int_tab(int *tab, int size){
    for (int i = 0; i < size - 1; i++) {          // Number of passes
        for (int j = 0; j < size - i - 1; j++) {  // Compare adjacent elements
            if (tab[j] > tab[j + 1]) {
                // Swap elements if they are in the wrong order
                int temp = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = temp;
            }
        }
    }
};

//C02-00
char *ft_strcpy(char *dest, char *src){
    int i = 0;
    while(src[i] != '\0'){
        dest[i] = src[i];
        i++;
    }
    return dest;
};

//C02-01
char *ft_strncpy(char *dest, char *src, unsigned int n){
    int end = 0;
    for(unsigned int i=0;i<n;i++){
        if(end == 1 ){
            dest[i] = '\0';
        }else{
            if(src[i]=='\0'){
                end = 1;
            }
            dest[i] = src[i];
        }
    }
    return dest;    
};