#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{

	(*lst)->content = new->content;
	(*lst)->next = new->next;
	new->next = NULL;
}
