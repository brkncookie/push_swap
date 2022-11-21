/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnadir <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 09:57:50 by mnadir            #+#    #+#             */
/*   Updated: 2022/11/21 10:38:22 by mnadir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "../src/ft_printf/ft_printf.h"
# include <stdio.h>

t_list	*parassign(int argc, char **argv, size_t *sze);
void	so3rt(t_list **a);
void	so310rt(t_list **a, t_list	**b);
void	so10100rt(t_list **a, t_list	**b);

void	sa(t_list **a);
void	sb(t_list **b);
void	ss(t_list **a, t_list **b);
void	pa(t_list **b, t_list **a);
void	pb(t_list **a, t_list **b);

void	ra(t_list **a);
void	rb(t_list **b);
void	rr(t_list **b, t_list **a);

void	rra(t_list **a);
void	rrb(t_list **b);
void	rrr(t_list **b, t_list **a);

int		minmax(t_list *a, int i);
int		inx(t_list *a, int n);
void	sortb(t_list **b, t_list **a);
void	sorta(t_list **a);
int		*isort(t_list *a);
char	inf(t_list *a, int n, int *i);
#endif
