#include "push_swap.h"

void	ra(t_stack *a){
	if (!rotate(a))
		is_error();
	ft_printf("ra\n");
}

void	rb(t_stack *b){
	if (!rotate(b))
		is_error();
	ft_printf("rb\n");
}

void	rr(t_stack *a, t_stack *b){
	if (!rotate(a))
		is_error();
	if (!rotate(b))
		is_error();
	ft_printf("rr\n");
}