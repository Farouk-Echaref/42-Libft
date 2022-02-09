/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   add_link.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 13:47:14 by fech-cha          #+#    #+#             */
/*   Updated: 2021/11/13 14:11:55 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linked_head.h"

void	add_link(t_list **head, int new_data)
{
	t_list *tmp;
	tmp = (t_list *)malloc(sizeof(t_list));
	tmp -> data = new_data;
	tmp -> next = *head;
	*head = tmp;
}
