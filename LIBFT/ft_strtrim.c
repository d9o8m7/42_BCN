/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daoliver <daoliver@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 14:57:07 by daoliver          #+#    #+#             */
/*   Updated: 2023/05/24 14:05:28 by daoliver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	len;

	if (!s1 || !set)
		return (NULL);
	while (ft_strchr(set, *s1) && *s1 != '\0')
		s1++;
		len = ft_strlen((char *)s1);
	while (ft_strchr(set, s1[len]) && len != 0)
			len --;
	return (ft_substr((char *)s1, 0, len + 1));
}

/*int	main(void)
{
	char	str[] = "321576490852Barcelona987050777";
	char	trim[] = "1234567890";
	char	*res;

	res = ft_strtrim(str, trim);
	printf("\n\nOriginal: %s\nTrim: %s\nres: %s\n", str, trim, res);
}*/
