/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soljeong <soljeong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 19:25:38 by soljeong          #+#    #+#             */
/*   Updated: 2024/02/07 19:27:56 by soljeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	sort(t_stack *a, t_stack *b)
{
	size_t		i;
	size_t		size_a;
	int			radix;
	int			maxdigit;

	i = 0;
	size_a = a->cnt;
	radix = 0;
	maxdigit = search_digit(a);
	while (radix <= maxdigit)
	{
		i = 0;
		while (i < size_a)
		{
			if (((a->first->idx) >> radix) & 1)
				ra(a);
			else
				pb(a, b);
			i++;
		}
		while (pa(b, a))
			;
		radix++;
	}
}

int	search_digit(t_stack *stack)
{
	int	digit;
	int	max;

	digit = 1;
	max = search_max(stack);
	while (max > 0)
	{
		max /= 2;
		digit++;
	}
	return (digit);
}

int	search_max(t_stack *stack)
{
	size_t			max;
	t_stack_node	*curr;

	curr = stack->first;
	max = curr->idx;
	while (curr)
	{
		if (max < curr->idx)
			max = curr->idx;
		curr = curr->next;
	}
	return (max);
}
