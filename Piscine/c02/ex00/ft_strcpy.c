/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesanta <edesanta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 00:17:54 by edesanta          #+#    #+#             */
/*   Updated: 2023/06/28 13:06:17 by edesanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//  Reproduce the behavior of the function strcpy (man strcpy).
//  (make a copy of a string)
// • Here’s how it should be prototyped :
// char *ft_strcpy(char *dest, char *src);

#include <string.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
