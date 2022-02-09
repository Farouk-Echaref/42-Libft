

#include <stdio.h>

int main(void)
{
	char str[] = "fgab..fgcd...";
	char set[] = ".fg";
	char *new;
	new = ft_strtrim(str,set);
	printf("%s\n",new);
	return (-1);
}



#include <stdio.h>

int main()
{
	char set[] = ". ?!";
	char str[] = "  ..?this is a test  !!.?";
	printf("Before Triming: \n%s\n",str);
	char *res = ft_strtrim(NULL,set);
	printf("After Triming: \n%s\n",res);
	return (0);
}
