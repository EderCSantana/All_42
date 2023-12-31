/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesanta <edesanta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 00:20:14 by edesanta          #+#    #+#             */
/*   Updated: 2023/06/28 13:16:43 by edesanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Create a function that returns 1 if the string given as
// a parameter contains only
// alphabetical characters, and 0 if it contains any other character.
// • Here’s how it should be prototyped :
// int ft_str_is_alpha(char *str);
// • It should return 1 if str is empty.

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
	{
		return (1);
	}
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			i++;
		}
		else if ((str[i] >= 'A' && str[i] <= 'Z'))
			i++;
		else
			return (0);
	}
	return (1);
}
