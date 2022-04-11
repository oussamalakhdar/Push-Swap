/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sortmany.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olakhdar <olakhdar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/31 19:30:15 by olakhdar          #+#    #+#             */
/*   Updated: 2022/04/10 17:01:00 by olakhdar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	createstack2(t_list **lst, int argc, char **argv, int *tab)
{
	int	i;
	int	index;

	i = argc - 1;
	index = 0;
	while (i > 0)
	{
		index = getindex(tab, ft_atoi(argv[i]), argc);
		push(lst, index);
		i--;
	}
}

int	*createtab(char **argv, int argc)
{
	int	i;
	int	j;
	int	*tab;

	i = 0;
	j = 1;
	tab = malloc(sizeof(int) * (argc - 1));
	while (j < argc)
	{
		if (ft_ischar(argv[j]) == 1)
		{
			write(2, "Error\n", 6);
			exit(1);
		}
		if (ft_atoi(argv[j]) > 2147483647 || ft_atoi(argv[j]) < -2147483648)
		{
			write(2, "Error\n", 6);
			exit(1);
		}
		tab[i] = ft_atoi(argv[j]);
		i++;
		j++;
	}
	return (tab);
}

int	bitscount(int nb)
{
	int	i;

	i = 0;
	while ((nb >> i) != 0)
		i++;
	return (i);
}

void	sendtoa(t_list **a, t_list **b)
{
	t_list	*tmp;

	tmp = *b;
	while (tmp)
	{
		pa(a, b);
		tmp = tmp->next;
	}
}

void	sortmany(t_list **a, t_list **b, int argc)
{
	int		i;
	int		j;
	int		nmrbits;
	t_list	*temp;

	i = 0;
	nmrbits = bitscount(argc - 2);
	while (i < nmrbits)
	{
		j = 0;
		temp = *a;
		while (j < argc - 1)
		{
			if (((temp->var >> i) & 1) == 1)
				ra(a);
			else
				pb(a, b);
			temp = temp->next;
			j++;
		}
		sendtoa(a, b);
		i++;
	}
}
