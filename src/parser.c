/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parser.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnadir <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 12:27:23 by mnadir            #+#    #+#             */
/*   Updated: 2022/11/26 16:23:08 by mnadir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

int	is_vint(char *s)
{
	size_t	len;
	int		sgn;

	sgn = 1;
	len = 0;
	while (ft_isspace(*s))
		s++;
	if (*s == '-' || *s == '+')
	{
		if (*(s++) == '-')
			sgn *= -1;
	}
	while (*s == '0')
		s++;
	while (ft_isdigit(s[len]))
		len++;
	if (len > 10 || s[len] != 0)
		return (0);
	if (len == 10)
	{
		if ((sgn == 1 && ft_strncmp(s, "2147483648", 10) >= 0) \
			|| (sgn == -1 && ft_strncmp(s, "2147483649", 10) >= 0))
			return (0);
	}
	return (1);
}

int	is_ndup(t_list *a, int i)
{	
	while (a)
	{
		if (*(int *)(a->content) == i)
			return (0);
		a = a->next;
	}
	return (1);
}

char	**farr(size_t idx, char **arr, t_list **a, int *num)
{
	char	**tmp;
	char	**tmp1;
	t_list	*t;

	tmp1 = arr;
	if (!arr || (arr[idx] && (!is_vint(arr[idx]) || \
					!is_ndup(*a, ft_atoi(arr[idx])))) || !num)
	{
		tmp1 = (char **)0x69;
		while (*a)
		{
			free((*a)->content);
			t = *a;
			*a = (*a)->next;
			free(t);
		}
	}
	if (arr)
	{
		tmp = arr;
		while (*tmp)
			free(*(tmp++));
		free(arr);
	}
	return (tmp1);
}

t_list	*parassign(int argc, char **argv, size_t *sze)
{
	int		inx;
	size_t	idx;
	char	**arr;
	int		*num;
	t_list	*a;

	a = NULL;
	inx = 1;
	while (inx < argc && arr != (char **)0x69)
	{
		arr = ft_split(argv[inx], ' ');
		idx = 0;
		while (arr && arr[idx] && is_vint(arr[idx]) && \
				is_ndup(a, ft_atoi(arr[idx])) && ++(*sze))
		{
			num = ft_calloc(1, sizeof(*num));
			if (!num && farr(idx, arr, &a, num))
				return (a);
			*num = ft_atoi(arr[idx++]);
			ft_lstadd_back(&a, ft_lstnew(num));
		}
		arr = farr(idx, arr, &a, num);
		inx++;
	}
	return (a);
}
