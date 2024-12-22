int ft_strcmp(char *s1, char *s2){
    int c = 0;
    while((s1[c] != '\0') || (s2[c] != '\0')){
        if(((int)s1[c]) > ((int)s2[c])) return 1;
        if(((int)s1[c]) < ((int)s2[c])) return -1;
        c ++;
    }
    return 0;
};