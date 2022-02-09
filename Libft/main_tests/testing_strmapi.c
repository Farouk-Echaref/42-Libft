#include <stdio.h>
#include <stdlib.h>
#include <string.h>
char    ft_toupper(unsigned int i,char c)
{
    i = 32;
    return (c - i);
}
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char		*hold;
	char		*res;
	unsigned int	i;

    i = 0;
    if (s == NULL || (s == NULL && f == NULL))
		return (strdup(""));
	else if (f == NULL)
		return ((char *)(s));
	res = strdup(s);
	if (res == NULL)
		return (NULL);
	hold = res;
	while (*res)
	{
		*res = (*f)(i, *s);
		res++;
		s++;
	}
	return (hold);
}

int main()
{
    char str[] = "abcde";
    char *new = ft_strmapi(str,ft_toupper); /*you can call the address of the function like this :
                                             &ft_toupper, or to_upper*/
    printf("%s\n",new);
    return (0);
}
