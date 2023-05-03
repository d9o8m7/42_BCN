/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daoliver <daoliver@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 16:40:10 by daoliver          #+#    #+#             */
/*   Updated: 2023/05/03 11:34:18 by daoliver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
//Compare firsts n bytes of area of memory str1 & str2
//str1 first pointer to a block of memory.
//str2 second pointer to a block of memory.
//n (Number of bytes to compare)
//RETURN VALUES
//v < 0 str1 in minor to str2
//v > 0 str1 is mayor to str2
//v = 0 str1 is equal to str2

#include "libft.h"
#include <stdio.h>

int	ft_memcmp(const void *str1, const void *str2, size_t n)
{
	const unsigned char	*s1;
	const unsigned char	*s2;
	size_t	i;

	s1 = str1;
	s2 = str2;
	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
			i++;
	}
	return (0);
}

int	main(void)
{
	int	res;
	char str1[] = "AbCD";
	char str2[] = "ABcd";

	res = ft_memcmp (str1, str2, 2);
	printf("res: %d\n", res);
}
