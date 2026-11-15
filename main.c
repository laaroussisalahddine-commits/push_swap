#include "push_swap.h"
#include <stdio.h>
#include <stdlib.h>

static t_list *new_node(int value)
{
    t_list *node;

    node = malloc(sizeof(t_list));
    if (!node)
        return (NULL);
    node->content = value;
    node->index = -1;
    node->next = NULL;
    return (node);
}

static void print_stack(char *name, t_list *lst)
{
    printf("\n%s:\n", name);
    while (lst)
    {
        printf("Value: %d | Index: %d\n",
            lst->content, lst->index);
        lst = lst->next;
    }
}

static void free_stack(t_list *lst)
{
    t_list *tmp;

    while (lst)
    {
        tmp = lst->next;
        free(lst);
        lst = tmp;
    }
}

int main(void)
{
    t_list *a;
    t_list *b;

    a = new_node(40);
    a->next = new_node(10);
    a->next->next = new_node(50);
    a->next->next->next = new_node(20);
    a->next->next->next->next = new_node(30);
    b = NULL;

    printf("========== BEFORE SORT ==========\n");
    print_stack("Stack A", a);
    print_stack("Stack B", b);

    medium_sort(&a, &b);

    printf("\n========== AFTER SORT ==========\n");
    print_stack("Stack A", a);
    print_stack("Stack B", b);

    free_stack(a);
    free_stack(b);
    return (0);
}