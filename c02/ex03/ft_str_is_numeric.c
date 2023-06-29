/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesanta <edesanta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 00:22:35 by edesanta          #+#    #+#             */
/*   Updated: 2023/06/28 13:19:25 by edesanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// • Create a function that returns 1 if the string given as
// a parameter contains only
// digits, and 0 if it contains any other character.
// • Here’s how it should be prototyped :
// int ft_str_is_numeric(char *str);
// • It should return 1 if str is empty.

// #include <stdio.h>
int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (!(str[i] >= 48 && str [i] <= 57))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
// int        main()
// {
// printf("%d", ft_str_is_numeric("048393"));
// printf("\n%d", ft_str_is_numeric("48938h448"));
// printf("\n%d", ft_str_is_numeric("ahhhh eu vou tacar"));
// }
