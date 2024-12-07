#include <unistd.h>
//C00-00
void ft_putchar(char c){
    write(1,&c,1);
}
//C00-01
void ft_print_alphabet(){
    char c = 'a';
    for(int i = 0; i < 26 ; i++) {
        write(1, &c, 1);
        c ++;
    }    
}

//C00-02
void ft_print_alphabet_rev(){
    char c = 'z';
    for(int i = 0; i < 26 ; i++) {
        write(1, &c, 1);
        c --;
    }    
}

//C00-03
void ft_print_numbers(){
    char c = '1';
    for(int i = 0; i < 9 ; i++) {
        write(1, &c, 1);
        c ++;
    }    
}

//C00-04
void ft_is_negative(int c){
    if(c >= 0){
        write(1,"p",1);
    }else{
        write(1,"n",1);
    }
}

//C00-05
void	ft_print_comb(void)
{
	int	a;
	int	b;
	int	c;

	a = '0';
	while (a <= '7')
	{
		b = a + 1;
		while (b <= '8')
		{
			c = b + 1;
			while (c <= '9')
			{
				write (1, &a, 1);
				write (1, &b, 1);
				write (1, &c, 1);
				if (a != '7'){
                    write (1, ", ", 2);
                }else{
                    write(1, "\n",1);
                }
					
				++c;
			}
			++b;
		}
		++a;
	}
}

//C00-06
void	ft_print_comb2(void)
{
	for(int i = 0; i < 100 ; i++){
		for(int j = 0; j < 100 ; j++){
			char c1 = (i % 10) + 48;
			char c2 = (( i - (i % 10)) / 10) + 48 ;

			char c3 = (j % 10) + 48;
			char c4 = (( j - (j % 10)) / 10) + 48 ;

			write(1,&c4,1);
			write(1,&c3,1);
			write(1," ",1);
			write(1,&c2,1);
			write(1,&c1,1);
			if ( (i+j) != 198 ){
				write(1,", ",2);
			}else{
				write(1,"\n",2);
			}
		}
	}
}

//C00-07
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

//C00-08
// We don't talk about the C00-08

//C01-00
void ft_ft(int *nbr){
    *nbr = 42;
};

//C02-00
void ft_ultimate_ft(int *********nbr){
    *********nbr = 42;
};

//C01-02
void ft_swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
};

//C01-03
void ft_div_mod(int a, int b, int *div, int *mod){
    *div = a / b ;
    *mod = a % b ;
};

//C01-04
void ft_ultimate_div_mod(int *a, int *b){
    int q = *a / *b;
    int r = *a % *b;
    *a = q;
    *b = r;
};

//C01-05
void ft_putstr(char *str){
    int i = 0;
    while(str[i] != '\0'){
        write(1,&str[i],1);
        i++;
    }
};

//C01-06
int ft_strlen(char *str){
    int i = 0;
    while(str[i] != '\0'){
        i++;
    }
    return i;
};

//C01-06
void ft_rev_int_tab(int *tab, int size){
    int temp_tab[size];
    for(int i=0; i<size;i++){
        temp_tab[i] = tab[size-1-i];
    }
    for(int i=0; i<size;i++){
        tab[i] = temp_tab[i];
    }
};

//C01-08
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