/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: monoue <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/26 17:04:52 by monoue            #+#    #+#             */
/*   Updated: 2020/06/26 17:08:27 by monoue           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		issep(char c, char *sepset)
{
	int i;

	i = 0;
	while (sepset[i])
	{
		if (sepset[i++] == c)
			return (1);
	}
	return (0);
}

int		count_words(char *str, char *sepset)
{
	int	count;

	count = 0;
	while (*str)
	{
		while (*str && issep(*str, sepset))
			str++;
		if (*str && !issep(*str, sepset))
		{
			count++;
			while (*str && !issep(*str, sepset))
				str++;
		}
	}
	return (count);
}

char	*malloc_word(char *str, char *sepset)
{
	char	*word;
	int		i;

	i = 0;
	while (str[i] && !issep(str[i], sepset))
		i++;
	if (!(word = (char *)malloc(sizeof(char) * (i + 1))))
		return (0);
	i = 0;
	while (str[i] && !issep(str[i], sepset))
	{
		word[i] = str[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

char	**ft_split(char *str, char *charset)
{
	char	**arr;
	int		i;

	if (!(arr = (char **)malloc(sizeof(char *)
	* (count_words(str, charset) + 1))))
		return (0);
	i = 0;
	while (*str)
	{
		while (*str && issep(*str, charset))
			str++;
		if (*str && !issep(*str, charset))
		{
			arr[i] = malloc_word(str, charset);
			i++;
			while (*str && !issep(*str, charset))
				str++;
		}
	}
	arr[i] = 0;
	return (arr);
}
