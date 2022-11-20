/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnadir <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 15:52:33 by mnadir            #+#    #+#             */
/*   Updated: 2022/11/20 16:25:15 by mnadir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../include/push_swap.h"

void	sortb(t_list **b, t_list **a)
{
	int	n;

	while (*b)
	{
		n = minmax(*b, 1);
		while (*(int *)((*b)->content) != n)
		{
			if (inx(*b, n) > (ft_lstsize(*b) / 2))
				rrb(b);
			else
				rb(b);
		}
		pa(b, a);
	}
}

void	sorta(t_list **a)
{
	int	n;

	while (*a)
	{
		n = minmax(*a, 0);
		while (*(int *)((*a)->content) != n)
		{
			if (inx(*a, n) > (ft_lstsize(*a) / 2))
				rra(a);
			else
				ra(a);
		}
	}
}
