/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions3.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olakhdar <olakhdar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 12:10:08 by olakhdar          #+#    #+#             */
/*   Updated: 2022/04/10 17:20:20 by olakhdar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	rra(t_list **a)
{
	t_list	*temp;

	temp = *a;
	if (ft_lstsize(a) > 1)
	{
		while (temp->next->next)
			temp = temp->next;
		push(a, temp->next->var);
		free(temp->next);
		temp->next = NULL;
	}
}

void	rrb(t_list **b)
{
	t_list	*temp;

	temp = *b;
	if (ft_lstsize(b) > 1)
	{
		while (temp->next->next)
			temp = temp->next;
		push(b, temp->next->var);
		free(temp->next);
		temp->next = NULL;
	}
}

void	rrr(t_list **a, t_list **b)
{
	rra(a);
	rrb(b);
}

void	pa(t_list **a, t_list **b)
{
	if (*b)
	{
		push(a, (*b)->var);
		pop(b);
	}
}

void	pb(t_list **a, t_list **b)
{
	if (*a)
	{
		push(b, (*a)->var);
		pop(a);
	}
}
