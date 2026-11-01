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
    p_list *node4;
    p_list *node5;
    int a1 = 1;
    int b2 = 0;
    int c3 = 9;
    int d3 = 3;
    int e3 = 6;

    node1 = malloc(sizeof(p_list));
    node2 = malloc(sizeof(p_list));
    node3 = malloc(sizeof(p_list));
    node4 = malloc(sizeof(p_list));
    node5 = malloc(sizeof(p_list));

    if (!node1 || !node2 || !node3|| !node4|| !node5)
        return (1);

    node1->content = a1;
    node2->content = b2;
    node3->content = c3;
    node4->content = d3;
    node5->content = e3;

    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;
    node5->next = NULL;
    a = node1;
	b = NULL;

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

    simple_sort(&a, &b);

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
    return (0);
}