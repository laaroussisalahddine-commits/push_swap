#include "push_swap.h"
#include <stdio.h>
#include <stdlib.h>

int	main(void)
{
	t_list	*a;
	t_list	*current;
	t_list	*new_node;
	int		numbers[] = {5, -3, 10, -8, 0, 2, -15, 7};
	int		i;

	a = NULL;
	i = 0;
	while (i < 8)
	{
		new_node = malloc(sizeof(t_list));
		if (!new_node)
			return (1);
		new_node->content = numbers[i];
		new_node->index = -1;
		new_node->next = NULL;
		ft_lstadd_back(&a, new_node);
		i++;
	}
    puts("==============head==========");
    current = a;
    while (current)
	{
		printf("%d->", current->content);
		current = current->next;
	}
	printf("\nBEFORE medium_sort:\n");
	current = a;
	while (current)
	{
		printf("Value: %d | Index: %d\n", current->content, current->index);
		current = current->next;
	}

	medium_sort(&a);

	printf("\nAFTER medium_sort:\n");
	current = a;
	while (current)
	{
		printf("Value: %d | Index: %d\n", current->content, current->index);
		current = current->next;
	}

	return (0);
}