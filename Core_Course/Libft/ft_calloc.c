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

static int	ft_overflowtest(size_t count, size_t size);

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
void	*ft_calloc(size_t num_e, size_t e_size)
{
	void	*array;

	if (num_e == 0 || e_size == 0 || ft_overflowtest(num_e, e_size))
		return (NULL);
	array = malloc(num_e * e_size);
	if (!array)
		return (NULL);
	return (ft_memset(array, 0, (num_e * e_size)));
}

static int	ft_overflowtest(size_t count, size_t size)
{
	size_t	i;

	i = count * size;
	if (count == i / size != count)
		return (0);
	else
	{
		return (1);
	}
}
// #include "libft.h"

// void	*ft_calloc(size_t count, size_t size)
// {
// 	char	*allocation;
// 	size_t	index;

// 	if ((ssize_t)count < 0 && (ssize_t)size < 0)
// 		return (NULL);
// 	allocation = malloc(count * size);
// 	if (!allocation)
// 		return (NULL);
// 	index = 0;
// 	while (index < (count * size))
// 	{
// 		*(allocation + index) = '\0';
// 		index++;
// 	}

// 	return ((void *)allocation);
// }
