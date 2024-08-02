#include "ft_print_numbers.h"
#include <unistd.h>
int main(){
    ft_print_numbers();
    char c = '\n';
    write(1, &c, 1);
    return 0;
}