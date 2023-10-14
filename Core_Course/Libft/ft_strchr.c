/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesanta <edesanta@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 13:01:23 by edesanta          #+#    #+#             */
/*   Updated: 2023/09/13 13:01:23 by edesanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <libft.h>

/**
 * @brief
 *
 * @param s  A pointer to the string to be searched
 * @param c The character to search for
 * @return char* A pointer to the first occurrence of the character
 *  c in the string s. If the character is not found, NULL is returned
 */
char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i] != '\0' && s[i] != c)
	{
		i++;
	}
	return ((char *)&s[i]);
}
