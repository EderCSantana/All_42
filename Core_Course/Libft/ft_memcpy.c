/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesanta <edesanta@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 13:01:06 by edesanta          #+#    #+#             */
/*   Updated: 2023/09/13 13:01:06 by edesanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

/**
 * @brief used to copy a block of memory from a source location
 * to a destination location
 *
 * @param dest A pointer to the destination memory location
 *  where the data will be copied.
 * @param org A pointer to the source memory location from which
 *  the data will be copied.
 * @param num The number of bytes to be copied from the source location
 *  (org) to the destination location (dest)
 */
// void	ft_memcpy(void *dest, const void *org, size_t num)
// {
// 	unsigned char		*aux;
// 	const unsigned char	*source;

// 	source = (const unsigned char *) org;
// 	// if (!dest && !org)
// 	// 	return (NULL);
// 	aux = (unsigned char *) dest;
// 	while (num--)
// 		*aux++ = *source++;
// 	// return (dest);
// }
#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	const unsigned char	*psrc = (const unsigned char *)src;
	unsigned char		*pdest;


	if (!dest && !src)
		return (NULL);
	pdest = (unsigned char *)dest;
	while (n--)
		*pdest++ = *psrc++;
	return (dest);
}
