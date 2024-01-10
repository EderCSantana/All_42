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
#include "libft.h"

/**
 * @brief Searches for the first occurrence of the character c
 *
 * @param s  A pointer to the string to be searched
 * @param c The character to search for
 * @return char* A pointer to the first occurrence of the character
 *  c in the string s. If the character is not found, NULL is returned
 */
char	*ft_strchr(const char *s, int c)
{
	const char	*p;

	p = s;
	while (*p != (char)c && *p != '\0')
		p++;
	if (*p == (char)c || *p == '\0')
		return ((char *)p);
	return (NULL);
}

