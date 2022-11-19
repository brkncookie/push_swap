/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnadir <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 09:55:14 by mnadir            #+#    #+#             */
/*   Updated: 2022/11/19 15:18:34 by mnadir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	sa(t_list **a)
{
	t_list	*tmp;

	if (!*a || !(*a)->next)
		return ;
	tmp = (*a)->next;
	(*a)->next = (*a)->next->next;
	tmp->next = *a;
	*a = tmp;
	ft_printf("%s\n", __func__);
}

void	sb(t_list **b)
{
	t_list	*tmp;

	if (!*b || !(*b)->next)
		return ;
	tmp = (*b)->next;
	(*b)->next = (*b)->next->next;
	tmp->next = *b;
	*b = tmp;
	ft_printf("%s\n", __func__);
}

void	ss(t_list **a, t_list **b)
{
	sa(a);
	sb(b);
	ft_printf("%s\n", __func__);
}

void	pa(t_list **b, t_list **a)
{
	t_list	*tmp;

	if (!*b)
		return ;
	tmp = (*b)->next;
	ft_lstadd_front(a, *b);
	*b = tmp;
	ft_printf("%s\n", __func__);
}

void	pb(t_list **a, t_list **b)
{
	t_list	*tmp;

	if (!*a)
		return ;
	tmp = (*a)->next;
	ft_lstadd_front(b, *a);
	*a = tmp;
	ft_printf("%s\n", __func__);
}
