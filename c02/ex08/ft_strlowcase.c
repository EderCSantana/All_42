/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesanta <edesanta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 00:39:11 by edesanta          #+#    #+#             */
/*   Updated: 2023/06/28 00:39:11 by edesanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Create a function that transforms every letter to lowercase.
// • Here’s how it should be prototyped :
// char *ft_strlowcase(char *str);
// • It should return str

#include <stdio.h>
char        *ft_strlowcase(char *str)
{
int        i;
i = 0;
while (str[i] != '\0')
{
if (str[i] >= 'A' && str[i] <= 'Z')
{
str[i] += 32; //same as last, but increase 32
}
i++;
}
return (str);
}
// int        main()
// {
// char str[] = "ABCDEFGH";
// printf("%s", ft_strlowcase(str));
// }
