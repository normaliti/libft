#include "libft.h"

void ft_lstadd_back(t_list **lst, t_list *new)
{
	if (!(*lst))
	{	*lst = new;
		return;
	}
	t_list *tmp;
	tmp = new;
	tmp->next = NULL;//проверить? спросить у пиров
	t_list* p = *lst;
	while (p->next)
		p = p->next;
	p->next = tmp;	
}
