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
	int		i;
	char	*vec1;
	char	*vec2;

	i = 0;
	vec1 = (char *)pointer1;
	vec2 = (char *)pointer2;
	while (i < (int)num)
	{
		if (vec1[i] != vec2[i])
			return (vec1[i] - vec2[i]);
		i++;
	}
	return (0);
}
