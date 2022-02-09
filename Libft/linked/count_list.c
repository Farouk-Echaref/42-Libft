/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   count_list.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 14:06:26 by fech-cha          #+#    #+#             */
/*   Updated: 2021/11/13 14:08:32 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linked_head.h"

int count_list(t_list *head)
{
	int count = 0;
	while (head != NULL)
	{
		count++;
		head = head -> next;
	}
	return (count);
}
