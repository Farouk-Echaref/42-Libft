


#include <stdio.h>

int main()
{
	char **new;
	char str[] = ",,,,,,,,,,,,one, two , three , four , five";
	new = ft_split(str,',');
	for(int i = 0;i < word_count(str,',');i++)
		printf("%s\n",new[i]);
	printf("%d\n",word_count(str,','));
	return (0);
}
