#include <unistd.h>

void ft_putstr(char *str){
    int i = 0;
    while(str[i] != '\0'){
        write(1,&str[i],1);
        i++;
    }
};

int ft_strlen(char *str){
    int i = 0;
    while(str[i] != '\0'){
        i++;
    }
    return i;
};

int ft_str_is_printable(char *str){
    for(int i = 0; i < ft_strlen(str); i++){
        if(32>(int)str[i])return 0;
        if(126<(int)str[i])return 0;
    }
    return 1;
};

int ft_pow10(int n){
    if( 0 == n) return 1;
    return 10 * ft_pow10( n - 1);
}

int ft_atoi(char *str) {
    int n = ft_strlen(str);
    int r = 0;
    int sign = 1;
    int start = -1;
    int end = -1;

    // Find the start and end of the number in the string
    for (int i = 0; i < n ; i++) {
        int istr = (int) str[i];
        if ((48 <= istr) && (istr <= 57)) {
            if (start == -1) {
                start = i;
                for (int j = start; j < (n - 1) ; j++){
                    int istr2 = (int) str[j + 1];
                    if ((48 > istr2) || (istr2 > 57)){
                        end = j;
                        break;
                    } 
                }
                break;
            }
        } else if (istr == '-' && start == -1) {
            sign = -1;
        } else if (istr == '+' && start == -1) {
            sign = 1;
        }
    }

    for (int i = 0; i < n ; i++) {
        int istr = (int) str[i];
        if (istr == '-' && ( i < start)) {
            sign *= -1;
        }
    }

    // If no digits were found, return 0
    if (start == -1) {
        return 0;
    }

    // Calculate the integer value
    for (int i = end; i >= start; i--) {
        r += ((int) str[i] - 48) * ft_pow10(end - i);
    }

    return r * sign;
}


int ft_strcmp(char *s1, char *s2){
    int c = 0;
    while((s1[c] != '\0') || (s2[c] != '\0')){
        if(((int)s1[c]) > ((int)s2[c])) return 1;
        if(((int)s1[c]) < ((int)s2[c])) return -1;
        c ++;
    }
    return 0;
};