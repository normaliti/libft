#include "libft.h"

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	//t_list *tmp = (t_list*)malloc(sizeof(t_list));
	//tmp->content = new->content;
	t_list *tmp = new;
	tmp->next = *lst;
	*lst = tmp;	
	
}
