/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checksort.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olakhdar <olakhdar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 21:31:47 by olakhdar          #+#    #+#             */
/*   Updated: 2022/04/08 21:48:05 by olakhdar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

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
