/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soljeong <soljeong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 16:38:07 by soljeong          #+#    #+#             */
/*   Updated: 2024/02/02 19:47:54 by soljeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"
#include <stdio.h>

void check_leak(void){
	system("leaks push_swap");
}

int main(int argc, char *argv[]){
	t_stack		*stack_a;

	if (argc < 2)
		exit(-1);
	atexit(check_leak);
	stack_a = ft_stack_new();
	parse(&stack_a,argc,argv);
	t_stack_node	*node;
	node = stack_a->first;
	while(node){
		printf("%d", node->num);
		node = node -> next;
	}
	node = stack_a->last;
	node = ft_deque_back(stack_a);
	node = ft_deque_back(stack_a);
	while(node){
		printf("%d", node->num);
		node = node -> prev;
	}
	exit(0);
	return (0);
}

t_stack		*ft_stack_new(void){
	t_stack	*stack;

	stack = (t_stack*)malloc(sizeof(t_stack));
	if (!stack)
		return (0);
	stack->first = 0;
	stack->last = 0;
	return (stack);
}

// void	ft_stackiter(t_stack_node *node, void (*f)(void *)){
// 	if(!node)
// 		return ;
// 	while (node)
// 	{
// 		f(node->num);
// 		node = node -> next;
// 	}
	
// }