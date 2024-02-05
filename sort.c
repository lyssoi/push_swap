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

//그냥 while문으로 돌면서
//그 전에 있던것 중 현재 노드보다 큰것은 +1하고,
// 작은 것은 냅둠.
// 그중에서 현재노드의 위치를 찾으려면...
/// 1 3 7 6 2 8 4   일때 5가 들어간다면
//  1 3 6 5 2 7 4 일것임 여기서 5가 들어간다면
//  1 3 7 6
// 이때 6을 저장을 하는데, 여기서 6이되면 다시 5로 저장 (6을 뺏겼으니..)
// 이런식으로 하면..