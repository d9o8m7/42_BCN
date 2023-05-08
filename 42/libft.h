/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daoliver <daoliver@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 18:20:30 by daoliver          #+#    #+#             */
/*   Updated: 2023/05/08 13:20:12 by daoliver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

//int	ft_atoi(const char *str);
//void	ft_bzero(void *s, size_t n);
//void	*ft_calloc(size_t cunt, size_t size):
int	ft_isalnum(int c);
int	ft_isalpha(int c);
int	ft_isascii(int c);
int	ft_isdigit(int c);
int	ft_isprint(int c);
//char	*ft_itoa(int n);
void	*ft_memchr(const void *str, int c, size_t n);
int	ft_memcmp(const void *str1, const void *str2, size_t n);
//void	*ft_memcpy(void *dst, const void *src, size_t n);
//void	*ft_memmove(void *dst, const void *src, size_t len);
//
int	ft_strlen(const char *s);

#endif
