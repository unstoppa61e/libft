#include "libft.h"
#include <stdio.h>
int main()
{
	char 	*s1 = "abcde";
	char	*s2 = s1;
	printf("%d\n", ft_memcmp(s1, s2, 5));
}