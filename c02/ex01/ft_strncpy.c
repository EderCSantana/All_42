/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesanta <edesanta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 00:19:25 by edesanta          #+#    #+#             */
/*   Updated: 2023/06/28 13:10:02 by edesanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// • Reproduce the behavior of the function strncpy (man strncpy).
// (make a copy of a number of characters)
// • Here’s how it should be prototyped :
// char *ft_strncpy(char *dest, char *src, unsigned int n);

#include <string.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
