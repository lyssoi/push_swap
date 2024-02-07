/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: soljeong <soljeong@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/02 16:37:24 by soljeong          #+#    #+#             */
/*   Updated: 2024/02/07 20:23:42 by soljeong         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H
# include "libft/libft.h"

typedef struct s_stack_node
{
	int					num;
	size_t				idx;
	struct s_stack_node	*next;
	struct s_stack_node	*prev;
}	t_stack_node;

typedef struct s_stack
{
	size_t			cnt;
	t_stack_node	*first;
	t_stack_node	*last;
}	t_stack;

t_stack_node	*ft_deque_front(t_stack *stack);
t_stack_node	*ft_deque_back(t_stack *stack);
t_stack			*ft_stack_new(void);
t_stack_node	*ft_stack_new_node(int num);
void			ft_enque_front(t_stack *stack, t_stack_node *new);
void			ft_enque_back(t_stack *stack, t_stack_node *new);
void			is_error(void);
void			parse(t_stack *stack, int argc, char *argv[]);
long long		push_swap_atoi(const char *str);
void			stack_init(t_stack *stack, char **splited);
void			assign_idx(t_stack *stack);
int				push(t_stack *from, t_stack *to);
int				swap(t_stack *stack);
int				rotate(t_stack *stack);
int				reverse(t_stack *stack);
int				pa(t_stack *b, t_stack *a);
int				pb(t_stack *a, t_stack *b);
int				sa(t_stack *a);
int				sb(t_stack *b);
int				ss(t_stack *a, t_stack *b);
int				ra(t_stack *a);
int				rb(t_stack *b);
int				rr(t_stack *a, t_stack *b);
int				rra(t_stack *a);
int				rrb(t_stack *b);
int				rrr(t_stack *a, t_stack *b);
void			sort(t_stack *a, t_stack *b);
void			sort_check(t_stack *stack);
int				search_max(t_stack *stack);
int				search_digit(t_stack *stack);
void			simple_sort(t_stack *stack);
#endif