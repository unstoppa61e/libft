#include "libft.h"
#include <stdio.h>
#include <string.h>

int main()
{
	printf("%s\n", strrchr("abcdea", 'a'));
	printf("%s\n", ft_strrchr("abcdea", 'a'));
	printf("%s\n", strrchr("abcde", 'c'));
	printf("%s\n", ft_strrchr("abcde", 'c'));
	printf("%s\n", strrchr("abcde", 'z'));
	printf("%s\n", ft_strrchr("abcde", 'z'));
}
