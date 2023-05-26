/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daoliver <daoliver@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 09:19:26 by daoliver          #+#    #+#             */
/*   Updated: 2023/05/26 12:53:17 by daoliver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	if (!s)
		write(fd, s, ft_strlen(s));
}

/*int	main(void)
{
	ft_putstr_fd("52 Barcelona", 1);
	ft_putstr_fd("\n", 1);
}*/
