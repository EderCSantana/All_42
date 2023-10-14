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
#include <libft.h>

/**
 * @brief sed to check whether a given character is an alphabet letter
 *  (a-z or A-Z)
 *
 * @param c which represents the character to be checked.
 * @return int Non-zero (true): If the input character c is an
 * alphabet letter (a-z or A-Z).
Zero (false): If c is not an alphabet letter
 */
int	ft_isalpha(char c)
{
	if (c == '\0')
		return (0);
	else if (c >= 'a' && c <= 'z')
		return (1);
	else if ((c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

// int main(int argc, char *argv[])
// {
// 	printf("the value is %s %d", argv[1], ft_isalpha(argv[1]));
// 	return (0);
// }
