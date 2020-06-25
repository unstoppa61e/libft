// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>

// int	main()
// {
// 	// strlcat
// 	char	str1[52] = "abcdef"; //4
// 	char	*str2 = "def";// 3
// 	ft_strlcat(str1, str2, 17);
// 	printf("%zu\n", ft_strlcat(str1, str2, 1));
// 	printf("%s\n", str1);

// 	// calloc
// 	int *ptr,*p;
// 	int i;

// 	/* 500個のintサイズのメモリを確保 */
// 	ptr = (int *)calloc(500,sizeof(int));
// 	if(ptr == NULL) {
// 		printf("メモリが確保できません\n");
// 		exit(EXIT_FAILURE);
// 	}
// 	p = ptr;
// 	for (i=0; i<500; i++) {
// 		*p = i;
// 		printf("%d ",*p);
// 		p++;
// 	}
// 	/* メモリの開放 */
// 	free(ptr);
// 	return 0;
// }