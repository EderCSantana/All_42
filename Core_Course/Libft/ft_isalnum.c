/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesanta <edesanta@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 13:00:49 by edesanta          #+#    #+#             */
/*   Updated: 2023/09/13 13:00:49 by edesanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

/**
 * @brief used to check whether a given character is an alphanumeric
 * character,
 *  which includes both alphabet letters (a-z or A-Z) and digits (0-9)
 *
 * @param c character to be checked
 * @return int Non-zero (true): If the input character c
 * is an alphanumeric character (a-z, A-Z, or 0-9).
 * It returns 0 if c is not alphanumeric
 */
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
