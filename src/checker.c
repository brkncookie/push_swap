/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnadir <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 15:51:41 by mnadir            #+#    #+#             */
/*   Updated: 2022/11/27 16:05:33 by mnadir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/push_swap.h"

char	*gnl(char *s, char *line)
{
	if (!line)
		return (NULL);
	return (s = line, line);
}

void	exc(char *s, t_list **a, t_list **b)
{
	if(!ft_strncmp(s, "sa\n", 3))
		sa(a);
	else if(!ft_strncmp(s, "sb\n", 3))
		sb(b);
	else if(!ft_strncmp(s, "ss\n", 3))
		ss(a, b);
	else if(!ft_strncmp(s, "pa\n", 3))
		pa(b, a);
	else if(!ft_strncmp(s, "pb\n", 3))
		pb(a, b);
	else if(!ft_strncmp(s, "pb\n", 3))
		pb(a, b);
}

int	main(int argc, char **argv)
{
	t_list	*a;
	t_list	*b;
	char	*ist;
	size_t	sze;

	sze = 0;
	b = NULL;
	if (argc == 1)
		return (0);
	a = parassign(argc, argv, &sze);
	if (!a)
		return (ft_printf("Error\n"), 1);
	if (sorted(a) && !b)
		return (ft_printf("OK\n"), 0);
	else
		return (ft_printf("KO\n"), 1);
}
