/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 15:12:18 by fech-cha          #+#    #+#             */
/*   Updated: 2021/11/23 15:12:21 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* t_list *new_element;

    //new_element = NULL;
    //new_head = NULL;
    while (lst)
    {
        new_element = ft_lstnew(lst -> content);
		//call lstclear
        ft_lstadd_back(&new_head,new_element);
        lst = lst -> next;
    }   */
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_head;

	if (!lst)
		return (NULL);
	new_head = (t_list *)malloc(sizeof(t_list));
	if (!new_head)
	{
		ft_lstclear(&new_head, del);
		return (NULL);
	}
	new_head -> content = (*f)(lst -> content);
	new_head -> next = ft_lstmap(lst -> next, f, del);
	return (new_head);
}
