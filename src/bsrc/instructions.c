/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnadir <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 09:55:14 by mnadir            #+#    #+#             */
/*   Updated: 2022/11/28 11:51:33 by mnadir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

void	sa(t_list **a)
{
	t_list	*tmp;

	if (!*a || !(*a)->next)
		return ;
	tmp = (*a)->next;
	(*a)->next = (*a)->next->next;
	tmp->next = *a;
	*a = tmp;
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
}

void	ss(t_list **a, t_list **b)
{
	sa(a);
	sb(b);
}

void	pa(t_list **b, t_list **a)
{
	t_list	*tmp;

	if (!*b)
		return ;
	tmp = (*b)->next;
	ft_lstadd_front(a, *b);
	*b = tmp;
}

void	pb(t_list **a, t_list **b)
{
	t_list	*tmp;

	if (!*a)
		return ;
	tmp = (*a)->next;
	ft_lstadd_front(b, *a);
	*a = tmp;
}
