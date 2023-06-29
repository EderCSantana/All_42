/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ft.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesanta <edesanta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 14:54:27 by edesanta          #+#    #+#             */
/*   Updated: 2023/06/28 12:39:59 by edesanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// • Create a function that takes a pointer to int as a parameter,
//  and sets the value "42"
// to that int.
// #include <unistd.h>
// #include <stdio.h>

void	ft_ft(int *nbr)
{
	*nbr = 42;
}

// int main()
// {
// 	int *p_nbr;
// 	int nbr;
// 	p_nbr = &nbr;
// 	ft_ft(p_nbr);
// 	write(1, &nbr, 2); //don`t work, will print ascii
// 	printf("%d", nbr);
// }
