//C04-00
// ft_strlen(char *str) done in C00

//C04-01
//void ft_putstr(char *str) done in C01

//C04-02
//void ft_putnbr(char *str) done in C00
int ft_pow10(int n){
    if( 0 == n) return 1;
    return 10 * ft_pow10( n - 1);
}

//C04-03
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

//C04-04
void ft_putnbr_base(int nbr, char *base){
    int n = ft_strlen(base);
    int r = nbr % n ;
    int q = nbr / n ;
    if(q != 0){
        ft_putnbr_base(q,base);
    }
    write(1,&base[r],1);
};

//C04-05
int ft_powq(int q, int n){
    if( 0 == n) return 1;
    return q * ft_powq(q, n - 1);
}

int ft_atoi_base( char *str,  char *base) {
    int r = 0;
    int n = ft_strlen(str);
    int n_b = ft_strlen(base);
    for (int i = n - 1; i >= 0; i--) {
        for (int j = 0; j < n_b; j++) {
            if (base[j] == str[i]) {
                r += j * ft_powq(n_b, n - 1 - i);
                break;
            }
        }
    }
    return r;
}