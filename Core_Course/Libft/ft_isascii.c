/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesanta <edesanta@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 13:00:57 by edesanta          #+#    #+#             */
/*   Updated: 2023/09/13 13:00:57 by edesanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <libft.h>

/**
 * @brief used to check whether a given integer value represents an ASCII
 * character (a character with a value between 0 and 127, inclusive)
 *
 * @param c parameter c, which represents the value to be checked for
 *  being within the ASCII range
 * @return int Non-zero (true): If the input integer c represents
 * an ASCII character (0 to 127).
Zero (false): If the input integer c is outside the ASCII range
 */
int	ft_isascii(char c)
{
	return (c >= ('0' - 48) && c <= ('0' + 79));
}
