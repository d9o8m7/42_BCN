/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daoliver <daoliver@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 16:28:55 by daoliver          #+#    #+#             */
/*   Updated: 2023/05/04 14:39:45 by daoliver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		write (1, &s[i], 1);
		i++;
	return (i);
}

/*int	main(void)
{
	char w[24]="52Barcelona";
	printf("'%s' has %d chars\n", w, ft_strlen(w));
}*/
