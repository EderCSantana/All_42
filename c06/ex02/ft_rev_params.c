/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesanta <edesanta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 07:17:14 by edesanta          #+#    #+#             */
/*   Updated: 2023/06/28 07:17:14 by edesanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// • We’re dealing with a program here, you should therefore have a function main in
// your .c file.
// • Create a program that displays its given arguments.
// • One per line, in the reverse order of the command line.
// • It should display all arguments, except for argv[0].

// #include <unistd.h>
// void        ft_putchar(char c)
// {
// write (1, &c, 1);
// }
// int        main(int argc, char *argv[])
// {
// int        i;
// int        j;
// i = argc - 1;
// while (i > 0)
// {
// j = 0;
// while (argv[i][j] != '\0' && argc)
// {
// ft_putchar(argv[i][j]);
// j++;
// }
// ft_putchar('\n');
// i--;
// }
// return (0);
// }