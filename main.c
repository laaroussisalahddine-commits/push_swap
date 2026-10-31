#include "push_swap.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    p_list *stack;
    p_list *node1;
    p_list *node2;
    p_list *node3;
    int a = 10;
    int b = 20;
    int c = 30;

    node1 = malloc(sizeof(p_list));
    node2 = malloc(sizeof(p_list));
    node3 = malloc(sizeof(p_list));

    if (!node1 || !node2 || !node3)
        return (1);

    node1->content = a;
    node2->content = b;
    node3->content = c;

    node1->next = node2;
    node2->next = node3;
    node3->next = NULL;
    stack = node1;

    printf("Before rotate_a:\n");
    p_list *temp = stack;
    while (temp)
    {
        printf("%d ",temp->content);
        temp = temp->next;
    }

    r_rotate_a(&stack);

    printf("\nAfter rotate_a:\n");
    temp = stack;
    while (temp)
    {
        printf("%d ",temp->content);
        temp = temp->next;
    }
    printf("\n");
    return (0);
}