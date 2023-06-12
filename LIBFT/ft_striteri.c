/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daoliver <daoliver@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 09:17:53 by daoliver          #+#    #+#             */
/*   Updated: 2023/05/26 13:46:57 by daoliver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	int	i;

	i = 0;
	if (!s || !f)
		return ;
	while (s[i])
	{
		f(i, &s[i]);
		i++;
	}
}

/*void	printc(unsigned int i, char *c)
{
	c[0] = c[0] + i;
	printf ("%c", c[0]);
}

int	main(void)
{
	char	iteri_str[] = "52 Barcelona";

	printf("Before ft_striteri: %s\n", iteri_str);
	ft_striteri(iteri_str, printc);
	printf("After ft_striteri: %s\n", iteri_str);
}*/
