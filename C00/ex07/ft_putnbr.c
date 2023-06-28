/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesanta <edesanta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/26 17:08:03 by edesanta          #+#    #+#             */
/*   Updated: 2023/06/27 13:42:10 by edesanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdbool.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print(int *vec, int n)
{
	int		i;
	bool	low;

	i = 1;
	low = 1;
	while (i < n)
	{
		if (vec[i - 1] >= vec[i])
		{
			low = 0;
			i++;
		}
	}
	if (low)
	{
		i = 0;
		while (i < n)
			ft_putchar(vec[i++] + 48);
		if (vec[0] < (10 - n))
		{
			ft_putchar(',');
			ft_putchar(' ');
		}
	}
}

void	ft_print_combn(int n)
{
	int	i;
	int	*vec;

	i = 0;
	while (i < n)
		vec[i++] = 0;
	while (vec[0] <= (10 - n) && n >= 1 && n < 10)
	{
		print(vec, n);
		vec[n - 1]++;
		i = n - 1;
		while (i && n > 1)
		{
			if (vec[i] > 9)
			{
				vec[i - 1]++;
				vec[i] = 0;
			}
			i--;
		}
	}
}
