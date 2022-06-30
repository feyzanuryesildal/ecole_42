#include <stdio.h>
#include <ctype.h> 

int ft_isalnum(int c){
    if(c >= 48 && c <= 57)
        return 1;
    else if(c>='a' && c<='z')
        return 1;
    else if(c>='A' && c<='Z')
        return 1;
    else 
        return 0;

}
/*
int main(void) {
    char c1 = 'B', c2 = '7', c3 = '&';

    printf("%c alfanumerik bir karakter%s\n", c1, ft_isalnum(c1) ? "dir!" : " değildir!");
    printf("%c alfanumerik bir karakter%s\n", c2, ft_isalnum(c2) ? "dir!" : " değildir!");
    printf("%c alfanumerik bir karakter%s", c3, ft_isalnum(c3) ? "dir!" : " değildir!");

    return 0;
}*/