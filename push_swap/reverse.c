/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reverse.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junholee <junholee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/25 20:14:46 by junholee          #+#    #+#             */
/*   Updated: 2021/08/25 20:19:26 by junholee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	reverse_a(Stack *stack_a)
{
	int bottom_data;

	if (stack_a->size > 1)
	{
		bottom_data = stack_a->bottom->data;
		pop_Btm(stack_a);
		push_Top(stack_a,bottom_data);
	}
}
void	reverse_b(Stack *stack_b)
{
	int bottom_data;

	if (stack_b->size > 1)
	{
		bottom_data = stack_b->bottom->data;
		pop_Btm(stack_b);
		push_Top(stack_b,bottom_data);
	}
}
void	reverse_ab(Stack *stack_a, Stack *stack_b)
{
	reverse_a(stack_a);
	reverse_b(stack_b);
}