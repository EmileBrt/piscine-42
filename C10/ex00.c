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
        while(red != 0){
            write(1,&c,1);
            red = read(fd,c,1);
        }
    }
    return 1;
}
