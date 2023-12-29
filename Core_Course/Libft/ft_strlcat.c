/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesanta <edesanta@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 18:30:53 by edesanta          #+#    #+#             */
/*   Updated: 2023/09/19 18:30:53 by edesanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

/**
 * @brief The strlcat function appends the source string src to the end
 *  of the destination string dst. The function will append at
 * most size - strlen(dst) - 1 bytes, NUL-terminating the result
 *
 * @param dst A pointer to the destination string.
 * @param src: A pointer to the source string.
 * @param size: The size of the destination buffer, in bytes.
 * @return The total length of the string that would have been created
 *  if there was unlimited space
 */
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	int		i;
	int		num;
	size_t	size_total;

	i = ft_strlen(dst) - 1;
	num = size / sizeof(dst[i]);
	while (dst[i] < num)
	{
		dst[i] = src[i];
		i++;
	}
	dst[num] = '\0';
	size_total = (ft_strlen(dst) + ft_strlen(src) -1) * sizeof(src[0]);
	return (size_total);
}

// int main()
// {
// 	char my_array[10][20];

// 	// Obtém o tamanho do vetor
// 	size_t size = sizeof(my_array) / sizeof(my_array[0]);

// 	printf("O tamanho do vetor é: %zu\n", size);

// 	char dst[] = "Hello, world!";
// 	char src[] = "Goodbye, world!";

// 	size_t len = ft_strlcat(dst, src, sizeof(dst));

// 	printf("The destination string is: %s\n", dst);
// 	printf("The return value is: %zu\n", len);
// 	return 0;

// }
