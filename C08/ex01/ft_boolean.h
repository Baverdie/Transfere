#ifndef FT_BOOLEAN_H
#define FT_BOOLEAN_H

#include <unistd.h>

typedef int t_bool;

#define TRUE 0
#define FALSE 1
#define SUCCESS 0
#define ODD_MSG "I have an odd number of arguments.\n"
#define EVEN_MSG "I have an even number of arguments.\n"
#define EVEN(nbr) (nbr % 2 != 0)

#endif