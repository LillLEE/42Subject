/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: junholee <junholee@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/08/22 19:01:32 by junholee          #+#    #+#             */
/*   Updated: 2021/08/25 19:15:21 by junholee         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# define MAX_STACK_SIZE 100

# include <unistd.h>
# include <stdio.h>
# include <stdlib.h>

typedef struct Node
{
	int data;
	struct Node *prev;
	struct Node *next;
}Node;

typedef struct Stack
{
	int size;
	struct Node *top;
	struct Node *bottom;
}Stack;

//Node and Stack
int		isEmpty(Stack *stack);
Node	*initNode(int data);
void	initStack(Stack **stack);
void	push_Top(Stack *stack, int data);
void	push_Btm(Stack *stack ,int data);
void	pop_Top(Stack *stack);
void	pop_Btm(Stack *stack);
void	display(Stack *stack);
int		main(int argc, char **argv);
//Swap a,b
void 	swap_a(Stack *stack);
void 	swap_b(Stack *stack);
void 	swap(Stack **a);
void	swap_ss(Stack *stack_a, Stack *stack_b);
//Push a,b
void	push_a(Stack *stack_a, Stack *stack_b);
void	push_b(Stack *stack_a, Stack *stack_b);
//Rotate a,b
void	rotate_a(Stack *stack_a);
void	rotate_b(Stack *stack_b);
void	rotate_ab(Stack *stack_a, Stack *stack_b);

#endif