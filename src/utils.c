/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnadir <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 10:39:12 by mnadir            #+#    #+#             */
/*   Updated: 2022/11/28 16:11:51 by mnadir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../include/push_swap.h"

int	minmax(t_list *a, int i)
{
	int	m;

	if (a)
		m = *(int *)(a->content);
	while (a)
	{
		if (i)
		{
			if (*(int *)(a->content) > m)
				m = *(int *)(a->content);
		}
		else if (*(int *)(a->content) < m)
			m = *(int *)(a->content);
		a = a->next;
	}
	return (m);
}

int	ix(t_list *a, int n)
{
	int	i;

	i = 1;
	while (a && *(int *)(a->content) != n && ++i)
		a = a->next;
	return (i);
}

void	swp(int *x, int *y)
{
	int	tmp;

	tmp = *x;
	*x = *y;
	*y = tmp;
}

int	*isort(t_list *a, int l)
{
	int	*i;
	int	inx;
	int	idx;

	l = ft_lstsize(a);
	i = ft_calloc(l, sizeof(*i));
	inx = 0;
	while (i && a)
	{
		i[inx++] = *(int *)(a->content);
		a = a->next;
	}
	inx = 0;
	while (i && inx < l - 1)
	{
		idx = 0;
		while (idx < l - inx - 1)
		{
			if (i[idx] > i[idx + 1])
				swp(&i[idx], &i[idx + 1]);
			idx++;
		}
		inx++;
	}
	return (i);
}

char	inf(t_list *a, int n, int *i)
{
	while (a)
	{
		if (*(int *)(a->content) <= n)
			return (*i = *(int *)(a->content), 'y');
		a = a->next;
	}
	return ('n');
}
