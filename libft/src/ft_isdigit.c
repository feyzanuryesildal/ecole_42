#include <stdio.h>
#include <ctype.h>

int ft_isdigit(int c){
    if(c>=48 && c <= 57)
        return 1;
    else 
        return 0;
}
/*
int main(void) {
    char c1 = '3', c2 = '7', c3 = 'M';

    printf("%c bir rakam%s\n", c1, ft_isdigit(c1) ? "dır!" : " değildir!");
    printf("%c bir rakam%s\n", c2, ft_isdigit(c2) ? "dır!" : " değildir!");
    printf("%c bir rakam%s", c3, ft_isdigit(c3) ? "dır!" : " değildir!");

    return 0;
}*/