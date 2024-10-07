/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmuhlbau <kmuhlbau@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 23:47:49 by kmuhlbau          #+#    #+#             */
/*   Updated: 2024/09/16 05:45:26 by kmuhlbau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memmove(void *dst, void *src, int len)
{
	int				i;
	unsigned char	*src_ptr;
	unsigned char	*dst_ptr;

	src_ptr = (unsigned char *)src;
	dst_ptr = (unsigned char *)dst;
	if (dst_ptr > src_ptr && src_ptr + len > dst_ptr)
	{
		i = len - 1;
		while (i >= 0)
		{
			dst_ptr[i] = src_ptr[i];
			i--;
		}
	}
	else
	{
		i = 0;
		while (i < len)
		{
			dst_ptr[i] = src_ptr[i];
			i++;
		}
	}
	return (dst);
}
