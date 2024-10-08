/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmuhlbau <kmuhlbau@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 20:11:03 by kmuhlbau          #+#    #+#             */
/*   Updated: 2024/10/07 23:11:30 by kmuhlbau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t len)
{
	unsigned int	i;

	i = 0;
	if (len == 0)
		return (0);
	while ((unsigned char)str1[i] == (unsigned char)str2[i] && str1[i] != '\0'
		&& i < len - 1)
		i++;
	return ((unsigned char)str1[i] - (unsigned char)str2[i]);
}
