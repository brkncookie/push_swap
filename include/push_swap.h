/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnadir <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 09:57:50 by mnadir            #+#    #+#             */
/*   Updated: 2022/11/19 14:02:43 by mnadir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "../src/ft_printf/ft_printf.h"
# include <stdio.h>

t_list	*parassign(int argc, char **argv, size_t *sze);
void	so3rt(t_list **a);

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
#endif
