/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesanta <edesanta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 07:16:19 by edesanta          #+#    #+#             */
/*   Updated: 2023/06/28 22:40:49 by edesanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// We’re dealing with a program here,
// you should therefore have a function main in
// your .c file.
// • Create a program that displays its given arguments.
// • One per line, in the same order as in the command line.
// • It should display all arguments, except for argv[0].

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char *argv[])
{
	int	i;
	int	j;

	j = 1;
	while (j < argc)
	{
		i = 0;
		while (argv[j][i] != '\0')
		{
			ft_putchar(argv[j][i]);
			i++;
		}
		ft_putchar('\n');
		j++;
	}
	return (0);
}
