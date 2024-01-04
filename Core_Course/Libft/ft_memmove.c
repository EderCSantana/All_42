/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesanta <edesanta@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 13:01:09 by edesanta          #+#    #+#             */
/*   Updated: 2023/09/13 13:01:09 by edesanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

/**
 * @brief used to copy a block of memory from a source location
 *  to a destination location, but handles overlapping
 *
 * @param dest pointer to the destination memory location
 * @param org A pointer to the source memory location from
 * @param num he number of bytes to be copied from the source location
 */
void	*ft_memmove(void *dest, const void *org, size_t num)
{
	unsigned char	*aux_dest;
	unsigned char	*aux_org;

	aux_dest = dest;
	aux_org = (unsigned char *) org;
	if (aux_dest < aux_org)
	{
		return (ft_memcpy (dest, org, num));
	}
	else
	{
		while (num--)
			aux_dest[num] = aux_org[num];
		return (aux_dest);
	}
}
