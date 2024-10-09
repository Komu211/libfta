/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmuhlbau <kmuhlbau@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/09 23:19:56 by kmuhlbau          #+#    #+#             */
/*   Updated: 2024/10/09 23:45:34 by kmuhlbau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_num_len(int num)
{
	int	len;

	len = 0;
	if (num == 0)
		return (1);
	if (num < 0)
	{
		if (num == -2147483648)
			return (11);
		len++;
		num = -num;
	}
	while (num > 0)
	{
		num /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*num;
	int		len;
	int		symbol;

	symbol = 0;
	if (n < 0)
	{
		if (n == -2147483648)
			return (ft_strdup("-2147483648"));
		n = -n;
		symbol = 1;
	}
	len = get_num_len(n);
	num = malloc((len + 1) * sizeof(char));
	if (!num)
		return (NULL);
	num[len--] = '\0';
	while (len >= 0)
	{
		num[len] = ('0' + (n % 10));
		n /= 10;
		len--;
	}
	return (num);
}
