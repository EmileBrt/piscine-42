#include <stdio.h>
#include <string.h>
#include "ft.h"

int main(){
    char test_str[100] = "Coucou\ntu vas bien ?";
    
    // Print the address as a hexadecimal value
    printf("Address of pointer (hex): %p\n", (void *)test_str);

    // Print the address as an unsigned long
    printf("Address of pointer (unsigned long): %lu\n", (unsigned long)test_str);

    ft_print_memory(&test_str,100);
    return 0;
}