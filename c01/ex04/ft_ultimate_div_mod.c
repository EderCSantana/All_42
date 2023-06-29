/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesanta <edesanta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 23:51:03 by edesanta          #+#    #+#             */
/*   Updated: 2023/06/28 12:48:48 by edesanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// • Create a function ft_ultimate_div_mod with the following prototype :
// void ft_ultimate_div_mod(int *a, int *b);
// • This function divides parameters a by b.
// The result of this division is stored in the
// int pointed by a. The remainder of the division 
// is stored in the int pointed by b.

#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
// int main()
// {
// int x;
// int        y;
// x = 15;
// y = 3;
// ft_ultimate_div_mod(&x, &y);
// printf("%d | %d", x, y);
// }
