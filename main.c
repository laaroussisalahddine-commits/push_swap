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
    p_list *node11;
    p_list *node21;
    p_list *node31;
    p_list *node41;
    p_list *node51;
    int a11 = 1;
    int b21 = 0;
    int c31 = 9;
    int d31 = 3;
    int e31 = 6;

    node1 = malloc(sizeof(p_list));
    node2 = malloc(sizeof(p_list));
    node3 = malloc(sizeof(p_list));
    node4 = malloc(sizeof(p_list));
    node5 = malloc(sizeof(p_list));

    node11 = malloc(sizeof(p_list));
    node21 = malloc(sizeof(p_list));
    node31 = malloc(sizeof(p_list));
    node41 = malloc(sizeof(p_list));
    node51 = malloc(sizeof(p_list));

    if (!node1 || !node2 || !node3|| !node4|| !node5)
        return (1);

    node1->content = a1;
    node2->content = b2;
    node3->content = c3;
    node4->content = d3;
    node5->content = e3;

    node11->content = a11;
    node21->content = b21;
    node31->content = c31;
    node41->content = d31;
    node51->content = e31;

    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;
    node5->next = NULL;

    node11->next = node21;
    node21->next = node31;
    node31->next = node41;
    node41->next = node51;
    node51->next = NULL;
    // b = node1;
	// a = NULL;
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