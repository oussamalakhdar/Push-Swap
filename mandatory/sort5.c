/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort5.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olakhdar <olakhdar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 19:11:07 by olakhdar          #+#    #+#             */
/*   Updated: 2022/04/02 14:06:24 by olakhdar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	check(t_list **a)
{
	int		nb;
	int		i;
	int		b;
	t_list	*tmp;

	nb = 0;
	i = 0;
	b = 0;
	tmp = *a;
	nb = tmp->var;
	while (tmp)
	{
		if (nb > tmp->var)
		{	
			nb = tmp->var;
			b = i;
		}
		tmp = tmp->next;
		i++;
	}
	return (b);
}

void	fun2(t_list **a, int nb)
{
	if (nb == 2)
	{
		rra(a);
		rra(a);
		rra(a);
	}
	if (nb == 3)
	{
		rra(a);
		rra(a);
	}
	if (nb == 4)
		rra(a);
}

void	fun1(t_list **a, t_list **b, int nb, int i)
{
	while (i < 2)
	{
		nb = check(a);
		if (nb >= 2)
			fun2(a, nb);
		else if (nb < 2)
		{
			if (nb == 0)
			{
				pb(a, b);
				i++;
			}
			if (nb == 1)
			{
				ra(a);
				pb(a, b);
				i++;
			}
		}
	}
}

void	sort5(t_list **a, t_list **b)
{
	int	i;
	int	nb;

	i = 0;
	nb = 0;
	fun1(a, b, nb, i);
	sort3(a);
	pa(a, b);
	pa(a, b);
}
