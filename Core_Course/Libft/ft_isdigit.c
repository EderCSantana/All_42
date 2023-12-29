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
#include "libft.h"

/**
 * @brief used to check whether a given character is a digit (0-9)
 *
 * @param c parameter c, which represents the character to be checked
 * @return int Non-zero (true): If the input character c is a digit (0-9).
Zero (false): If the input character c is not a digit
 */
int	ft_isdigit(char *c)
{
	if (c == NULL)
		return (1);
	if (c >= (char *) '0' && c <= (char *) '9')
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
