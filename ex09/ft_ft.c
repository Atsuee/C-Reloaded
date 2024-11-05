void    ft_ft(int *nbr) {
    *nbr = 42;
}

#include <stdio.h>
#include <stdlib.h>

int main() {
    int t;

    t = 0;
    ft_ft(&t);
    printf("T values is : %p", t);
    return (0);
}