#include <string.h>
#include <stdlib.h>
#include <stdio.h>

char testFunction(unsigned int i, char c){
    return (c + (char)i);
}

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    int i = 0;
    char *result = (char *)malloc(strlen(s)+1);

    while(i < strlen(s)){
        result[i] = f(i, s[i]);
        i++;
    }

    return result;
}

int main(){
    char *s = strdup("abcdefgh");
    printf("%s\n", ft_strmapi(s, &testFunction));

    return 0;
}