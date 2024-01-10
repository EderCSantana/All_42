/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesanta <edesanta@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 18:30:40 by edesanta          #+#    #+#             */
/*   Updated: 2023/09/19 18:30:40 by edesanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include "libft.h"
/**
 * @brief Allocates a block of memory with same size as the parameter,
 * copy it there and returns a pointer to the duplicated
 *
 * @param str A pointer to the string to be duplicated
 * @return char* A pointer to a newly allocated string that is a
 *  duplicate of the string pointed to by str.
 *  If the allocation fails, returns NULL
 */
// char	*ft_strdup(const char *str)
// {
// 	int		i;
// 	char	*dup;

// 	i = 0;
// 	while (str[i] != '\0')
// 		i++;
// 	dup = malloc(i + 1);
// 	if (dup == NULL)
// 		return (NULL);
// 	while (i--)
// 	{
// 		dup[i] = str[i];
// 	}
// 	return (dup);
// }
#include "libft.h"

char	*ft_strdup(const char *src)
{
	size_t	count;
	size_t	src_size;
	char	*new_str;

	count = 0;
	src_size = ft_strlen(src);
	new_str = (char *)malloc((src_size + 1) * sizeof(char));
	if (new_str == NULL)
		return (NULL);

	while (count < src_size)
	{
		new_str[count] = src[count];
		count++;
	}

	new_str[src_size] = '\0';
	return (new_str);
}

