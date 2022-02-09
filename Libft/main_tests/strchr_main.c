
#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[] = "tes\0ting.";
    printf("Found the occurence %s\n",ft_strchr(str,'\0'));
    printf("Found the occurence %s\n",strchr(str,'\0'));
    return (0);
}