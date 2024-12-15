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

//C02-02
int ft_str_is_alpha(char *str){
    if (str[1] == '\0') {
        return ('A' <= str[0] && str[0] <= 'Z') || ('a' <= str[0] && str[0] <= 'z');
    }
    for(int i = 0; i < ft_strlen(str); i++){
        if('A'>str[i])return 0;
        if('z'<str[i])return 0;
        if(('Z'<str[i])&&(str[i]<'a'))return 0;
    }
    return 1;
};

//C02-03
int ft_str_is_numeric(char *str){
    for(int i = 0; i < ft_strlen(str); i++){
        if('0'>str[i])return 0;
        if('9'<str[i])return 0;
    }
    return 1;
};

//C02-04
int ft_str_is_lowercase(char *str){
    for(int i = 0; i < ft_strlen(str); i++){
        if('a'>str[i])return 0;
        if('z'<str[i])return 0;
    }
    return 1;
};

//C02-05
int ft_str_is_uppercase(char *str){
    for(int i = 0; i < ft_strlen(str); i++){
        if('A'>str[i])return 0;
        if('Z'<str[i])return 0;
    }
    return 1;
};

//C02-06
int ft_str_is_printable(char *str){
    for(int i = 0; i < ft_strlen(str); i++){
        if(32>(int)str[i])return 0;
        if(126<(int)str[i])return 0;
    }
    return 1;
};

//C02-07
char *ft_strupcase(char *str) {
    if (!str) {
        return NULL;
    }
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - ('a' - 'A');
        }
    }
    return str;
}

//C02-08
char *ft_strlowcase(char *str) {
    if (!str) {
        return NULL;
    }
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = str[i] + ('a' - 'A');
        }
    }
    return str;
}

//C02-09
int  is_char_alpha(char c){
    if(('a'<= c)&&(c<='z')) return 1;
    if(('A'<= c)&&(c<='Z')) return 1;
    return 0;
}

int  is_char_lowercase(char c){
    if(('a'<= c)&&(c<='z')) return 1;
    return 0;
}
char *ft_strcapitalize(char *str){
    //str[i] = str[i] - ('a' - 'A');

    if ((is_char_alpha(str[0]))&& (is_char_lowercase(str[0])))str[0] = str[0] - ('a' - 'A');

    for(int i = 1; str[i] != '\0'; i++){
        if((!is_char_alpha(str[i-1]))&&(is_char_alpha(str[i]))){
            if(is_char_lowercase(str[i]))str[i] = str[i] - ('a' - 'A');
        }
    }
    return str;
}

//C02-10
unsigned int ft_strlcpy(char *dest, char *src, unsigned int size){
    unsigned size_src = 0;
    for (int i = 0; src[i] != '\0'; i++){
        size_src++;
    }
    if(size == 0) return size_src;
    if(size_src > (size -1)){
        for (unsigned int i = 0 ; i < size - 1; i++)dest[i] = src[i];
        dest[size - 1] = '\0';
    }else{
        for (unsigned int i = 0 ; i < size_src; i++)dest[i] = src[i];
        dest[size_src] = '\0';
    }
    return size_src;
};

//C02-11
void ft_puthex(int nbr){
    char hex_digits[] = "0123456789abcdef";
    if( nbr >= 16){
        int r = nbr % 16;
        int q = nbr / 16;
        write(1,&hex_digits[q],1);
        write(1,&hex_digits[r],1);

    }else{
        write(1,&hex_digits[0],1);
        write(1,&hex_digits[nbr],1);
    }
}
void ft_putstr_non_printable(char *str){
    for(int i = 0; str[i] != '\0';i++){
        if((21 <=(int)str[i] ) && ((int)str[i] <= 126)){
            write(1,&str[i],1);
        }else{
            char back = '\\';
            write(1,&back,1);
            ft_puthex((int)str[i]);
        }
    }
};

//C02-12
void ft_puthex15(unsigned long nbr){
    char hex_digits[] = "0123456789abcdef";
    char buff [16];
    for(int i = 0 ; i < 15 ; i ++){
        unsigned long r = nbr % 16;
        //write(1,&hex_digits[(int) r],1);
        buff[14-i] = hex_digits[(int) r];
        nbr = nbr / 16;
    }
    ft_putstr(buff);
}

void ft_puthex2(char c){
    char hex_digits[] = "0123456789abcdef";
    int r = (int) c % 16;
    int q = (int) c / 16;
    write(1,&hex_digits[q],1);
    write(1,&hex_digits[r],1);
}

void *ft_print_memory(void *addr, unsigned int size){
    // 00000010a161f40: 426f 6e6a 6f75 7220 6c65 7320 616d 696e Bonjour les amin
    // 00000010a161f50: 6368 6573 090a 0963 2020 6573 7420 666f ches...c est fo

    

    unsigned int q = size / 16 ;
    unsigned int r = size % 16;

    char *addr_char = (char*) addr;

    for(int i = 0 ; i < (int) q ; i ++){
        unsigned long addr_of_addr = (unsigned long) addr + (16 * i);
        ft_puthex15(addr_of_addr);
        write(1,": ",2);
        for(int j = 0; j < 8; j ++){            
            for(int k = 0; k < 2; k ++){
                ft_puthex2(addr_char[16 * i + 2 * j + k]);
            }
            write(1," ",1);
        }

        for(int j = 0; j < 16; j ++){
            if(is_char_alpha(addr_char[16 * i + j]))write(1,&addr_char[16 * i + j],1);
            else{
                write(1,".",1);
            }
        }

        write(1,"\n",1);
    }
    if(r != 0){
        unsigned long addr_of_addr = (unsigned long) addr + (16 * (q + 1));
        ft_puthex15(addr_of_addr);
        write(1,": ",2);

        for(int j = 0; j < 8; j ++){            
            for(int k = 0; k < 2; k ++){
                if ((16 * (int) q + 2 * j + k) < (16 * (int) q + (int) r - 1)){
                    ft_puthex2(addr_char[16 * (int) q + 2 * j + k]);
                }else{
                    write(1,"  ",2);
                }
            }
            if (j!=7)write(1," ",1);
        }
        write(1," ",1);
        for(int j = 0; j < (int) r ; j ++){
            
            if(is_char_alpha(addr_char[16 * (int) q + j]))write(1,&addr_char[16 * (int) q + j],1);
            else{
                write(1,".",1);
            }
        }
        write(1,"\n",1);
    }
    return addr;
};