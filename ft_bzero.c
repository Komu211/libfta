/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmuhlbau <kmuhlbau@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 23:27:59 by kmuhlbau          #+#    #+#             */
/*   Updated: 2024/09/16 05:46:36 by kmuhlbau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_bzero(void *s, int n)
{
	unsigned char	*ptr;
	int				i;

	i = 0;
	ptr = s;
	while (i < n)
	{
		ptr[i] = (unsigned char)0;
		i++;
	}
}
