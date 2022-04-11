/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olakhdar <olakhdar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 16:31:20 by olakhdar          #+#    #+#             */
/*   Updated: 2022/04/10 22:01:49 by olakhdar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort4extra(t_list **a, t_list **b, int nb, int *i)
{
	if (nb == 0)
	{	
		pb(a, b);
		(*i)++;
	}
	else if (nb == 1)
	{
		sa(a);
		pb(a, b);
		(*i)++;
	}
}

void	sort4(t_list **a, t_list **b)
{
	int	i;
	int	nb;

	i = 0;
	nb = check(a);
	while (i < 1)
	{
		sort4extra(a, b, nb, &i);
		if (nb == 2)
		{	
			rra(a);
			rra(a);
			pb(a, b);
			i++;
		}
		else if (nb == 3)
		{
			rra(a);
			pb(a, b);
			i++;
		}
	}
	sort3(a);
	pa(a, b);
}

void	checkerrors(int *tab, int argc)
{
	int	i;
	int	j;

	i = 0;
	j = 1;
	while (i < argc - 1)
	{
		j = i + 1;
		while (j < argc - 1)
		{
			if (tab[i] == tab[j])
			{
				write(2, "Error\n", 6);
				exit(1);
			}
			j++;
		}
		i++;
	}
	checksorted(tab, argc);
}

void	pushswap(t_list **a, t_list **b, int argc, char **argv)
{
	if (argc == 1)
		exit(0);
	else if (argc == 2)
		exit(0);
	else if (argc == 3)
	{
		createstack1(a, argc, argv);
		sa(a);
	}
	else if (argc == 4)
	{
		createstack1(a, argc, argv);
		sort3(a);
	}
	else if (argc == 5)
	{
		createstack1(a, argc, argv);
		sort4(a, b);
	}
}

int	main(int argc, char *argv[])
{
	int		*tab;
	t_list	*a;
	t_list	*b;

	a = NULL;
	b = NULL;
	tab = createtab(argv, argc);
	checkerrors(tab, argc);
	pushswap(&a, &b, argc, argv);
	if (argc == 6)
	{
		createstack1(&a, argc, argv);
		sort5(&a, &b);
	}
	else if (argc > 6)
	{
		sorttab(tab, argc);
		createstack2(&a, argc, argv, tab);
		sortmany(&a, &b, argc);
	}
	else
		return (0);
}
