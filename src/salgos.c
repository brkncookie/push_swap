/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   salgos.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnadir <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/19 12:42:52 by mnadir            #+#    #+#             */
/*   Updated: 2022/11/20 16:17:10 by mnadir           ###   ########.fr       */
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
	else if (k < e && e > n && k < n)
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

	while (ft_lstsize(*a) > 3)
	{
		n = minmax(*a, 0);
		while (*(int *)((*a)->content) != n)
		{
			if (inx(*a, n) > (ft_lstsize(*a) / 2))
				rra(a);
			else
				ra(a);
		}
		pb(a, b);
	}
	so3rt(a);
	while (*b)
		pa(b, a);
}

void	so10100rt(t_list **a, t_list **b)
{
	int	*i;
	int	n;
	int c;
	int o;
	int h;
	
	i = isort(*a);
	o = ft_lstsize(*a) / 4;
	h = 1;
	while(h < 4 && i)
	{
		c = 1;
		o *= h;
		while(c <= o)
		{
			n = inf(*a, i[o]);
			while (*(int *)((*a)->content) != n)
			{
				if (inx(*a, n) > (ft_lstsize(*a) / 2))
					rra(a);
				else
					ra(a);
			}
			pb(a, b);
			c++;
		}
		h++;
	}
	if(i)
		sorta(a);
	sortb(b, a);
}
