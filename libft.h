/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmuhlbau <kmuhlbau@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 21:58:39 by kmuhlbau          #+#    #+#             */
/*   Updated: 2024/10/07 17:34:35 by kmuhlbau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

int		ft_atoi(char *str);
void	ft_bzero(void *s, int n);
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_isprint(int c);
void	*ft_memchr(void *s, int c, int n);
void	*ft_memcpy(void *dst, void *src, int n);
void	*ft_memmove(void *dst, void *src, int len);
void	*ft_memset(void *b, int c, int len);
char	*ft_strchr(char *str, int c);
int		ft_strlcat(char *dst, char *src, int size);
int		ft_strlcpy(char *dst, char *src, int size);
int		ft_strlen(char *str);
int		ft_strncmp(char *str1, char *str2, int len);
char	*ft_strnstr(char *haystack, char *needle, int len);
char	*ft_strrchr(char *str, int c);
int		ft_tolower(int c);
int		ft_toupper(int c);

#endif