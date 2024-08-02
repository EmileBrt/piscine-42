#include <unistd.h>
void ft_print_alphabet(){
    char c = 'a';
    for(int i = 0; i < 26 ; i++) {
        write(1, &c, 1);
        c ++;
    }    
}