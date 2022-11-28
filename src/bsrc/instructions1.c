/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   instructions1.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnadir <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/16 11:46:57 by mnadir            #+#    #+#             */
/*   Updated: 2022/11/28 11:52:11 by mnadir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

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
}

void	rr(t_list **b, t_list **a)
{
	rb(b);
	ra(a);
}
