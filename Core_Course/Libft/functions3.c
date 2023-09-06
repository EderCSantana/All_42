/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   funtions3.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesanta <edesanta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/24 10:49:43 by edesanta          #+#    #+#             */
/*   Updated: 2023/08/24 10:49:43 by edesanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	ft_memcpy(void *dest, const void *org, size_t num)
{
	int				i;
	unsigned char	*aux;
	unsigned char	*source;

	i = 0;
	aux = (unsigned char *) dest;
	source = (unsigned char *) org;
	while (i < num)
	{
		aux[i] = source[i];
		i++;
	}
}

void	ft_memmove(void *dest, const void *org, size_t num)
{
	int				i;
	unsigned char	*aux_dest;
	unsigned char	*aux_org;

	i = 0;
	aux_dest = (unsigned char *) dest;
	aux_org = (unsigned char *) org;
	if (aux_dest < aux_org)
	{
		while (i < num)
		{
			aux_dest[i] = aux_org[i];
			i++;
		}
	}
	else
	{
		i = num + 1;
		while (i >= 0)
		{
			aux_dest[i] = aux_org[i];
			i--;
		}
	}
}

size_t strlcpy(char *dest, const char *org, size_t num)
{
	int	i;

	i = 0;
	
}

int	main(void)
{
	char	d[] = "batata";
	char	dest[] = "Hello World!";
	char	dest2[] = "Hello World!";

	ft_memcpy(dest, d, 10);
	printf("the valur is %s\n", dest);
	ft_memmove(d, dest2, 5);
	printf("the valur is %s\n", d);
	return (0);
}
