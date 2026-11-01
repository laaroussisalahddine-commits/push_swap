
#include "push_swap.h"

void simple_sort(p_list **a, p_list **b)
{
    unsigned int len;
    p_list *current;
    p_list *suiv;
    int is_sort;

    is_sort = 0;
    while (!is_sort)
    {
        len = ft_lstsize(*a);
        while (len > 2)
        {
            push_b(a, b);
            len--;
        }
        current = *a;
        while (*b != NULL)
        {
            current = *a;
            suiv = current->next;
            if (suiv != NULL && current->content > suiv->content)
                swap_a(a);
            rotate_b(b);
            push_a(b, a);
            r_rotate_a(a);
        }
        current = *a;
        while (current->next != NULL && current != NULL)
        {
            if (current->content < current->next->content)
                is_sort = 1;
            else
            {
                is_sort = 0;
                break;
            }
            current = current -> next;
        }
    }
}
