/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesanta <edesanta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 00:37:23 by edesanta          #+#    #+#             */
/*   Updated: 2023/06/28 00:37:23 by edesanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Create a function that returns 1 if the string given as a parameter contains only
// printable characters, and 0 if it contains any other character.
// • Here’s how it should be prototyped :
// int ft_str_is_printable(char *str);
// • It should return 1 if str is empty.

// #include <stdio.h>
// int        ft_str_is_printable(char *str)
// {
// int        i;
// i = 0;
// while (str[i] != '\0')
// {
// if (!(str[i] >= 32 && str [i] <= 126))
// {
// return (0);
// }
// i++;
// }
// return (1);
// }
// int        main()
// {
// printf("%d", ft_str_is_printable("ABDELKFSCO?I340990%"));
// printf("\n%d", ft_str_is_printable("\n\t\v\f"));
// }
