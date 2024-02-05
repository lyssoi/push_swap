/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soljeong <soljeong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 16:37:24 by soljeong          #+#    #+#             */
/*   Updated: 2024/02/05 19:36:49 by soljeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
#include "libft/libft.h"

typedef struct s_stack_node
{
	int					num;
	//int					idx;
	struct s_stack_node	*next;
	struct s_stack_node	*prev;
}	t_stack_node;

typedef struct s_stack
{
	int				cnt;
	t_stack_node	*first;
	t_stack_node	*last;
}	t_stack;

void	ft_enque_front(t_stack *stack, t_stack_node *new);
void	ft_enque_back(t_stack *stack, t_stack_node *new);
t_stack_node	*ft_deque_front(t_stack *stack);
t_stack_node	*ft_deque_back(t_stack *stack);
t_stack		*ft_stack_new(void);
t_stack_node	*ft_stack_new_node(int num);
void	is_error();
void	parse(t_stack *stack, int argc, char *argv[]);
long long	push_swap_atoi(const char *str);
void	stack_init(t_stack *stack, char **splited);
int	push(t_stack *from, t_stack *to);
int	swap(t_stack *stack);
int	rotate(t_stack *stack);
int	reverse(t_stack *stack);
void	pa(t_stack *b, t_stack *a);
void	pb(t_stack *a, t_stack *b);
void	sa(t_stack *a);
void	sb(t_stack *b);
void	ss(t_stack *a, t_stack *b);
void	ra(t_stack *a);
void	rb(t_stack *b);
void	rr(t_stack *a, t_stack *b);
void	rra(t_stack *a);
void	rrb(t_stack *b);
void	rrr(t_stack *a, t_stack *b);
void	sort(t_stack *a, t_stack *b);
#endif

