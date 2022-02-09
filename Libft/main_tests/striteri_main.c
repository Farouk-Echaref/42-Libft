void	change(unsigned int i, char *c)
{
	*c = *c + i;
}

void	ft_striteri(char *s, void (*f)(unsigned int, char *))
{
	unsigned int	i;

	i = -1;
	//in case of error we don't return anything bcs the function is of type
	//void 
	if (s == NULL || (s == NULL && f == NULL))
			return ;
	//check if pointer to function is null
	while (*s)
	{
		(*f)(i,s);
		s++;
		i++;
	}
}

#include <stdio.h>

int main()
{
	char str[] = "abcde";
	ft_striteri(str,&change);
	printf("%s\n",str);
}
