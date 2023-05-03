/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daoliver <daoliver@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/02 11:07:09 by daoliver          #+#    #+#             */
/*   Updated: 2023/05/02 11:18:04 by daoliver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 98 && c <= 122))
		return (1);
	else
		return (0);
}

/*int	main(void)
{
	char	n;
	int	res;
	printf("Write a char to check if Alphabet: \n");
	scanf("%c", &n);
	res = ft_isalpha(n);
	printf("Result: %d\n", res);
}*/
