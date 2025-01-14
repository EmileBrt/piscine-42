#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>

#include "ft.h"

int main(int argc, char *argv[]) {
    if((argc == 1) || (argc == 0)){
        ft_putstr("File name missing.");
    }else if (argc > 4){
        ft_putstr("Too many arguments.");
    }else if( ft_strcmp(argv[1], "-c") == 0){
        int nbr_byte = ft_atoi(argv[2]);
        ft_putstr("int nbr_byte = ft_atoi(argv[2]);\n");
        ft_putstr(argv[2]);
        ft_putstr("\n");
        char *res = (char *)malloc(nbr_byte + 1 );
        int size_file = 0;

        int fd = open(argv[3],O_RDONLY);
        char c [1];
        int red = read(fd,c,1);
        while(red != 0){
            red = read(fd,c,1);
            size_file +=1;
        }
        close(fd);

        fd = open(argv[3],O_RDONLY);
        red = read(fd,c,1);
        int i = 0;
        while(red != 0){
            red = read(fd,c,1);
            if (i > (size_file - nbr_byte)){
                res[ i - (size_file - nbr_byte)] = *c;
            };
            i +=1;
        }
        close(fd);

        res[ size_file  ] = '\0';
        ft_putstr(res);
        free(res);
    }
    return 1;
}
