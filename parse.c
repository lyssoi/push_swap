#include "push_swap.h"
long long	push_swap_atoi(const char *str);

void	parse(t_stack *stack, int argc, char *argv[]){
	int	idx;
	char	**splited;

	idx = 1;
	while (idx < argc){
		splited = ft_split(argv[idx], ' ');
		stack_init(stack,splited);
		free(splited);
		idx++;
	}
}

void	dup_check(t_stack_node *node, int num){
	if (!node)
		return ;
	while (node){
		if (node->num == num)
			is_error();
		node = node->next;
	}
}

void	stack_init(t_stack *stack, char **splited){
	t_stack_node	*node;
	int				idx;
	int		num;

	idx = 0;
	if (splited[idx] == 0)
		is_error();
	while(splited[idx]){
		num = push_swap_atoi(splited[idx]);
		free(splited[idx]);
		dup_check(stack->first, num);
		node = ft_stack_new_node(num);
		ft_enque_back(stack, node);
		idx++;
	}
}

void	is_error(){
	ft_printf("Error\n");
	exit(0);
}