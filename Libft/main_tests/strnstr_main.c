#include  <stdio.h>
#include <string.h>

int main(void)
{
	const char haystack[20] = "Foo Bar Baz";
   const char needle[10] = "Bar";
   char *ret;
   char *mine;


   ret = strnstr(haystack, needle, 8);
   mine  = ft_strnstr(haystack, needle, 8);
   printf("The substring is: %s\nthis is mine : %s\n", ret, mine);
   
   return(0);
}