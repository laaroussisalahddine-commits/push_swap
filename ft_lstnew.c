#include "push_swap.h"

p_list	*ft_lstnew(int content)
{
	p_list	*node;

	node = (p_list *)malloc(sizeof(p_list));
	if (!node)
		return (NULL);
	node -> content = content;
	node -> next = NULL;
	return (node);
}