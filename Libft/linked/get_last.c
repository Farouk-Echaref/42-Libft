#include "linked_head.h"

t_list *get_last(t_list *head)
{
    while (head -> next != NULL)
    {
        head = head -> next;
    }
    return (head);
}