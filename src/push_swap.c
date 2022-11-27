/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnadir <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 14:46:44 by mnadir            #+#    #+#             */
/*   Updated: 2022/11/27 11:14:47 by mnadir           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../include/push_swap.h"
#include <stdio.h>

int	main(int argc, char **argv)
{
	t_list	*a;
	t_list	*b;
	size_t	sze;

	sze = 0;
	b = NULL;
	a = parassign(argc, argv, &sze);
	if (argc == 1 || (a && sorted(a)))
		return (0);
	if (!a)
		return (ft_printf("Error\n"), 1);
	if (sze > 1 && sze < 11)
		so310rt(&a, &b);
	else if (sze > 10 && sze < 101)
		so10100rt(&a, &b, sze);
	else if (sze > 100 && sze < 501)
		so500rt(&a, &b, sze);
	while (a)
	{
		b = a;
		a = a->next;
		free(b->content);
		free(b);
	}
	return (b = NULL, 0);
}
