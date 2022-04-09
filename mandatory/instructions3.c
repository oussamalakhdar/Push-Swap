/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions3.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olakhdar <olakhdar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 12:10:08 by olakhdar          #+#    #+#             */
/*   Updated: 2022/04/02 12:13:29 by olakhdar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	rra(t_list **a)
{
	t_list	*temp;

	temp = *a;
	while (temp->next->next)
		temp = temp->next;
	push(a, temp->next->var);
	free(temp->next);
	temp->next = NULL;
	write(1, "rra\n", 4);
}

void	rrb(t_list **b)
{
	t_list	*temp;

	temp = *b;
	while (temp->next->next)
		temp = temp->next;
	push(b, temp->next->var);
	free(temp->next);
	temp->next = NULL;
	write(1, "rrb\n", 4);
}

void	rrr(t_list **a, t_list **b)
{
	rra(a);
	rrb(b);
}

void	pa(t_list **a, t_list **b)
{
	push(a, (*b)->var);
	pop(b);
	write(1, "pa\n", 3);
}

void	pb(t_list **a, t_list **b)
{
	push(b, (*a)->var);
	pop(a);
	write(1, "pb\n", 3);
}
