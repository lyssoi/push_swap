/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   smallcase.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soljeong <soljeong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/07 19:41:42 by soljeong          #+#    #+#             */
/*   Updated: 2024/02/07 20:22:42 by soljeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
// n = 3인경우. 하드코딩?!

void	simple_sort(t_stack *stack){
	int result;

	result = stack->first->next->idx - stack->first->idx;
	if (result == 2 || result == -1)
	{
		sa(stack);
		if (stack->cnt == 2)
			return ;
	}
	if (stack->first->idx == 1)
		return ;
	if (stack->first->idx == 2)
		rra(stack);
	if (stack->first->idx == 3)
		ra(stack);
}