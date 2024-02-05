/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soljeong <soljeong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 16:37:24 by soljeong          #+#    #+#             */
/*   Updated: 2024/02/05 11:23:11 by soljeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
#include "libft/libft.h"
#include <stdio.h>

typedef struct s_stack_node
{
	int					num;
	//int					idx;
	struct s_stack_node	*next;
	struct s_stack_node	*prev;
}	t_stack_node;

typedef struct s_stack
{
	//int				cnt;
	t_stack_node	*first;
	t_stack_node	*last;
}	t_stack;

void	ft_stackiter(t_stack_node *node, void (*f)(void *));
void	ft_stackadd_front(t_stack **stack, t_stack_node *new);
void	ft_stackadd_back(t_stack **stack, t_stack_node *new);
t_stack_node	*ft_deque_front(t_stack *stack);
t_stack_node	*ft_deque_back(t_stack *stack);
t_stack		*ft_stack_new(void);
t_stack_node	*ft_stack_new_node(int num);
void	is_error();
void	parse(t_stack **stack, int argc, char *argv[]);

#endif

