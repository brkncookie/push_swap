/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   checker.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnadir <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/27 15:51:41 by mnadir            #+#    #+#             */
/*   Updated: 2022/11/28 13:52:27 by mnadir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "checker.h"

char	*gnl(char **s, char *line)
{
	if (!line)
		return (NULL);
	return (*s = line, line);
}

void	exc(char *s, t_list **a, t_list **b)
{
	if (!ft_strncmp(s, "sa\n", 3))
		sa(a);
	else if (!ft_strncmp(s, "sb\n", 3))
		sb(b);
	else if (!ft_strncmp(s, "ss\n", 3))
		ss(a, b);
	else if (!ft_strncmp(s, "pa\n", 3))
		pa(b, a);
	else if (!ft_strncmp(s, "pb\n", 3))
		pb(a, b);
	else if (!ft_strncmp(s, "ra\n", 3))
		ra(a);
	else if (!ft_strncmp(s, "rb\n", 3))
		rb(b);
	else if (!ft_strncmp(s, "rr\n", 3))
		rr(b, a);
	else if (!ft_strncmp(s, "rra\n", 4))
		rra(a);
	else if (!ft_strncmp(s, "rrb\n", 4))
		rrb(b);
	else if (!ft_strncmp(s, "rrr\n", 4))
		rrr(b, a);
	else
		return (ft_printf("Error\n"), exit(0));
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
	while (gnl(&ist, get_next_line(0)))
		exc(ist, &a, &b);
	if (sorted(a) && !b)
		return (ft_printf("OK\n"), 0);
	else
		return (ft_printf("KO\n"), 1);
}
