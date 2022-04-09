/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions1.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olakhdar <olakhdar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 12:02:37 by olakhdar          #+#    #+#             */
/*   Updated: 2022/04/09 00:51:46 by olakhdar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	push(t_list **lst, int data)
{
	t_list	*new;

	new = ft_lstnew(data);
	ft_lstadd_front(lst, new);
}

void	pop(t_list **lst)
{
	t_list	*temp;

	temp = *lst;
	*lst = (*lst)->next;
	free(temp);
}

void	sa(t_list **a)
{
	int	v;

	if (ft_lstsize(a) > 1)
	{	
		v = (*a)->var;
		(*a)->var = (*a)->next->var;
		(*a)->next->var = v;
	}
}

void	sb(t_list **b)
{
	int	v;

	if (ft_lstsize(b) > 1)
	{
		v = (*b)->var;
		(*b)->var = (*b)->next->var;
		(*b)->next->var = v;
	}
}

void	ss(t_list **a, t_list **b)
{
	sa(a);
	sa(b);
}
