
// C01-ex02
void ft_swap(int *a, int *b){
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
};

// C01-ex03
void ft_div_mod(int a, int b, int *div, int *mod){
    *div = a / b ;
    *mod = a % b ;
};