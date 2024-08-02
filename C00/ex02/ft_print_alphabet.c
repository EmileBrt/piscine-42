#include <unistd.h>
void ft_print_alphabet_rev(){
    char c = 'z';
    for(int i = 0; i < 26 ; i++) {
        write(1, &c, 1);
        c --;
    }    
}