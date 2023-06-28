/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesanta <edesanta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 23:50:42 by edesanta          #+#    #+#             */
/*   Updated: 2023/06/27 23:50:42 by edesanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// • Create a function that swaps the value of two integers whose addresses are entered
// as parameters.
#include <stdio.h>
#include <unistd.h>
void ft_swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

// int main()
// {
// 	int a, b, *c, *d;
// 	char p, m;
// 	a = 2;
// 	c = &a;
// 	b = 4;
// 	d = &b;
// 	ft_swap(c, d);
// 	p = '0' + a;
// 	m = '0' + b;
// 	write(1, &p, 1);
// 	write(1, &m, 1);
// }