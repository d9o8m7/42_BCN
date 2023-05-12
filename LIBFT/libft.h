/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: daoliver <daoliver@student.42barcelona.co  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 18:20:30 by daoliver          #+#    #+#             */
/*   Updated: 2023/05/12 16:19:17 by daoliver         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>

//int	ft_atoi(const char *str);
void	ft_bzero(void *s, size_t n);
//void	*ft_calloc(size_t cunt, size_t size):
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
//char	*ft_itoa(int n);
//
int		ft_memcmp(const void *str1, const void *str2, size_t n);
void	*ft_memchr(const void *str, int c, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memset(void *d, int c, size_t len);
//
//char	**ft_split(char const *s, char c);
char	*ft_strchr(const char *s, int c);
//char	*ft_strdup(const char *s1);
//ft_striteri()
//ft_strjoin()
size_t	ft_strlcat(char *dst, const char *src, size_t size);
//ft_strlcpy()
int		ft_strlen(const char *s);
//char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
//ft_strncmp()
char	*ft_strnstr(const char *h, const char *n, size_t len);
//ft_strrchr()
//ft_strtrim
//char 	*ft_substr(char const s*, unsigned int start, size_t len);
int		ft_tolower(int c);
int		ft_toupper(int c);

#endif
