/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soljeong <soljeong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 16:38:07 by soljeong          #+#    #+#             */
/*   Updated: 2024/02/07 19:56:57 by soljeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

// void check_leak(void){
// 	system("leaks push_swap");
// }

int	main(int argc, char *argv[])
{
	t_stack		*stack_a;
	t_stack		*stack_b;

	if (argc < 2)
		exit(0);
	stack_a = ft_stack_new();
	stack_b = ft_stack_new();
	parse(stack_a, argc, argv);
	sort(stack_a, stack_b);
	exit(0);
	return (0);
}

t_stack	*ft_stack_new(void)
{
	t_stack	*stack;

	stack = (t_stack *)malloc(sizeof(t_stack));
	if (!stack)
		return (0);
	stack->first = 0;
	stack->last = 0;
	stack->cnt = 0;
	return (stack);
}

void	is_error(void)
{
	ft_printf("Error\n");
	exit(0);
}
