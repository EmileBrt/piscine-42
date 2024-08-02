#include <unistd.h>
void ft_is_negative(int c){
    if(c >= 0){
        write(1,"p",1);
    }else{
        write(1,"n",1);
    }
}