/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 15:12:59 by fech-cha          #+#    #+#             */
/*   Updated: 2021/11/23 15:13:02 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*Create a new element of the list */
t_list	*ft_lstnew(void *content)
{
	t_list	*tmp;

	tmp = (t_list *)malloc(sizeof(t_list));
	if (tmp == NULL)
		return (NULL);
	else
	{
		tmp -> content = content;
		tmp -> next = NULL;
	}
	return (tmp);
}
