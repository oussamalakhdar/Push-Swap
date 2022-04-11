/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olakhdar <olakhdar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/29 16:47:19 by olakhdar          #+#    #+#             */
/*   Updated: 2022/04/10 17:11:45 by olakhdar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	getindex(int *tab, int nb, int argc)
{
	int	i;

	i = 0;
	while (i < argc - 1)
	{
		if (tab[i] == nb)
			return (i);
		i++;
	}
	return (-1);
}

int	ft_ischar(char *s)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] == '-' || s[i] == '+')
			j++;
		if (j > 1)
		{
			write(2, "Error\n", 6);
			exit(1);
		}
		if (!(s[i] >= '0' && s[i] <= '9') && (s[i] != '-' && s[i] != '+'))
			return (1);
		i++;
	}
	return (0);
}

void	sorttab(int *tab, int argc)
{
	int	i;
	int	sort;

	i = 0;
	sort = 0;
	while (checktab(tab, argc) == 0)
	{
		i = 1;
		while (i < argc - 1)
		{
			if (tab[i - 1] > tab[i])
			{
				sort = tab[i - 1];
				tab[i - 1] = tab[i];
				tab[i] = sort;
			}
			i++;
		}
	}
}

int	checktab(int *tab, int argc)
{
	int	i;

	i = 0;
	while (i < argc - 2)
	{
		if (tab[i] > tab[i + 1])
			return (0);
		i++;
	}
	return (1);
}

void	checksorted(int *tab, int argc)
{
	if (checktab(tab, argc) == 1)
	{
		free(tab);
		exit(0);
	}
}
