/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesanta <edesanta@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 18:31:14 by edesanta          #+#    #+#             */
/*   Updated: 2023/09/19 18:31:14 by edesanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Allocates (with malloc(3)) and returns a copy of
’s1’ with the characters specified in ’set’ removed
from the beginning and the end of the string.
 *
 * @param s1 The string to be trimmed
 * @param set The reference set of characters to trim
 * @return char* The trimmed string.
NULL if the allocation fails
 */
char	*ft_strtrim(char const *s1, char const *set)
{
	size_t last;

	if(!s1)
		return (NULL);
	while(*s1 != '\0' && ft_strchr(set, s1*))
		s1++;
	last = ft_strlen(s1);
	while (last && ft_strchr(set, s1[last]))
		last--;
	return (ft_substr(s1, 0, last + 1));
}

// int main()
// {
// 	char*	string;
// 	char*	set;
// 	char*	result;

// 	string = "hello, world!";
// 	set = "h!";
// 	result = ft_strtrim(string, set);
// 	printf("final string: %s", result);
// }
