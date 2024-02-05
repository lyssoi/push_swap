#include "push_swap.h"

void	rra(t_stack *a){
	if (!reverse(a))
		is_error();
	ft_printf("rra\n");
}

void	rrb(t_stack *b){
	if (!reverse(b))
		is_error();
	ft_printf("rrb\n");
}

void	rrr(t_stack *a, t_stack *b){
	if (!reverse(a))
		is_error();
	if (!reverse(b))
		is_error();
	ft_printf("rrr\n");
}