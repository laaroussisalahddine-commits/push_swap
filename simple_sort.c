
#include "push_swap.h"

void simple_sort(p_list **a, p_list **b)
{
    unsigned int len;
    p_list *current;
    p_list *suiv;
    int is_sort;

    is_sort = 0;
    if (!a || !*a || !(*a)->next)
        return ;
    while (!is_sort)
    {
        len = ft_lstsize(*a);
        if (len == 2)
        {
            current = *a;
            if (current->content > current->next->content)
                swap_a(a);
            is_sort = 1;
        }
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
            r_rotate_b(b);
            push_a(a, b);
            r_rotate_a(a);
        }
        current = *a;
        while (current->next != NULL && current->content < current->next->content)
            current = current -> next;
        if (current->next == NULL)
            is_sort = 1;
    }
}
