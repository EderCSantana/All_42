/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesanta <edesanta@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 18:29:31 by edesanta          #+#    #+#             */
/*   Updated: 2023/09/19 18:29:31 by edesanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

/**
 * @brief Deletes and frees the given node and every
successor of that node, using the function ’del’ and free(3).
Finally, the pointer to the list must be set to  NULL.
 *
 * @param lst The address of a pointer to a node.
 * @param del The address of the function used to delete
the content of the node.
 */
void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*aux;

	if (*lst)
	{
		while (*lst)
		{
			aux = (*lst)->next;
			ft_lstdelone(*lst, del);
			*lst = aux;
		}
		lst = 0;
	}
}
