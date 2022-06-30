#include <stdio.h>
#include <ctype.h>

int ft_toupper(int c){
    if(c >=97 && c<= 122)
        return (c - 32);
    else 
        return (c);
}
/*
int main() {
    char c;

    c = 'm';
    printf("%c -> %c", c, ft_toupper(c));

    c = 'D';
    printf("\n%c -> %c", c, ft_toupper(c));

    c = '9';
    printf("\n%c -> %c", c, ft_toupper(c));
    return 0;
}*/