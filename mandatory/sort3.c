/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort3.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olakhdar <olakhdar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 18:58:06 by olakhdar          #+#    #+#             */
/*   Updated: 2022/04/08 18:13:57 by olakhdar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	createstack1(t_list **lst, int argc, char **argv)
{
	int	i;

	i = argc - 1;
	while (i > 0)
	{
		push(lst, ft_atoi(argv[i]));
		i--;
	}
}

int	check_sort(t_list *a)
{
	while (a->next)
	{
		if (a->var > a->next->var)
			return (0);
		a = a->next;
	}
	return (1);
}

void	sort3(t_list **a)
{
	t_list	*temp;

	temp = *a;
	while (!check_sort(*a))
	{
		if ((*a)->var > (*a)->next->var)
			sa(a);
		else if ((*a)->var > (*a)->next->next->var)
			rra(a);
		else if ((*a)->next->var > (*a)->next->next->var)
			rra(a);
	}
}
