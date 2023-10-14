/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesanta <edesanta@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 18:31:09 by edesanta          #+#    #+#             */
/*   Updated: 2023/09/19 18:31:09 by edesanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <libft.h>

/**
 * @brief The strnstr function searches for the first occurrence
 *  of the string needle in the string haystack
 * in at most len number of characters
 *
 * @param looking_on A pointer to the string to be searched
 * @param look_for A pointer to the string to be searched for
 * @param len The maximum number of characters to search
 * @return char* A pointer to the first occurrence of the string needle
 *  in the string haystack, or NULL if the string is not found.
 */
char	*ft_strnstr(const char *looking_on, const char *look_for, size_t len)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (look_for[j] == '\0')
		return (looking_on);
	while (looking_on[i] != '\0')
	{
		while (looking_on[i + j] == look_for[j] && looking_on[i + j] != '\0')
		{
			if (j == len)
				return (looking_on + i);
			j++;
		}
		if (look_for[j] == '\0')
			return (looking_on + i);
		i++;
		j = 0;
	}
	return (0);
}
