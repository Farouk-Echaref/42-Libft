

#include <stdio.h>
int main()
{
	char str[] = "This is a test";
	char *sub;

	sub = ft_substr(str,5,10);
	printf("%s\n",sub);
	return (0);
}