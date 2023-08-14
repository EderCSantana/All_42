/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesanta <edesanta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 23:50:52 by edesanta          #+#    #+#             */
/*   Updated: 2023/06/28 12:45:19 by edesanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// • Create a function ft_div_mod prototyped like this :
// void ft_div_mod(int a, int b, int *div, int *mod);
// • This function divides parameters a by b and
//  stores the result in the int pointed by
// div. It also stores the remainder of the division of a by b
// in the int pointed by mod.

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}
