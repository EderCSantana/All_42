/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesanta <edesanta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 00:51:54 by edesanta          #+#    #+#             */
/*   Updated: 2023/06/28 15:18:51 by edesanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Create a function that displays a string of
// characters on the standard output.
// • Here’s how it should be prototyped :
// void ft_putstr(char *str);

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		write (1, &str[i], 1);
		i++;
	}
}

// int main()
// {
// ft_putstr("Hello World!");
// }
// 
