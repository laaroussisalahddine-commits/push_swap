#include "push_swap.h"
#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    p_list	*a;
	p_list	*b;
    p_list *node1;
    p_list *node2;
    p_list *node3;
    int a1 = 10;
    int b2 = 20;
    int c3 = 30;

    node1 = malloc(sizeof(p_list));
    node2 = malloc(sizeof(p_list));
    node3 = malloc(sizeof(p_list));

    if (!node1 || !node2 || !node3)
        return (1);

    node1->content = a1;
    node2->content = b2;
    node3->content = c3;

    node1->next = node2;
    node2->next = node3;
    node3->next = NULL;
    a = NULL;
	b = node1;

    printf("====================Before push_b:==============================\n");
	printf("\nstack a:\n");
    p_list *temp = a;
    while (temp)
    {
        printf("%d ",temp->content);
        temp = temp->next;
    }
	printf("\nstack b:\n");
	temp = b;
    while (temp)
    {
        printf("%d ",temp->content);
        temp = temp->next;
    }

    push_a(&a, &b);

    printf("\n=====================After push_b:===============\n");
	printf("\nstack a:\n");
    temp = a;
    while (temp)
    {
        printf("%d ",temp->content);
        temp = temp->next;
    }
	printf("\nstack b:\n");
	temp = b;
    while (temp)
    {
        printf("%d ",temp->content);
        temp = temp->next;
    }

	push_a(&a, &b);

    printf("\n=====================After push_b2:===============\n");
	printf("\nstack a:\n");
    temp = a;
    while (temp)
    {
        printf("%d ",temp->content);
        temp = temp->next;
    }
	printf("\nstack b:\n");
	temp = b;
    while (temp)
    {
        printf("%d ",temp->content);
        temp = temp->next;
    }
    printf("\n");
    return (0);
}