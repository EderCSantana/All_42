/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesanta <edesanta@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 18:30:53 by edesanta          #+#    #+#             */
/*   Updated: 2023/09/19 18:30:53 by edesanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

/**
 * @brief The strlcat function appends the source string src to the end
 *  of the destination string dst. The function will append at most size - strlen(dst) - 1 bytes, NUL-terminating the result
 * 
 * @param dst A pointer to the destination string.
 * @param src: A pointer to the source string.
 * @param size: The size of the destination buffer, in bytes.
 * @return The total length of the string that would have been created
 *  if there was unlimited space
 */
size_t ft_strlcat(char *dst, const char *src, size_t size)
{

}