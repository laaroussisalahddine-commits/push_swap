
#include "push_swap.h"

void    check_len(p_list **a, p_list **b)
{
	int		len;
	p_list	*current;

    len = ft_lstsize(*a);
    if (len == 2)
	{
		current = *a;
		if (current->content > current->next->content)
			swap_a(a);
		return ;
	}
	while (len > 2)
	{
		push_b(a, b);
		len--;
	}
}

int is_sort(p_list *lst)
{
    int is_sort;

    is_sort = 0;
    while (lst->next != NULL && lst->content < lst->next->content)
        lst = lst -> next;
    if (lst->next == NULL)
        is_sort = 1;
    return (is_sort);
}

void simple_sort(p_list **a, p_list **b)
{
    p_list *current;
    p_list *suiv;

    if (!a || !*a || !(*a)->next)
        return ;
    while (!is_sort(*a))
    {
        check_len(a, b);
        while (*b != NULL)
        {
            current = *a;
            suiv = current->next;
            if (suiv != NULL && current->content > suiv->content)
                swap_a(a);
            push_a(a, b);
        }
        if (*b == NULL)
        {
            current = *a;
            suiv = current->next;
            if (suiv != NULL && current->content > suiv->content)
                swap_a(a);
        }
    }
}
