

#include <stdio.h>
#include <string.h>

int main()
{
    char *s1 ;
    s1 = strdup("Lesgo");
    char s2[10] = "testing";
	ft_memcpy(s1,s2,strlen(s1)+1);
	//memcpy(s1,s2,strlen(s1)+1);
    printf("%s\n",s2);
    return (0);

}

//Case of overlaping: 

#include <stdio.h>
#include <string.h>

int main(void)
{
	char s[] = "abcde";
	ft_memcpy(s+2,s,3);
	printf("%s\n",s);
	return (0);
}
