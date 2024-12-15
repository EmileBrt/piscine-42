//C05-00
int ft_iterative_factorial(int nb){
    if(nb < 0) return 0;
    else if (nb == 0) return 1;
    else{
        int r = 1;
        for(int i = 1; i != nb + 1 ;i ++  )r *= i;
        return r ;
    }
};

//C05-01
int ft_recursive_factorial(int nb){
    if(nb < 0) return 0;
    else if (nb == 0) return 1;
    else return nb * ft_iterative_factorial(nb - 1);
};

//C05-02
int ft_iterative_power(int nb, int power){
    if(power < 0) return 0;
    else if (power == 0 ) return 1;
    else{
        int r = 1 ;
        for(int i = 0; i < power; i ++) r*= nb;
        return r;
    }
};

//C05-03
int ft_recursive_power(int nb, int power){
    if(power < 0) return 0;
    else if ( power == 0 ) return 1;
    else{
        return nb * ft_recursive_power(nb, power - 1);
    }
};

//C05-04
int ft_fibonacci(int index){
    if(index < 0) return -1;
    else if(index == 0) return 0;
    else if(index == 1) return 1;
    else{
        return ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
    }
};

//C05-05
int ft_sqrt(int nb){
    for(int i = 0; i < nb; i++){
        if(i*i == nb) return i;
    }
    return 0;
};

//C05-06
int ft_is_prime(int nb){

};