/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 15:08:20 by fech-cha          #+#    #+#             */
/*   Updated: 2021/11/23 15:08:42 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

	/*lst is the head , and it stores the newnode (new) as the new head*/
void	ft_lstadd_front(t_list **lst, t_list *new)
{
	if (new)
	{
		new -> next = *lst;
		*lst = new;
	}
}
