/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   salgos.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnadir <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 16:18:12 by mnadir            #+#    #+#             */
/*   Updated: 2022/11/28 16:37:26 by mnadir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../include/push_swap.h"

void	so3rt(t_list **a)
{
	int	k;
	int	e;
	int	n;

	if (ft_lstsize(*a) != 3)
		return ;
	k = *(int *)(*a)->content;
	e = *(int *)(*a)->next->content;
	n = *(int *)(*a)->next->next->content;
	if (k > e && k < n && e < n)
		sa(a);
	else if (k > e && e > n && k > n)
	{
		sa(a);
		rra(a);
	}
	else if (k > n && e < n && k > e)
		ra(a);
	else if (k < e && e > n && k < n)
	{
		sa(a);
		ra(a);
	}
	else if (k < e && k > n && e > n)
		rra(a);
}

void	so310rt(t_list **a, t_list	**b)
{
	int	n;
	int	i;

	i = 0;
	if (ft_lstsize(*a) == 2 && (*(int *)((*a)->content) \
			> *(int *)((*a)->next->content)))
		return (sa(a));
	while (ft_lstsize(*a) > 3)
	{
		n = minmax(*a, 0);
		while (*(int *)((*a)->content) != n)
		{
			if (ix(*a, n) > (ft_lstsize(*a) / 2))
				rra(a);
			else
				ra(a);
		}
		pb(a, b);
		i++;
	}
	so3rt(a);
	while (i--)
		pa(b, a);
}

void	so10100rt(t_list **a, t_list **b, int sze, int *i)
{
	int	n;
	int	h;

	h = 1;
	while (h < 4 && i)
	{
		while (inf(*a, i[(sze / 4) * h], &n) == 'y')
		{
			while (*(int *)(*a)->content != n && ix(*a, n) > ft_lstsize(*a) / 2)
				rra(a);
			while (*(int *)((*a)->content) != n)
				ra(a);
			pb(a, b);
			if (idx(i, n, sze) > ((sze / 4) * h - (sze / 4)) + (sze / 8))
			{
				if (inf(*a, i[(sze / 4) * h], &n) == 'y' && *(int *) \
					((*a)->content) != n && ix(*a, n) < (ft_lstsize(*a) / 2))
					rr(b, a);
				else
					rb(b);
			}
		}
		h++;
	}
	return (sorta(a, b, i), sortb(b, a, i), free(i));
}

void	so500rt(t_list **a, t_list **b, int sze, int *i)
{
	int	n;
	int	h;

	h = 1;
	while (h < 10 && i)
	{
		while (inf(*a, i[(sze / 9) * h], &n) == 'y')
		{
			while (*(int *)(*a)->content != n && ix(*a, n) > ft_lstsize(*a) / 2)
				rra(a);
			while (*(int *)((*a)->content) != n)
				ra(a);
			pb(a, b);
			if (idx(i, n, sze) > ((sze / 9) * h - (sze / 9)) + (sze / 18))
			{
				if (inf(*a, i[(sze / 9) * h], &n) == 'y' && *(int *) \
					((*a)->content) != n && ix(*a, n) < (ft_lstsize(*a) / 2))
					rr(b, a);
				else
					rb(b);
			}
		}
		h++;
	}
	return (so310rt(a, b), sortb(b, a, i), free(i));
}
