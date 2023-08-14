/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesanta <edesanta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 23:51:17 by edesanta          #+#    #+#             */
/*   Updated: 2023/06/28 12:55:52 by edesanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// • Create a function that counts and returns
// the number of characters in a string.
// • Here’s how it should be prototyped :
// int ft_strlen(char *str);

// #include <stdio.h>
#include <unistd.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

// int        main()
// {
// char *c = "Hello";
// printf("%d", ft_strlen(c));
// }
