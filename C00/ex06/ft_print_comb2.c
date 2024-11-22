#include <unistd.h>

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