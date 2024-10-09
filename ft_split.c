/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmuhlbau <kmuhlbau@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 11:12:47 by kmuhlbau          #+#    #+#             */
/*   Updated: 2024/10/09 11:40:59 by kmuhlbau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_len_sep(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] != '\0' && s[i] != c)
		i++;
	return (i);
}
static int	get_split_num(char const *s, char c)
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (get_len_sep(&s[i], c) > 0 && s[i] != c)
		{
			count++;
			i += get_len_sep(s, c) - 1;
		}
		else
			i++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	// char	**splits;
	return (NULL);
}
