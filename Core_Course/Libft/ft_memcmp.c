/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesanta <edesanta@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 18:30:18 by edesanta          #+#    #+#             */
/*   Updated: 2023/09/19 18:30:18 by edesanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

/**
 * @brief used to compare two blocks of memory
 *
 * @param pointer1 A pointer to the first memory block to be compared
 * @param pointer2  A pointer to the second memory block to be compared
 * @param num The number of bytes to compare between the two memory blocks
 * @return int Zero (0): If the first num bytes of both memory blocks
 * are identical.
A negative integer: If the first differing byte in the memory
blocks pointed to by pointer1 and pointer2 has a lower value
in pointer1 than in pointer2.
A positive integer: If the first differing byte in the memory blocks
pointed to by pointer1 and pointer2 has a higher value
in pointer1 than in pointer2.
 */
int	ft_memcmp(const void *pointer1, const void *pointer2, size_t num)
{
	unsigned char	*vec1;
	unsigned char	*vec2;

	vec1 = (unsigned char *)pointer1;
	vec2 = (unsigned char *)pointer2;
	if (pointer1 == 0 && pointer2 == 0)
		return (0);
	while (num)
	{
		if (*vec1 != *vec2)
			return (*vec1 - *vec2);
		vec1++;
		vec2++;
		num--;
	}
	return (0);
}
