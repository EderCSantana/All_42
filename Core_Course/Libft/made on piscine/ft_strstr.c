/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesanta <edesanta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 00:45:31 by edesanta          #+#    #+#             */
/*   Updated: 2023/06/28 14:56:18 by edesanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Reproduce the behavior of the function strstr (man strstr).
// (search a string inside of other string)
// • Here’s how it should be prototyped :
// char *ft_strstr(char *str, char *to_find);

//#include <stdio.h>
char	*ft_strstr(char *str, char *to_find)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	if (to_find[j] == '\0')
		return (str);
	while (str[i] != '\0')
	{
		while (str[i + j] == to_find[j] && str[i + j] != '\0')
			j++;
		if (to_find[j] == '\0')
			return (str + i);
		i++;
		j = 0;
	}
	return (0);
}
// int        main()
// {
// char str[] = "42 1337 Network 2021 piscine Benguerir Khouribga";
// char find[] = "piscine";
// printf("%s", ft_strstr(str, find));
// }
