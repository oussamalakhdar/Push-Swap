/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: olakhdar <olakhdar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/05 20:43:48 by olakhdar          #+#    #+#             */
/*   Updated: 2022/04/10 17:02:58 by olakhdar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHECKER_H
# define CHECKER_H

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>
# define BUFFER_SIZE 1

typedef struct s_list
{
	int				var;
	struct s_list	*next;
}	t_list;

t_list	*ft_lstnew(int var);
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstadd_back(t_list **lst, t_list *new);
int		ft_lstsize(t_list **lst);
void	push(t_list **lst, int data);
void	pop(t_list **lst);
void	sa(t_list **a);
void	sb(t_list **b);
void	ss(t_list **a, t_list **b);
void	ra(t_list **a);
void	rb(t_list **b);
void	rr(t_list **a, t_list **b);
void	rra(t_list **a);
void	rrb(t_list **b);
void	rrr(t_list **a, t_list **b);
void	pa(t_list **a, t_list **b);
void	pb(t_list **a, t_list **b);
int		ft_strcmp(char *s1, char *s2);
char	*corp(char *str);
long	ft_atoi(const char *str);
void	createstack(t_list **lst, int argc, char **argv);
int		ft_ischar(char *s);
char	*get_next_line(int fd);
char	*ft_substr(char *s, int start, int len);
char	*ft_strjoin(char *s1, char *s2);
char	*ft_strdup(char *s1);
int		ft_strlen(char *str);
int		ft_strchr(char *s, char c);
int		check_sort(t_list *a);
void	checker(t_list **a, t_list **b, char *s);
int		*createtab(char **argv, int argc);
void	checkerrors(char **argv, int argc);

#endif