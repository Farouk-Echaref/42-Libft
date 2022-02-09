

#include <stdio.h>
int main()
{
	char str1[] = "The answer of the universe and evrything is : ";
	char str2[] = "42\n";
	char *res;
	res = ft_strjoin(str1,str2);
	printf("%s",res);
}