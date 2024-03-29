/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edesanta <edesanta@student.42prague.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 18:29:50 by edesanta          #+#    #+#             */
/*   Updated: 2023/09/19 18:29:50 by edesanta         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

/**
 * @brief Iterates the list ’lst’ and applies the function
’f’ on the content of each node. Creates a new
list resulting of the successive applications of
the function ’f’. The ’del’ function is used to
delete the content of a node if needed.

 *
 * @param lst The address of a pointer to a node.
 * @param f The address of the function used to iterate on the list.
 * @param del The address of the function used to delete
the content of a node if needed.
 * @return t_list* The new list.
NULL if the allocation fails.
 */
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*aux;
	t_list	*the_end;

	aux = NULL;
	the_end = NULL;
	while (lst)
	{
		if (aux == NULL)
		{
			aux = ft_lstnew(((*f)(lst->content)));
			if (aux == NULL)
				ft_lstdelone(aux, del);
			the_end = ft_lstlast(aux);
		}
		else
		{
			the_end->next = ft_lstnew(aux);
			the_end = the_end->next;
			the_end->content = ((*f)(lst->content));
			the_end->next = NULL;
		}
		lst = lst->next;
	}
	return (aux);
}
