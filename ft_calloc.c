/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmuhlbau <kmuhlbau@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/07 22:57:05 by kmuhlbau          #+#    #+#             */
/*   Updated: 2024/10/08 07:57:57 by kmuhlbau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void			*ptr;
	unsigned int	i;
	unsigned char	*byte_ptr;

	i = 0;
	ptr = malloc(count * size * sizeof(char));
	if (!ptr)
	{
		errno = ENOMEM;
		return (NULL);
	}
	byte_ptr = (unsigned char *)ptr;
	while (i < size * count)
	{
		byte_ptr[i] = 0;
		i++;
	}
	return (ptr);
}
