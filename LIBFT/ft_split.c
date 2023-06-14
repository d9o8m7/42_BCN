/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daoliver <daoliver@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 09:12:57 by daoliver          #+#    #+#             */
/*   Updated: 2023/06/14 15:00:38 by daoliver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_len_words(char const *s, char c)
{
	size_t	len;

	len = 0;
	while (s[len] != '\0' && s[len] != c)
		len++;
	return (len);
}

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

/*char	**ft_split(char const *s, char c)
{

}*/
