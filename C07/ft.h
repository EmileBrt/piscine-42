#include <stdlib.h>

//C07-00
char* ft_strdup(char *src){
    int size = 0;
    while(src[size] != '\0') size ++;
    char res[size];
    for(int i = 0; i < size; i++)res[i] = src[i];
    res[size] = '\0';
    return res;    
};

//C07-01
int *ft_range(int min, int max) {
    int size = max - min;
    if (size <= 0) {
        return NULL;
    }
    int *res = (int *)malloc(size * sizeof(int));
    if (res == NULL) {
        return NULL; 
    }
    for (int i = 0; i < size; i++) {
        res[i] = min + i;
    }
    return res;
}

//C07-02
int ft_ultimate_range(int **range, int min, int max){
    
};