/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesanta <edesanta@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 13:01:14 by edesanta          #+#    #+#             */
/*   Updated: 2023/09/13 13:01:14 by edesanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/**
 * @brief 
 *
 * @param str1
 * @param str2
 * @param n
 * @return int
 */
int ft_strncmp(const char *str1, const char *str2, size_t n)
{
	int	i;

	i = 0;
	while (str1[i] != '\0' && str2[i] != '\0' && i < n)
	{
		if (str1[i] < str2[i] || str1[i] > str2[i])
			return(str1[i] == str2[i]);
		i++;
	}
	return (0);
}
