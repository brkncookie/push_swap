/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnadir <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 15:52:33 by mnadir            #+#    #+#             */
/*   Updated: 2022/11/21 14:48:19 by mnadir           ###   ########.fr       */
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
	int		n;
	t_list	*tmp;
	t_list	*tmp1;

	tmp = *a;
	tmp1 = NULL;
	while (tmp)
	{
		n = minmax(tmp, 0);
		while (*(int *)(tmp->content) != n)
		{
			if (inx(tmp, n) > (ft_lstsize(tmp) / 2))
				rra(&tmp);
			else
				ra(&tmp);
		}
		if (!tmp1)
		{
			tmp1 = tmp;
			*a = tmp;
		}
		else
		{
			tmp1->next = tmp;
			tmp1 = tmp1->next;
		}
		tmp = tmp->next;
	}
}
