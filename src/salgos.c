/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   salgos.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnadir <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 12:42:52 by mnadir            #+#    #+#             */
/*   Updated: 2022/11/19 16:41:24 by mnadir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../include/push_swap.h"

void	so3rt(t_list **a)
{
	int	k;
	int	e;
	int	n;

	k = *(int *)(*a)->content;
	e = *(int *)(*a)->next->content;
	n = *(int *)(*a)->next->next->content;
	if (k > e && k < n)
		sa(a);
	else if (k > e && e > n)
	{
		sa(a);
		rra(a);
	}
	else if (k > n && e < n)
		ra(a);
	else if (k < e && k < n)
	{
		sa(a);
		ra(a);
	}
	else if (k < e && k > n)
		rra(a);
}

void	so310rt(t_list **a, t_list	**b)
{
	int	n;

	while(ft_lstsize(*a) > 3)
	{
		n = min(*a);
		while(*(int *)((*a)->content) != n)
		{
			if(inx(*a, n) > ft_lstsize(*a))
				rra(a);
			else
				ra(a);
		}
		pb(a, b);
	}
	so3rt(a);
	while(!(*b))
		pa(b, a);
}
