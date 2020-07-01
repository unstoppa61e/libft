#include "libft.h"
#include <stdio.h>
#include <string.h>

int	main()
{
	// // atoi start
	// printf("%d\n", atoi("012"));
	// printf("%d\n", ft_atoi("012"));
	// printf("%d\n", atoi("-0012"));
	// printf("%d\n", ft_atoi("-0012"));

	// // atoi end

	// // strlcat start
	// char	str1[52] = "abcdef"; //4
	// char	*str2 = "xyz";// 3
	// ft_strlcat(str1, str2, 17);
	// printf("%zu\n", ft_strlcat(str1, str2, 1));
	// printf("%s\n", str1);
	// // strlcat end


	// // calloc start
	// int *ptr,*p;
	// int i;

	// /* 500個のintサイズのメモリを確保 */
	// ptr = (int *)calloc(500,sizeof(int));
	// if(ptr == NULL) {
	// 	printf("メモリが確保できません\n");
	// 	exit(EXIT_FAILURE);
	// }
	// p = ptr;
	// for (i=0; i<500; i++) {
	// 	*p = i;
	// 	printf("%d ",*p);
	// 	p++;
	// }
	// /* メモリの開放 */
	// free(ptr);
	// return 0;
	// // calloc end

	// // memcpy start
	// char str1[128] = {1,1,1,1,1,1,1};
	// char str2[] = "ab\0cde";        /* 途中に空文字のある文字列 */
	// int i;

	// printf("コピー前　中身の確認\n");
	// for (i=0; i<7; i++)
	// 		printf("%#x ",str1[i]);
	// printf("\n");

	// ft_memcpy(str1, str2, 5);

	// printf("コピー後　中身の確認\n");
	// for (i=0; i<7; i++)
	// 		printf("%#x ",str1[i]);
	// printf("\n");

	// return 0;
	// // memcpy end

	// // strnstr start
	// char	*str1 = "abcdefgh";
	// char	*str2 = "cde";
	// printf("%s\n", strnstr(str1, str2, 4));
	// printf("%s\n", ft_strnstr(str1, str2, 4));
	// printf("%s\n", strnstr(str1, str2, 5));
	// printf("%s\n", ft_strnstr(str1, str2, 5));
	// printf("%s\n", strnstr(str1, str2, 6));
	// printf("%s\n", ft_strnstr(str1, str2, 6));
	// // strnstr end

	// // memchr start
	// char str[] = "abcdef\0ghij";    /* 途中に空文字のある文字列 */
	// char *p;

	// p = memchr(str, 'h', 12);
	// printf("検索文字は文字列の%ld番目\n",p - str);
	// return 0;
	// // memchr end

// 	// strmapi start
// char	rot_n(unsigned int n, char c)
// {
// 	return (c + n);
// }

// #include <stdio.h>

// int	main()
// {
// 	char	(*f)(unsigned int, char);
// 	f = rot_n;
// 	printf("%s\n", ft_strmapi("abcde", f));
// }
// 	// strmapi en	t_list *l = ft_lstnew(strdup("nyacat"));

	// // lstadd_front start
	// t_list *l;
    // t_list *n = ft_lstnew(strdup("OK"));
	// ft_lstadd_front(&l, n);
	// printf("%s\n", l->content);
	// // lstadd_front end

	// // lstsize start
	// t_list *l;

	// l = ft_lstnew(ft_strdup("1"));
	// l->next = ft_lstnew(ft_strdup("2"));
	// l->next->next = ft_lstnew(ft_strdup("3"));
	// printf("%d\n", ft_lstsize(l));
	// // lstsize end

	// // lstlast start
	// t_list	*l;

	// l = ft_lstnew(ft_strdup("1"));
	// l->next = ft_lstnew(ft_strdup("2"));
	// l->next->next = ft_lstnew(ft_strdup("3"));
	// printf("%s\n", ft_lstlast(l)->content);
	// // lstlast end

	// lstadd_back start
	// t_list *l = ((void *)0);
	// t_list *n = ft_lstnew(ft_strdup("OK"));

	// ft_lstadd_back(&l, n);
	// if (l == n && !ft_strncmp(l->content, "OK", 2))
	// {
	// 	free(l->next);
	// 	free(l);
	// 	printf("%s\n", "GOOD!");
	// }
	// else
	// 	printf("%s\n", "BAD...");
	// lstadd_back end
}