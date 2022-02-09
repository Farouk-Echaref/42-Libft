

#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[] = "Tes.ting.";
    printf("res: %s\n",ft_strrchr(str,'x'));
    printf("res: %s\n",strrchr(str,'x'));
    return (0);
}