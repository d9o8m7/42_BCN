/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daoliver <daoliver@student.42barcel>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/24 09:25:03 by daoliver          #+#    #+#             */
/*   Updated: 2023/06/26 15:11:03 by daoliver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*last;

	if (!lst || !new)
		return ;
	if (!*lst)
			*lst = new;
	else
	{
		last = ft_lstlast(*lst);
		last -> next = new;
	}
}

/*void	v_list(t_list *lst)
{
	while (lst != NULL)
	{
		printf("\t&s\n", lst -> content);
		if (lst != NULL)
			lst = lst -> next;
	}
}

int	main(void)
{
	t_list	*a;
	t_list	*b;
	t_list	*c;

	a = ft_lstnew("52 Barcelona");
	b = ft_lstnew("1337 ");
	c = ft_lstnew("HIVE");
	printf("new list: %ss\n", a -> content);
	ft_lstadd_back(&a, b);
	ft_lstadd_front(&a, c);
	v_list(a);
}*/
