/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesanta <edesanta@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 18:30:59 by edesanta          #+#    #+#             */
/*   Updated: 2023/09/19 18:30:59 by edesanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

/**
 * @briefThe strlcpy() function copies a source string to a destination string,
 * with buffer overflow safety.
 *
 * @param dst A pointer to the destination string
 * @param src A pointer to the source string
 * @param size The size of the destination buffer, in bytes
 * @return size_t The number of characters copied,
 * not including the terminating null character
 */
size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;

	i = 0;
	if (size > 0)
	{
		while ((i < (size - 1)) && (src[i] != '\0'))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (ft_strlen(src));
}

// int main()
// {
// 	char dst[10];
// 	char src[] = "hello, world!";
// 	printf("Calling ft_strlcpy with dst = %s, src = %s, and size = %zu\n",
// 		dst, src, sizeof(dst));
// 	size_t len = ft_strlcpy(dst, src, sizeof(dst));
// 	printf("The destination string is: %s\n", dst);
// 	printf("The return value is: %zu\n", len);
// 	return 0;
// }
