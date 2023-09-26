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
 * @param str1 A pointer to the first string to be compared
 * @param str2  A pointer to the second string to be compared
 * @param n The maximum number of characters to be compared
 * @return int A negative value if str1 appears before str2 in lexicographical order.
Zero if str1 and str2 compare equal.
A positive value if str1 appears after str2 in lexicographical order.
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
