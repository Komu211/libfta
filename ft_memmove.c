/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmuhlbau <kmuhlbau@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 23:47:49 by kmuhlbau          #+#    #+#             */
/*   Updated: 2024/10/08 11:30:48 by kmuhlbau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned int	i;
	unsigned char	*src_ptr;
	unsigned char	*dst_ptr;

	if (dst == NULL && src == NULL)
		return (dst);
	src_ptr = (unsigned char *)src;
	dst_ptr = (unsigned char *)dst;
	if (dst_ptr > src_ptr && src_ptr + len > dst_ptr)
	{
		i = len;
		while (i > 0)
		{
			i--;
			dst_ptr[i] = src_ptr[i];
		}
	}
	else
		ft_memcpy(dst, src, len);
	return (dst);
}
