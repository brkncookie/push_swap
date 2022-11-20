/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnadir <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 14:46:44 by mnadir            #+#    #+#             */
/*   Updated: 2022/11/20 11:53:42 by mnadir           ###   ########.fr       */
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
	if (!a)
		return (ft_printf("Error\n"), 1);
	/* if (sze > 2 && sze < 11) */
	so310rt(&a, &b);
	ft_printf("Sorted:\n");
	while (a)
	{
		printf("%d\n", *(int *)(a->content));
		a = a->next;
	}
	return (0);
}
