/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daoliver <daoliver@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 09:21:27 by daoliver          #+#    #+#             */
/*   Updated: 2023/06/26 15:09:50 by daoliver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	new;

	new = (t_list) malloc (sizeof(t_list));
	if (!new)
		return (NULL);
			new -> content = content;
			new -> next = NULL;
	return (new);
}

// new = (t_list *)malloc(sizeof)(t_list));
/*int	main(void)
{
	t_list *nuevo;
	nuevo = ft_lstnew("52 Barcelona");
	printf("the new created node is: %s\n", nuveo -> content);
}*/
