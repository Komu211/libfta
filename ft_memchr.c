/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmuhlbau <kmuhlbau@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 14:26:25 by kmuhlbau          #+#    #+#             */
/*   Updated: 2024/10/07 23:46:13 by kmuhlbau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	const unsigned char	*ptr;
	unsigned int		i;

	i = 0;
	ptr = s;
	while (i < n)
	{
		if ((unsigned char)c == ptr[i])
			return ((void *)&ptr[i]);
		i++;
	}
	return (NULL);
}
