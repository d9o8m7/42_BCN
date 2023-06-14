/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daoliver <daoliver@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 09:12:57 by daoliver          #+#    #+#             */
/*   Updated: 2023/06/14 17:21:58 by daoliver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// Calculates the lenth of words delimited with a char
int	ft_len_words(char const *s, char c)
{
	size_t	len;

	len = 0;
	while (s[len] != '\0' && s[len] != c)
		len++;
	return (len);
}

// Counts number of words in string with a delimiter
int	ft_count_words(char const *s, char c)
{
	int	len_words;
	int	i;

	i = 0;
	len_words = 0;
	while (s[i])
	{
		while (s[i] == c)
			i++;
		if (s[i] != '\0')
			len_words++;
		while (s[i] != c && s[i])
			i++;
	}
	return (len_words);
}

// Free's memory of the array
char	**free_words(char **words)
{
	size_t	i;

	i = 0;
	while (words[i])
	{
		free(words[i]);
		i++;
	}
	free(words);
	return (NULL);
}

// Divides string in individual words using delimiter
char	**ft_split(char const *s, char c)
{
	char	**words;
	int	i;
	int	len_word;

	words = (char **)ft_calloc((ft_count_words(s, c)) + 1, sizeof(*words));
	if (!word)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s)
		{
			len_word = ft_len_words(s, c);
			words[i] = (char *)ft_calloc((len_word + 1), sizeof(char));
			if (!words[i])
				return (free_words(word));
			ft_memcpy(words[i], s, (size_t)len_word);
			s += len_word;
		}
	}
	return (words);
}

int	main(void)
{
	char	str[] = "52 BCN is better";
	char	ch;
	char	**res;
	ch = ' ';

	res = ft_split(str, ch);
	printf("main: %c, ascii: %i\n", ch, ch);

	int	j;
	int	i;
	i = 0;
	while (i < 5)
	{
		j = 0;
		while (*(res[i] + j) != '\0')
		{
			printf("%c", *(res[i] + j));
			j++;
		}
		printf("\n");
		i++;
	}
}
