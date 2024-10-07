/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmuhlbau <kmuhlbau@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 18:06:09 by kmuhlbau          #+#    #+#             */
/*   Updated: 2024/09/15 22:13:47 by kmuhlbau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcat(char *dst, char *src, int size)
{
	int	i;
	int	dst_len;

	i = 0;
	dst_len = ft_strlen(dst);
	if (dst_len > size)
		return (size + ft_strlen(src));
	while (i < size - dst_len - 1 && src[i] != '\0')
	{
		dst[i + dst_len] = src[i];
		i++;
	}
	dst[i + dst_len] = '\0';
	return (dst_len + ft_strlen(src));
}
