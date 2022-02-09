#ifndef LINKED_HEAD_H
#define LINKED_HEAD_H

#include <stdio.h>
#include <stdlib.h>

typedef struct s_list t_list;
struct s_list
{
	int data;
	t_list *next;
};

void	add_link(t_list **head,int new_data);
void add_link_back(t_list **head, int new_data);
void	print_list(t_list *head);
int	count_list(t_list *head);
t_list	*get_last(t_list *head);

#endif
