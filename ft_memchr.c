/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmuhlbau <kmuhlbau@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/17 14:26:25 by kmuhlbau          #+#    #+#             */
/*   Updated: 2024/09/17 14:47:25 by kmuhlbau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

void	*ft_memchr(void *s, int c, int n)
{
	unsigned char	*ptr;
	int				i;

	i = 0;
	ptr = s;
	while (i < n)
	{
		if ((unsigned char)c == ptr[i])
			return (&ptr[i]);
		i++;
	}
	return (NULL);
}
