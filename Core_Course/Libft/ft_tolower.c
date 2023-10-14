/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesanta <edesanta@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/13 13:01:16 by edesanta          #+#    #+#             */
/*   Updated: 2023/09/13 13:01:16 by edesanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <libft.h>
/**
 * @brief  turn a uppercase character into lowercase
 *
 * @param c char that can be lower or opper case
 * @return c a character in lower case
 */
int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (c - 32);
	else
		return (c);
}

// int main()
// {
//     char    a;
//     a = 'A';
//     printf("%c", ft_tolower(a));
// }
