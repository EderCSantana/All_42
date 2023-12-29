/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesanta <edesanta@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 13:01:03 by edesanta          #+#    #+#             */
/*   Updated: 2023/09/13 13:01:03 by edesanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

/**
 * @brief sed to check whether a given character is a printable character
 *
 * @param c single char parameter
 * @return int Non-zero: If the input character c is a
 * printable character within the ASCII range of 0 to 127.
Zero: If the input character c is not a printable character
 */
int	ft_isprint(char c)
{
	return ((c >= '\t' && c <= '\r') || c == ' ' || c == '\x7f');
}
