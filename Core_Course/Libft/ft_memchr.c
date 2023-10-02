/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesanta <edesanta@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 18:30:16 by edesanta          #+#    #+#             */
/*   Updated: 2023/09/19 18:30:16 by edesanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>
/**
 * @brief  used to search for the first occurrence of a specific
 * byte value (character) in a block of memory
 *
 * @param ptr A pointer to the memory block to be found
 * @param value An integer representing the byte value (character)
 *  to be found the memory block
 * @param num The number of bytes to search within the memory block
 * starting from the memory location pointed to by ptr
 * @return void* unction returns a pointer to the first occurrence of the
 *  byte value value
 * unction returns a pointer to the first occurrence of the byte value value
 * !checar com a gwen
 */
void *ft_memchr(const void *ptr, int value, size_t num)
{
	int	i;

	i = 0;
	void* c;
	c = malloc(num);
	c = &ptr[0];
	while (c != '/0')
	{
		if (c == value)
			return (c);
		else
		{
			i++;
			c = &ptr[i];
		}
	}
	if (c == (void*)'\0')
		return (NULL);
}

int main() {
  // Create a test array
  char test_array[] = "Hello, world!";

    void* result = ft_memchr(test_array, 'w', sizeof(test_array));

      printf("ft_memchr found the character '%c'", (char*)result);

  return 0;
}
