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

#include "libft.h"

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
// char	*ft_strtrim(char const *s1, char const *set)
// {
// 	size_t	last;

// 	if (!s1)
// 		return (NULL);
// 	while (*s1 != '\0' && ft_strchr(set, *s1))
// 		s1++;
// 	last = ft_strlen(s1);
// 	while (last && ft_strchr(set, s1[last]))
// 		last--;
// 	return (ft_substr(s1, 0, last + 1));
// }
static int	ft_check(char c, char const *set)
{
	int		i;

	i = 0;
	while (set[i])
	{
		if (set[i++] == c)
			return (1);
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	int		i;
	int		end;
	int		beginnig;

	i = 0;
	beginnig = 0;
	if (s1 == 0 || set == 0)
		return (NULL);
	end = ft_strlen(s1);
	while (s1[i] && ft_check(s1[i], set))
		i++;
	while (end > i && ft_check(s1[end - 1], set))
		end--;
	str = (char *)malloc(sizeof(char) * (end - i + 1));
	if (!str)
		return (NULL);
	while (i < end)
		str[beginnig++] = s1[i++];
	str[beginnig] = '\0';
	return (str);
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
