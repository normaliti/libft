#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list *tmp;
	tmp = new;
	tmp->next = NULL;
	t_list* p = *lst;
	while (p->next)
		p = p->next;
	p->next = tmp;
	
}
