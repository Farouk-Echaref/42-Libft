
#include <string.h>
#include <stdio.h>
int	main(void)
{
	char	str1[] = "abcde";
	char	str2[] = "abcde";
	memmove(str1+2, str1, 3);
	ft_memmove(str2+2, str2, 3);
	printf("%s\n%s", str1, str2);
	return (0);
}