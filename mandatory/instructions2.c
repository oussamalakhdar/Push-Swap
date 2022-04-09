/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olakhdar <olakhdar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 12:08:59 by olakhdar          #+#    #+#             */
/*   Updated: 2022/04/02 12:09:43 by olakhdar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ra(t_list **a)
{
	t_list	*new;

	new = ft_lstnew((*a)->var);
	ft_lstadd_back(a, new);
	pop(a);
	write(1, "ra\n", 3);
}

void	rb(t_list **b)
{
	t_list	*new;

	new = ft_lstnew((*b)->var);
	ft_lstadd_back(b, new);
	pop(b);
	write(1, "rb\n", 3);
}

void	rr(t_list **a, t_list **b)
{
	ra(a);
	rb(b);
}
