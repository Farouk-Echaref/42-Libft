#include "linked_head.h"

void    add_link_back(t_list **head, int new_data)
{
    t_list  *tmp;
    t_list  *last;
    //creating a new node 
    tmp = (t_list *)malloc(sizeof(t_list));
    
    tmp -> data = new_data;
    tmp -> next = NULL;
    /*if head is null , it is an empty list*/
    if (*head == NULL)
        *head = tmp;
    //otherwise find the last node and add the new node 
    last = *head;
    while (last -> next != NULL)
        last = last -> next;
    last -> next = tmp;
}