/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesanta <edesanta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 15:45:06 by edesanta          #+#    #+#             */
/*   Updated: 2023/08/14 15:45:25 by edesanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>

/**
 * @brief 
 *
 * @param str
 * @return int
 */
int	ft_isalpha(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			i++;
		}
		else if ((str[i] >= 'A' && str[i] <= 'Z'))
			i++;
		else
			return (0);
	}
	return (1);
}

// int main(int argc, char *argv[])
// {
// 	printf("the value is %s %d", argv[1], ft_isalpha(argv[1]));
// 	return (0);
// }
