#include <stdio.h>
#include <unistd.h>
#include <ctype.h>

int ft_isalpha(int c){
    if(c >= 'a' && c <= 'z')
        return 1;
    else if(c>= 'A' && c <= 'Z')
        return 1;
    else 
        return 0;
}
/*
int main(void) {
    char c1 = 'h', c2 = '4', c3 = '%';

    printf("%c alfabetik bir karakter%s\n", c1, ft_isalpha(c1) ? "dir!" : " değildir!");
    printf("%c alfabetik bir karakter%s\n", c2, ft_isalpha(c2) ? "dir!" : " değildir!");
    printf("%c alfabetik bir karakter%s", c3, ft_isalpha(c3) ? "dir!" : " değildir!");

    return 0;
}*/