/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesanta <edesanta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 00:23:29 by edesanta          #+#    #+#             */
/*   Updated: 2023/06/28 00:23:29 by edesanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Create a function that returns 1 if the string given as a parameter contains only lowercase alphabetical characters, and 0 if it contains any other character.
// • Here’s how it should be prototyped :
// int ft_str_is_lowercase(char *str);
// • It should return 1 if str is empty.

// #include <stdio.h>
int        ft_str_is_lowercase(char *str)
{
int        i;
i = 0;
while (str[i] != '\0')
{
if (!(str[i] >= 'a' && str[i] <= 'z'))
{
return (0);
}
i++;
}
return (1);
}
// int        main()
// {
// printf("%d", ft_str_is_lowercase("batata"));
// printf("\n%d", ft_str_is_lowercase("Batata"));
// printf("\n%d", ft_str_is_lowercase("-_148493gnngs"));
// }