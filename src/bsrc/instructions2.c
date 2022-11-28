/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions2.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnadir <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 12:49:28 by mnadir            #+#    #+#             */
/*   Updated: 2022/11/28 11:52:37 by mnadir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "checker.h"

void	rra(t_list **a)
{
	t_list	*last;
	t_list	*blast;
	int		sze;

	if (!*a)
		return ;
	sze = ft_lstsize(*a) - 1;
	if (sze == 0)
		return ;
	last = ft_lstlast(*a);
	blast = *a;
	while (--sze)
		blast = blast->next;
	last->next = *a;
	*a = last;
	blast->next = NULL;
}

void	rrb(t_list **b)
{
	t_list	*last;
	t_list	*blast;
	int		sze;

	if (!*b)
		return ;
	sze = ft_lstsize(*b) - 1;
	if (sze == 0)
		return ;
	last = ft_lstlast(*b);
	blast = *b;
	while (--sze)
		blast = blast->next;
	last->next = *b;
	*b = last;
	blast->next = NULL;
}

void	rrr(t_list **b, t_list **a)
{
	rra(a);
	rrb(b);
}
