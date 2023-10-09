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
#include <libft.h>

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
void	ft_memcpy(void *dest, const void *org, size_t num)
{
	int				i;
	unsigned char	*aux;
	unsigned char	*source;

	i = 0;
	aux = (unsigned char *) dest;
	source = (unsigned char *) org;
	while (i < num)
	{
		aux[i] = source[i];
		i++;
	}
}
