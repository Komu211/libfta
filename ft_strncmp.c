/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kmuhlbau <kmuhlbau@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/15 20:11:03 by kmuhlbau          #+#    #+#             */
/*   Updated: 2024/09/15 20:22:41 by kmuhlbau         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *str1, char *str2, int len)
{
	int	i;

	i = 0;
	while ((unsigned char)str1[i] == (unsigned char)str2[i] && str1[i] != '\0'
		&& i < len - 1)
		i++;
	return ((unsigned char)str1[i] - (unsigned char)str2[i]);
}
