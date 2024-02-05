#include "push_swap.h"

void	sort(t_stack *a, t_stack *b){
	//1바구니는 a의 아래
	//0바구니는 b의 위
	//정렬끝나면 b의 위를 전부 a로 옮겨줌.
	//자리수 끝날때까지 반복함.!
	//>>i로 비트연산을 하는데.. 언제까지 할 것인지!?
	//
	int	i;
	int	radix;
	int	size_a;
	t_stack_node	*first;

	i = 0;
	first = a->first;
	size_a = a->cnt;
	radix = 0;
	ft_printf("b : %d\n",b->first);
	while(i < size_a){
		if (((first->num) >> radix) & 1)
			{
				ra(a);}
		else{
			pb(a,b);
		}
		//radix가 자리의 마지막까지 sort하기
		//num은 순서대로 변경하기..
		//-도 고려를 해야하는데..?
		//long long으로 변경해서 변경하여야겠음
		//
		first = a->first;
		i++;
	}
}