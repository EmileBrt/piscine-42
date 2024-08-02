#include "ft_print_alphabet.h"
#include <unistd.h>
int main(){
    ft_print_alphabet_rev();
    char c = '\n';
    write(1, &c, 1);
    return 0;
}