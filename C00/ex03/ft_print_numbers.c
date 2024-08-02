#include <unistd.h>
void ft_print_numbers(){
    char c = '1';
    for(int i = 0; i < 9 ; i++) {
        write(1, &c, 1);
        c ++;
    }    
}