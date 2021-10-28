/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_ab.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junholee <junholee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 04:03:12 by junholee          #+#    #+#             */
/*   Updated: 2021/08/25 20:37:30 by junholee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//stack_a 의 top을 stack_b로 push
void push_b(Stack *stack_a, Stack *stack_b)
{
	int	data;

	if (stack_a->size != 0)
	{
		data = stack_a->top->data;
		push_Top(stack_b,data);
		pop_Top(stack_a);
	}
}

void push_a(Stack *stack_a, Stack *stack_b)
{
	int data;
	int stack_size;
	
	if (stack_b->size != 0)
	{
		data = stack_b->top->data;
		push_Top(stack_a,data);
		pop_Top(stack_b);
	}
}