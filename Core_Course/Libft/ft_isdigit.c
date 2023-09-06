/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesanta <edesanta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/19 11:52:24 by edesanta          #+#    #+#             */
/*   Updated: 2023/08/19 11:52:24 by edesanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_isdigit(char *c)
{
	if (c == '\0')
		return (1);
	if (c >= '0' && c <= '9')
	{
		return (0);
	}
	else
		return (1);
}

// int main(int argc, char *argv[])
// {
// 	printf("the value is %s %d", argv[1], ft_isdigit(argv[1]));
// 	return (0);
// }
