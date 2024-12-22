#ifndef FT_BOOLEAN_H
#define FT_BOOLEAN_H

#include <unistd.h>

//C08-01
#define TRUE 1
#define FALSE 0
#define EVEN(nbr) ((nbr) % 2 == 0)
#define EVEN_MSG "I have an even number of arguments.\n"
#define ODD_MSG "I have an odd number of arguments.\n"
#define SUCCESS 0

//C08-02
#define ABS(x) ((x) < 0 ? -(x) : (x))


typedef int t_bool;

#endif
