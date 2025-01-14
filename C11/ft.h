#include <unistd.h>
#include <stdlib.h>
void ft_sort_string_tab(char **tab);
int ft_strlen(char *str){
    int i = 0;
    while(str[i] != '\0'){
        i++;
    }
    return i;
};

int ft_pow10(int n){
    if( 0 == n) return 1;
    return 10 * ft_pow10( n - 1);
}

void ft_foreach(int *tab, int length, void(*f)(int)){
    for(int i = 0; i < length ; i++){
        f(tab[i]);
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

int ft_double(int a){
    return 2*a;
}

int *ft_map(int *tab, int length, int(*f)(int)){
    for(int i = 0; i < length ; i++){
        tab[i] = f(tab[i]);
    }
    return tab;
};

// int ft_any(char **tab, int(*f)(char*)){
//     int i = 0;
//     while(tab[i] != '\0'){
//         if(f(tab[i]) != 0) return 0;
//     }
//     return 1;
// };

int ft_count_if(char **tab, int length, int(*f)(char*)){
    int c = 0;
    for(int i = 0; i < length ; i++){
        if( f(tab[i]) != 0) c++;
    }
    return c;
};

int ft_is_sort(int *tab, int length, int(*f)(int, int)){
    for(int i = 0; i < length - 1; i++){
        if( f(tab[i + 1], tab[i]) < 0) return 0;
    }
    return 1;
};

void ft_putstr(char *str){
    int i = 0;
    while(str[i] != '\0'){
        write(1,&str[i],1);
        i++;
    }
};

int ft_atoi(char *str) {
    return atoi(str);
}

int ft_strcmp(char *s1, char *s2){
    int c = 0;
    while((s1[c] != '\0') || (s2[c] != '\0')){
        if(((int)s1[c]) > ((int)s2[c])) return 1;
        if(((int)s1[c]) < ((int)s2[c])) return -1;
        c ++;
    }
    return 0;
};

void ft_sort_string_tab(char **tab) {
    int i, j;
    char *temp;

    // Bubble Sort algorithm
    for (i = 0; tab[i] != NULL; i++) {
        for (j = 0; tab[j + 1] != NULL; j++) {
            if (ft_strcmp(tab[j], tab[j + 1]) > 0) {
                // Swap the pointers
                temp = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = temp;
            }
        }
    }
}

void ft_advanced_sort_string_tab(char **tab, int(*cmp)(char *, char *)){
    int i, j;
    char *temp;

    // Bubble Sort algorithm
    for (i = 0; tab[i] != NULL; i++) {
        for (j = 0; tab[j + 1] != NULL; j++) {
            if (cmp(tab[j], tab[j + 1]) > 0) {
                // Swap the pointers
                temp = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = temp;
            }
        }
    }
};