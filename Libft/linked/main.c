/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fech-cha <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 13:38:45 by fech-cha          #+#    #+#             */
/*   Updated: 2021/11/13 14:09:06 by fech-cha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "linked_head.h"

int main()
{
	int count = 0;

	t_list *head;
	t_list *last;
	head = NULL;

	add_link(&head,5);
	add_link(&head,4);
	add_link(&head,3);
	add_link_back(&head,6);
	add_link_back(&head,7);


	//print_list(head);
	//printf("NULL");
	//printf("\n");
	count = count_list(head);
	printf("%d\n",count);
	//last = get_last(head);
	//printf("last element : %d \n",last -> data);

	return (0);

}
