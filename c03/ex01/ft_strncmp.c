/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesanta <edesanta@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/28 00:43:25 by edesanta          #+#    #+#             */
/*   Updated: 2023/06/28 00:43:25 by edesanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// Reproduce the behavior of the function strncmp (man strncmp). (same as previously, but start from n)
// • Here’s how it should be prototyped :
// int ft_strncmp(char *s1, char *s2, unsigned int n);

// #include <stdio.h>
int        ft_strncmp(char *s1, char *s2, unsigned int n)
{
unsigned int        i;
i = 0;
while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0') && i < n)
{
i++;
}
return (s1[i] - s2[i]);
}
