void ft_putchar(char c){
    write(1,&c,1);
}

void ft_swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
};

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

int ft_strcmp(char *s1, char *s2){
    int c = 0;
    while((s1[c] != '\0') || (s2[c] != '\0')){
        if(((int)s1[c]) > ((int)s2[c])) return 1;
        if(((int)s1[c]) < ((int)s2[c])) return -1;
        c ++;
    }
    return 0;
};
