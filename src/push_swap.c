/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnadir <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 14:46:44 by mnadir            #+#    #+#             */
/*   Updated: 2022/11/21 14:19:18 by mnadir           ###   ########.fr       */
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
	if (sze > 2 && sze < 11)
		so310rt(&a, &b);
	else if (sze > 10 && sze < 101)
		so10100rt(&a, &b);
	/* ft_printf("Sorted:\n"); */
	/* ft_printf("Stack A:\n"); */
	/* while (a) */
	/* { */
	/* 	ft_printf("%d\n", *(int *)(a->content)); */
	/* 	a = a->next; */
	/* } */
	/* ft_printf("Stack B:\n"); */
	/* while (b) */
	/* { */
	/* 	printf("%d\n", *(int *)(b->content)); */
	/* 	b = b->next; */
	/* } */
	return (0);
}
