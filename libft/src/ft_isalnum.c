/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daoliver <daoliver@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/01 16:26:11 by daoliver          #+#    #+#             */
/*   Updated: 2023/05/02 15:00:56 by daoliver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//ASCII 48-0 to 58-9, 65-A to 90-A, 97-a to 122-z//

#include "libft.h"
#include <stdio.h>

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	else
		return (0);
}

int	main(void)
{
	char n;
	printf("Write a char to check if Alphanumeric:\n");
	scanf("%C", &n);
	printf("The result '%c' is: %d\n", n, ft_isalnum(n));
}
