#include <stdio.h>
#include <string.h>

int ft_strlen(char *str){
    int i;
    i = 0;
    while(str[i] != '\0'){
        i++;
    }
    return(i);
}
/*
int main( void )
{
    const char *cp = "Bilgisayar";
    int ret;

    ret = strlen(cp);

    printf("%s karakter dizisinin uzunluğu: %d\n", cp, ret);

    return 0;
}*/