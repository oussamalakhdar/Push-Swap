/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olakhdar <olakhdar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/02 12:08:59 by olakhdar          #+#    #+#             */
/*   Updated: 2022/04/09 00:57:43 by olakhdar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	ra(t_list **a)
{
	t_list	*new;

	if (ft_lstsize(a) > 1)
	{
		new = ft_lstnew((*a)->var);
		ft_lstadd_back(a, new);
		pop(a);
	}
}

void	rb(t_list **b)
{
	t_list	*new;

	if (ft_lstsize(b) > 1)
	{
		new = ft_lstnew((*b)->var);
		ft_lstadd_back(b, new);
		pop(b);
	}
}

void	rr(t_list **a, t_list **b)
{
	ra(a);
	rb(b);
}
