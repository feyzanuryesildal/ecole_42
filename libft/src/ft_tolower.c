#include <stdio.h>
#include <ctype.h>

int ft_tolower(int c){
    if(c >= 65 && c<= 90)
        return (c+32);
    else
        return c;
}
/*
int main(void) {
    char c1 = 'C', c2 = 'N';

    printf("%c %c\n", c1, tolower(c1));
    printf("%c %c", c2, tolower(c2));

    return 0;
}*/