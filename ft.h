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
    if(nb > 10){
        ft_putnbr((nb - (nb % 10))/10);
        int r = 48 + (nb % 10);
        write(1,&r,1);
    }else{
        char r = nb + 48;
        write(1,&r,1);
    }
}

//C00-08
void ft_ft(int *nbr){
    *nbr = 42;
};

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
char *ft_strupcase(char *str){
    for(int i = 0; i < ft_strlen(str); i++){
        if(ft_str_is_lowercase(&str[i]) == 1){
            str[i] = str[i] - 'a' + 'A';
        }
    }
    return str;
};