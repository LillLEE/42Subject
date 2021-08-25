/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_ab.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junholee <junholee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 04:03:12 by junholee          #+#    #+#             */
/*   Updated: 2021/08/25 19:13:05 by junholee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

//stack_a 의 top을 stack_b로 push
void push_b(Stack *stack_a, Stack *stack_b)
{
	int	data;

	if (stack_a->size == 0)
		return ;
	else
	{
		data = stack_a->top->data;
		pop_Top(stack_a);
		push_Top(stack_b,data);
	}
}

void push_a(Stack *stack_a, Stack *stack_b)
{
	int data;

	if (stack_b->size == 0)
		return ;
	else
	{
		data = stack_b->top->data;
		pop_Top(stack_b);
		push_Top(stack_a,data);
	}
}