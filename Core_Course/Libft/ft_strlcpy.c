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
 * @brief
 *
 * @param dst A pointer to the destination string
 * @param src A pointer to the source string
 * @param size The size of the destination buffer, in bytes
 * @return size_t The number of characters copied,
 * not including the terminating null character
 */
size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	int		i;
	int		num;
	size_t	size_total;

	i = 0;
	num = size / sizeof(dst[i]);
	if (num == 0)
		return (ft_strlen(src));
	while (i < num && src[i] != '\0')
	{
		dst[i] = src[i];
		i++;
	}
	dst[num] = '\0';
	size_total = ft_strlen(src) * sizeof(src[0]);
	return (size_total);
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
