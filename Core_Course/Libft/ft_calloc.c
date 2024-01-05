/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesanta <edesanta@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 18:32:52 by edesanta          #+#    #+#             */
/*   Updated: 2023/09/19 18:32:52 by edesanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"
#include <errno.h>

static int	ft_overflowtest(size_t count, size_t size)
{
	size_t	i;

	i = count * size;
	if (count == i / size)
		return (0);
	else
	{
		errno = ENOMEM;
		return (1);
	}
}

/**
 * @brief used to allocate and initialize a block of memory
 *  for an array of elements
 *
 * @param num_elements The number of elements to allocate space
 * for in the array
 * @param element_size The size (in bytes) of each individual
 * element in the array
 * @return void* Non-null pointer: If memory allocation is successful,
 * the function returns a pointer to the start of the allocated memory block.
 * NULL (null pointer): If memory allocation fails
 */
void	*ft_calloc(size_t num_elements, size_t element_size)
{
	void		*array;
	static int	result;

	result = ft_overflowtest(num_elements, element_size);
	if (num_elements == 0 || element_size == 0 || result)
		return (NULL);
	array = malloc(num_elements * element_size);
	if (!array)
		return (NULL);
	return (ft_memset(array, 0, (num_elements * element_size)));
}
