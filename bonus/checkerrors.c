/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checkerrors.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olakhdar <olakhdar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 21:31:47 by olakhdar          #+#    #+#             */
/*   Updated: 2022/04/10 21:06:36 by olakhdar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	checkerrors(char **argv, int argc)
{
	int	i;
	int	j;
	int	*tab;

	i = 0;
	j = 1;
	tab = createtab(argv, argc);
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
	free(tab);
}
