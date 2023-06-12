/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daoliver <daoliver@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/23 15:19:12 by daoliver          #+#    #+#             */
/*   Updated: 2023/06/12 18:25:49 by daoliver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar(int fd_p, char c)
{
	write(fd_p, &c, 1);
}

void	ft_putnbr_fd(int n, int fd)
{
	if(n == -2147483648)
		write(fd, "-2147483648", 11);
	else if (n < 0)
	{
		ft_putchar('-', fd);
		ft_putnbr_fd(-n, fd);
	}
	else if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putnbr_fd(n % 10, fd);
	}
	else
	{
		ft_putnbr_fd(n + '0', fd);
	}
}

int	main(void)
{
	ft_putnbr_fd(-2147483648, 1);
	ft_putnbr_fd(2147483647, 1);
}
