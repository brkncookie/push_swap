/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnadir <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 12:49:28 by mnadir            #+#    #+#             */
/*   Updated: 2022/11/19 15:19:13 by mnadir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../include/push_swap.h"

void	rra(t_list **a)
{
	t_list	*last;
	t_list	*blast;
	int		sze;

	if (!*a)
		return ;
	sze = ft_lstsize(*a) - 1;
	last = ft_lstlast(*a);
	blast = *a;
	while (--sze)
		blast = blast->next;
	last->next = *a;
	*a = last;
	blast->next = NULL;
	ft_printf("%s\n", __func__);
}

void	rrb(t_list **b)
{
	t_list	*last;
	t_list	*blast;
	int		sze;

	if (!*b)
		return ;
	sze = ft_lstsize(*b) - 1;
	last = ft_lstlast(*b);
	blast = *b;
	while (--sze)
		blast = blast->next;
	last->next = *b;
	*b = last;
	blast->next = NULL;
	ft_printf("%s\n", __func__);
}

void	rrr(t_list **b, t_list **a)
{
	rra(a);
	rrb(b);
	ft_printf("%s\n", __func__);
}
