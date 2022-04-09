/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olakhdar <olakhdar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/19 18:36:29 by olakhdar          #+#    #+#             */
/*   Updated: 2022/04/08 21:16:41 by olakhdar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

typedef struct s_list
{
	int				var;
	struct s_list	*next;
}	t_list;

void	push(t_list **lst, int data);
void	pop(t_list **lst);
long	ft_atoi(const char *str);
t_list	*ft_lstnew(int var);
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstadd_back(t_list **lst, t_list *new);
void	sa(t_list **lst);
void	sb(t_list **b);
void	ss(t_list **a, t_list **b);
void	ra(t_list **a);
void	rb(t_list **b);
void	rr(t_list **a, t_list **b);
void	rra(t_list **a);
void	rrb(t_list **b);
void	rrr(t_list **a, t_list **b);
void	pb(t_list **a, t_list **b);
void	pa(t_list **a, t_list **b);
void	sort3(t_list **a);
void	sort4(t_list **a, t_list **b);
void	sort5(t_list **a, t_list **b);
void	createstack1(t_list **lst, int argc, char **argv);
void	createstack2(t_list **lst, int argc, char **argv, int *tab);
int		check_sort(t_list *a);
int		check(t_list **a);
int		ft_isalpha(char *s);
void	sorttab(int *tab, int size);
int		check_sort(t_list *a);
int		checktab(int *tab, int argc);
void	checksorted(int *tab, int argc);
void	sortmany(t_list **a, t_list **b, int argc);
int		*createtab(char **argv, int argc);
int		bitscount(int nb);
int		getindex(int *tab, int nb, int argc);
void	pushswap(t_list **a, t_list **b, int argc, char **argv);
void	sort4extra(t_list **a, t_list **b, int nb, int *i);

#endif