#include <stdio.h>
#include <string.h>

char	*ft_strdup(char *src);

int main(void)
{
	char str[] = "Hello";
	char *str1 = ft_strdup(str);
	char *str2 = strdup(str);
	printf("%s\n", str1);
	printf("%s\n", str2);	
	return (0);
}