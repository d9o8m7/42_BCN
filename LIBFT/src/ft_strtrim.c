/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daoliver <daoliver@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 14:57:07 by daoliver          #+#    #+#             */
/*   Updated: 2023/05/12 15:13:36 by daoliver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strtrim(char const *s1, char const *set)
{
	size_t	len;

	if (!s1 || !set)
		return (NULL);
	while (ft_strshr(set, *s1) && *s1 != '\0')
		s1++;
		len = ft_strlen((char *)s1);
	while (ft_strchr(set, s1[len]) && len != 0)
			len --;
	return (ft_substr((char *)s1, 0, len + 1));
}
