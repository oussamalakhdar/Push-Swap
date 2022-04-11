/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olakhdar <olakhdar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 20:48:44 by olakhdar          #+#    #+#             */
/*   Updated: 2022/04/10 22:01:28 by olakhdar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

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

int	check_sort(t_list *a)
{
	if (!a)
		return (0);
	while (a->next)
	{
		if (a->var > a->next->var)
			return (0);
		a = a->next;
	}
	return (1);
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

void	createstack(t_list **lst, int argc, char **argv)
{
	int	i;

	i = argc - 1;
	while (i > 0)
	{
		if (ft_ischar(argv[i]) == 1)
		{
			write(2, "Error\n", 6);
			exit(1);
		}
		push(lst, ft_atoi(argv[i]));
		i--;
	}
}
