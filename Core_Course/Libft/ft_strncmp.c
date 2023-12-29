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
#include "libft.h"

/**
 * @brief
 *
 * @param s1 A pointer to the first string to be compared
 * @param s2  A pointer to the second string to be compared
 * @param n The maximum number of characters to be compared
 * @return int A negative value if str1 appears before str2 in
 * lexicographical order.
Zero if str1 and str2 compare equal.
A positive value if str1 appears after str2 in lexicographical order.
 */
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && i < n)
	{
		if (s1[i] > s2[i])
		{
			return (s1[i] - s2[i]);
		}
		else if (s1[i] < s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
// int main()
// {
// 	char bota[] = "meu c";
// 	char fda[] = "meu ovo";
// 	printf("%d", ft_strncmp(bota, fda, 5));
// 	return 0;
// }
