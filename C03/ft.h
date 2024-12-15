//C03-00
int ft_strcmp(char *s1, char *s2){
    int c = 0;
    while((s1[c] != '\0') || (s2[c] != '\0')){
        if(((int)s1[c]) > ((int)s2[c])) return 1;
        if(((int)s1[c]) < ((int)s2[c])) return -1;
        c ++;
    }
    return 0;
};

//C03-01
int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    unsigned int c = 0;
    while((s1[c] != '\0') || (s2[c] != '\0') || (c <= n)){
        if(((int)s1[c]) > ((int)s2[c])) return 1;
        if(((int)s1[c]) < ((int)s2[c])) return -1;
        c ++;
    }
    return 0;
};

//C03-02
char *ft_strcat(char *dest, char *src){
    int c = 0;
    while(dest[c] != '\0') c++;
    int d = 0;
    while(src[d] != '\0'){
        dest[c + d] = src[d];
        d++;
    }
    dest[c + d] = '\0';
    return dest;
};

//C03-03
char *ft_strncat(char *dest, char *src, unsigned int nb){
    int c = 0;
    while(dest[c] != '\0') c++;
    unsigned int d = 0;
    while(d < nb && src[d] != '\0'){
        dest[c + d] = src[d];
        d++;
    }
    dest[c + d] = '\0';
    return dest;
};

//C03-04
char *ft_strstr(char *str, char *to_find){
    if (to_find[0] == '\0') {
        return str; 
    }

    int size_find = 0;
    while(to_find[size_find] != '\0'){size_find++;}

    for (int c = 0; str[c] != '\0'; c++) {
        int match = 1;
        for (int i = 0; i < size_find; i++) {
            if (str[c + i] == '\0' || str[c + i] != to_find[i]) {
                match = 0;
                break;
            }
        }
        if (match) {
            return &str[c]; 
        }
    }
    return NULL; 
}

//C03-05
unsigned int ft_strlcat(char *dest, char *src, unsigned int size) {
    unsigned int size_dest = 0;
    while (dest[size_dest] != '\0' && size_dest < size) {
        size_dest++;
    }

    unsigned int size_src = 0;
    while (src[size_src] != '\0') {
        size_src++;
    }

    if (size <= size_dest) {
        return size + size_src;
    }

    unsigned int i = 0;
    while (src[i] != '\0' && (size_dest + i) < (size - 1)) {
        dest[size_dest + i] = src[i];
        i++;
    }

    dest[size_dest + i] = '\0';
    return size_dest + size_src;
}
