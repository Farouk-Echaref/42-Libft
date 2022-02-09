#include <string.h>
#include <stdio.h>

int main(void)
{
	int s[7] = {1,9,8,7,6,8,0};

	if (memchr(s,8,7*sizeof(int)) != NULL)
	{
		printf("found\n");
	}
}

#include <stdio.h>
#include <string.h>

int main () {
   const char str[] = "Testing this";
   const char ch = '.';
   char *ret;

   res = memchr(str, ch, strlen(str));

   printf("String after |%c| is - |%s|\n", ch, res);

   return(0);