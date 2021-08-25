#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
	int data;
	struct Node *prev;
	struct Node *next;
} Node;

typedef struct Stack
{
	struct Node *top;
	struct Node *bottom;
	int size;
}Stack;

void initStack(Stack **stack)
{
	(*stack) = (Stack *)malloc(sizeof(Stack));
	(*stack)->bottom = NULL;
	(*stack)->top = NULL;
	(*stack)->size = 0;
}
int isEmpty(Stack *stack)
{
	if (stack->top == NULL)
		return (0);
	return (1);
}

Node *create_node(int data)
{
	Node *newNode = (Node *)malloc(sizeof(Node));

	if (newNode == NULL)
		return (NULL);
	newNode->data = data;
	newNode->prev = NULL;
	newNode->next = NULL;
	return (newNode);
}

void display(Stack *stack)
{
	Node *current;

	current = stack->top;
	while (current != NULL)
	{
		printf("%d ", current->data);
		current = current->next;
	}
	printf("\n");
}

void push_Top(Stack *stack,int data)
{
	Node *newNode = create_node(data);

	if (isEmpty(stack) == 0)
		stack->top = stack->bottom = newNode;
	else
	{
		stack->top->prev = newNode;
		newNode->next = stack->top;
		stack->top = newNode;
	}
	stack->size++;
}

void push_Btm(Stack *stack ,int data)
{
	Node *newNode = create_node(data);

	if (isEmpty(stack) == 0)
		stack->top = stack->bottom = newNode;
	else
	{
		stack->bottom->next = newNode;
		newNode->prev = stack->bottom;
		stack->bottom = newNode;
	}
	stack->size++;
}

void pop_Top(Stack *stack)
{
	Node *tmpNode;

	tmpNode = stack->top;
	if (tmpNode == NULL)
		return;
	else if (tmpNode->next == NULL)
		tmpNode = NULL;
	else
		tmpNode->next->prev = NULL;
	tmpNode = tmpNode->next;
	stack->size--;
	free(tmpNode);
}

void pop_Btm(Stack *stack)
{
	Node *tmpNode;

	tmpNode = stack->bottom;
	if (stack->bottom == NULL)
		return;
	else if (stack->top->next == NULL)
		stack->top = NULL;
	else
		stack->bottom->prev->next = NULL;
	stack->bottom = stack->bottom->next;
	stack->size--;
	free(tmpNode);
}
int main(int argc, char **argv)
{
	int i;
	int size;
	Node *newNode;
	Stack *stack;

	initStack(&stack);
	i = 1;
	if (argc > 1)
	{
		while (i < argc)
		{
			push_Top(stack,atoi(argv[i]));
			i++;
		}
		printf("stack a\n");
		display(stack);
		newNode = stack->top;
		printf("top : %d\n",newNode->data);
		newNode = stack->bottom;
		printf("bottom : %d\n",newNode->data);
		printf("size : %d\n",stack->size);
	}
	else
		printf("ERROR\n");
	return (0);
}