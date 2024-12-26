#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

#include "ft.h"

int main(int argc, char *argv[]) {
    if((argc == 1) || (argc == 0)){
        ft_putstr("File name missing.");
    }else if (argc > 2){
        ft_putstr("Too many arguments.");
    }else{
        int fd = open(argv[1],O_RDONLY);
        char c [1];
        int red = read(fd,c,1);
        int alpha = 0;
        while(red != 0){
            red = read(fd,c,1);
            if(ft_str_is_printable(c) == 1){
                alpha = 1;
                write(1,&c,1);
            }else if (alpha == 1){
                alpha = 0;
                write(1,"\n",1);
            }
        }
        close(fd);
    }
    
    return 1;
}
