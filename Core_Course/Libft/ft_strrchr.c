/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesanta <edesanta@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 13:01:25 by edesanta          #+#    #+#             */
/*   Updated: 2023/09/13 13:01:25 by edesanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

/**
 * @brief The strrchr function searches for the last occurrence of the
 * character c in the string str
 *
 * @param s  pointer to the string to be searched
 * @param c The character to be searched for
 * @return char* A pointer to the last occurrence of the character c
 * in the string str, or NULL if the character is not found.
 */
char	*ft_strrchr(const char *s, int c)
{
	int	i;

	if (!s)
		return (NULL);
	i = ft_strlen(s);
	while (i > 0 && s[i] != c)
	{
		if (s[i] == c)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}
