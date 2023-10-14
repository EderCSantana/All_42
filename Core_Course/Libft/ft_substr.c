/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesanta <edesanta@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 18:31:17 by edesanta          #+#    #+#             */
/*   Updated: 2023/09/19 18:31:17 by edesanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
#include <libft.h>

/**
 * @brief Allocates (with malloc(3)) and returns a substring
 * from the string ’s’.
The substring begins at index ’start’ and is of maximum size ’len’.
 *
 * @param s  The string from which to create the substring.
 * @param start The start index of the substring in the string ’s’.
 * @param len The maximum length of the substring.
 * @return char* The substring.
NULL if the allocation fails.
 */
char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*result;

	i = 0;
	if (!s)
		return (NULL);
	else if (start > ft_strlen(s))
		return (NULL);
	result = (char *)malloc(sizeof(char) * (len + 1));
	if (!result)
		return (NULL);
	while (s[start + i] != '\0' && i < len)
	{
		result[i] = s[start + i];
		i++;
	}
	result[i] = '\0';
	return (result);
}

// int main()
// {
//     const char *input_string = "0123456789";
//     unsigned int start = 5;
//     size_t length = 3;
//     char *output_string = ft_substr(input_string, start, length);

//     printf("Input String: %s\n", input_string);
//     printf("Output String: %s\n", output_string);

//     free(output_string); // Don't forget to free the allocated memory

//     return 0;
// }
