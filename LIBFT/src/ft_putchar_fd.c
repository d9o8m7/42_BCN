/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daoliver <daoliver@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 15:00:14 by daoliver          #+#    #+#             */
/*   Updated: 2023/05/23 15:02:42 by daoliver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, sizeof(c));
}

/*int	main(void)
{
	ft_putchar_fd('5', 1);
	ft_putchar_fd('2', 1);
	ft_putchar_fd('\n', 1);
	return (0);
}*/
