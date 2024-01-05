/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesanta <edesanta@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 13:01:20 by edesanta          #+#    #+#             */
/*   Updated: 2023/09/13 13:01:20 by edesanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

/**
 * @brief used to fill a block of memory with a specified value
 *
 * @param ptr A pointer to the memory block to be filled
 * @param c The value to be set in each byte of the memory block
 * @param num The number of bytes to be set in the memory block
 * @return void*
 */
void	*ft_memset(void *ptr, int c, size_t num)
{
	unsigned char	*aux;

	aux = ptr;
	while (num--)
		aux[num] = c;
	return (ptr);
}
