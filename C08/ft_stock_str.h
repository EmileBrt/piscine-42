#include <stdlib.h> 

char *ft_strcpy(char *dest, char *src){
    int i = 0;
    while(src[i] != '\0'){
        dest[i] = src[i];
        i++;
    }
    return dest;
};

int ft_strlen(char *str){
    int i = 0;
    while(str[i] != '\0'){
        i++;
    }
    return i;
};


typedef struct s_stock_str{
    int size;
    char *str;
    char *copy;
}t_stock_str;

struct s_stock_str *ft_strs_to_tab(int ac, char **av){
    struct s_stock_str *res = (struct s_stock_str *)malloc(ac * sizeof(struct s_stock_str *));
    if (res == NULL){
        return NULL;
    }
    for(int i = 0; i < ac; i ++ ){
        res[0].size = ft_strlen(av[0]);
        res[0].str = av[0];
        res[i].copy = (char *)malloc((res[i].size + 1) * sizeof(char));
        if (res[i].copy == NULL) {
            // Handle malloc failure
            for (int j = 0; j < i; j++) {
                free(res[j].copy);
            }
            free(res);
            return NULL;
        }
        ft_strcpy(res[i].copy, av[i]);
    }
    return res;
};

