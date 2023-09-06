/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funtions.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesanta <edesanta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 22:37:12 by edesanta          #+#    #+#             */
/*   Updated: 2023/08/19 22:37:12 by edesanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isalnum(char c)
{
	if (c == '\0')
		return (0);
	else if (c >= '0' && c <= '9')
		return (1);
	else if (c >= 'a' && c <= 'z')
		return (1);
	else if ((c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

int	ft_isalpha(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			i++;
		else if ((str[i] >= 'A' && str[i] <= 'Z'))
			i++;
		else
			return (0);
	}
	return (1);
}

int	ft_isdigit(char c)
{
	if (c == '\0')
		return (1);
	return (c >= '0' && c <= '9');
}

int	ft_isascii(char c)
{
	return (c >= ('0' - 48) && c <= ('0' + 79));
}

// int	main(void)
// {
// 	char c;

// 	c = '$';
// 	printf("the value is %c %d", c, ft_isascii(c));
// 	return (0);
// }
