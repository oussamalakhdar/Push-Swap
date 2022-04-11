/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olakhdar <olakhdar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/04 15:38:26 by olakhdar          #+#    #+#             */
/*   Updated: 2022/04/10 17:20:46 by olakhdar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

char	*corp(char *str)
{
	int	i;

	i = 0;
	while (str[i] && str[i] != '\n')
		i++;
	str[i] = '\0';
	return (str);
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return (0);
		i++;
	}
	return (1);
}

void	writeerror(void)
{
	write(2, "Error\n", 6);
	exit(1);
}

void	checker(t_list **a, t_list **b, char *s)
{
	if (ft_strcmp(s, "sa\n") == 1)
		sa(a);
	else if (ft_strcmp(s, "sb\n") == 1)
		sb(b);
	else if (ft_strcmp(s, "ss\n") == 1)
		ss(a, b);
	else if (ft_strcmp(s, "ra\n") == 1)
		ra(a);
	else if (ft_strcmp(s, "rb\n") == 1)
		rb(b);
	else if (ft_strcmp(s, "rr\n") == 1)
		rr(a, b);
	else if (ft_strcmp(s, "rra\n") == 1)
		rra(a);
	else if (ft_strcmp(s, "rrb\n") == 1)
		rrb(b);
	else if (ft_strcmp(s, "rrr\n") == 1)
		rrr(a, b);
	else if (ft_strcmp(s, "pa\n") == 1)
		pa(a, b);
	else if (ft_strcmp(s, "pb\n") == 1)
		pb(a, b);
	else
		writeerror();
}

int	main(int argc, char **argv)
{
	t_list	*a;
	t_list	*b;
	char	*s;

	a = NULL;
	b = NULL;
	if (argc == 1)
		exit(0);
	checkerrors(argv, argc);
	createstack(&a, argc, argv);
	s = get_next_line(0);
	while (s)
	{
		checker(&a, &b, s);
		free(s);
		s = get_next_line(0);
	}
	if ((check_sort(a) == 1) && !b)
		write(1, "OK\n", 3);
	else
		write(1, "KO\n", 3);
	return (0);
}
