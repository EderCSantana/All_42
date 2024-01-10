/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesanta <edesanta@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 18:31:09 by edesanta          #+#    #+#             */
/*   Updated: 2023/09/19 18:31:09 by edesanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

/**
 * @brief The strnstr function searches for the first occurrence
 *  of the string needle in the string haystack
 * in at most len number of characters
 *
 * @param looking_on A pointer to the string to be searched
 * @param look_for A pointer to the string to be searched for
 * @param len The maximum number of characters to search
 * @return char* A pointer to the first occurrence of the string needle
 *  in the string haystack, or NULL if the string is not found.
 */
// char	*ft_strnstr(const char *looking_on, const char *look_for, size_t len)
// {
// 	size_t	size_needle;

// 	size_needle = ft_strlen(look_for);
// 	if (size_needle == 0)
// 		return ((char *)looking_on);
// 	if (size_needle > ft_strlen(looking_on))
// 		return (NULL);
// 	while (len >= size_needle && *looking_on != '\0')
// 	{
// 		if (ft_memcmp(looking_on, look_for, size_needle) == 0)
// 		{
// 			return ((char *)looking_on);
// 		}
// 		looking_on++;
// 		len--;
// 	}
// 	return (NULL);
// }
char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	needle_len;

	needle_len = ft_strlen(needle);
	if (needle_len == 0)
		return ((char *)haystack);
	if (needle_len > ft_strlen(haystack))
		return (NULL);
	while (len >= needle_len && *haystack != '\0')
	{
		if (ft_memcmp(haystack, needle, needle_len) == 0)
		{
			return ((char *)haystack);
		}
		haystack++;
		len--;
	}
	return (NULL);
}
