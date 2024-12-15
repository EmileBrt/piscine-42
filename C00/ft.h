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