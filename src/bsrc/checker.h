/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnadir <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 11:48:33 by mnadir            #+#    #+#             */
/*   Updated: 2022/11/28 12:02:37 by mnadir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef CHECKER_H
# define CHECKER_H
# include "../../src/ft_printf/ft_printf.h"
# include "get_next_line.h"

t_list	*parassign(int argc, char **argv, size_t *sze);

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

int		sorted(t_list *a);
#endif
