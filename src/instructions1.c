/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions1.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnadir <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 11:46:57 by mnadir            #+#    #+#             */
/*   Updated: 2022/11/19 15:18:56 by mnadir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

void	ra(t_list **a)
{
	t_list	*last;

	if (!*a)
		return ;
	last = ft_lstlast(*a);
	last->next = *a;
	last = *a;
	*a = (*a)->next;
	last->next = NULL;
	ft_printf("%s\n", __func__);
}

void	rb(t_list **b)
{
	t_list	*last;

	if (!*b)
		return ;
	last = ft_lstlast(*b);
	last->next = *b;
	last = *b;
	*b = (*b)->next;
	last->next = NULL;
	ft_printf("%s\n", __func__);
}

void	rr(t_list **b, t_list **a)
{
	ra(a);
	rb(b);
	ft_printf("%s\n", __func__);
}
