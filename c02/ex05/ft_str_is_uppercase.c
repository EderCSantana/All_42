/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesanta <edesanta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 00:24:04 by edesanta          #+#    #+#             */
/*   Updated: 2023/06/28 00:24:04 by edesanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Create a function that returns 1 if the string given as a parameter contains only uppercase alphabetical characters, and 0 if it contains any other character.
// • Here’s how it should be prototyped :
// int ft_str_is_uppercase(char *str);
// • It should return 1 if str is empty.

// #include <stdio.h>
int        ft_str_is_uppercase(char *str)
{
int        i;
i = 0;
while (str[i] != '\0')
{
if (!(str[i] >= 'A' && str[i] <= 'Z'))
{
return (0);
}
i++;
}
return (1);
}
// int        main()
// {
// printf("%d", ft_str_is_uppercase("ABC"));
// printf("\n%d", ft_str_is_uppercase("ABCd"));
// printf("\n%d", ft_str_is_uppercase("-_123"));
// }