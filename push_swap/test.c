// #include <stdio.h>
// #include <stdlib.h>

// typedef struct Node
// {
// 	int data;
// 	struct Node *prev;
// 	struct Node *next;
// } Node;

// typedef struct Stack
// {
// 	struct Node *top;
// 	struct Node *bottom;
// 	int size;
// }Stack;

// void initStack(Stack **stack)
// {
// 	(*stack) = (Stack *)malloc(sizeof(Stack));
// 	(*stack)->bottom = NULL;
// 	(*stack)->top = NULL;
// 	(*stack)->size = 0;
// }
// int isEmpty(Stack *stack)
// {
// 	if (stack->top == NULL)
// 		return (0);
// 	return (1);
// }

// Node *create_node(int data)
// {
// 	Node *newNode = (Node *)malloc(sizeof(Node));

// 	if (newNode == NULL)
// 		return (NULL);
// 	newNode->data = data;
// 	newNode->prev = NULL;
// 	newNode->next = NULL;
// 	return (newNode);
// }

// void display(Stack *stack)
// {
// 	Node *current;

// 	current = stack->top;
// 	while (current != NULL)
// 	{
// 		printf("%d ", current->data);
// 		current = current->next;
// 	}
// 	printf("\n");
// }

// void push_Top(Stack *stack,int data)
// {
// 	Node *newNode = create_node(data);

// 	if (isEmpty(stack) == 0)
// 		stack->top = stack->bottom = newNode;
// 	else
// 	{
// 		stack->top->prev = newNode;
// 		newNode->next = stack->top;
// 		stack->top = newNode;
// 	}
// 	stack->size++;
// }

// void push_Btm(Stack *stack ,int data)
// {
// 	Node *newNode = create_node(data);

// 	if (isEmpty(stack) == 0)
// 		stack->top = stack->bottom = newNode;
// 	else
// 	{
// 		stack->bottom->next = newNode;
// 		newNode->prev = stack->bottom;
// 		stack->bottom = newNode;
// 	}
// 	stack->size++;
// }

// void pop_Top(Stack *stack)
// {
// 	Node *tmpNode;

// 	tmpNode = stack->top;
// 	if (tmpNode == NULL)
// 		return;
// 	else if (tmpNode->next == NULL)
// 		tmpNode = NULL;
// 	else
// 		tmpNode->next->prev = NULL;
// 	tmpNode = tmpNode->next;
// 	stack->size--;
// 	free(tmpNode);
// }

// void pop_Btm(Stack *stack)
// {
// 	Node *tmpNode;

// 	tmpNode = stack->bottom;
// 	if (stack->bottom == NULL)
// 		return;
// 	else if (stack->top->next == NULL)
// 		stack->top = NULL;
// 	else
// 		stack->bottom->prev->next = NULL;
// 	stack->bottom = stack->bottom->next;
// 	stack->size--;
// 	free(tmpNode);
// }
// int main(int argc, char **argv)
// {
// 	int i;
// 	int size;
// 	Node *newNode;
// 	Stack *stack;

// 	initStack(&stack);
// 	i = 1;
// 	if (argc > 1)
// 	{
// 		while (i < argc)
// 		{
// 			push_Top(stack,atoi(argv[i]));
// 			i++;
// 		}
// 		printf("stack a\n");
// 		display(stack);
// 		newNode = stack->top;
// 		printf("top : %d\n",newNode->data);
// 		newNode = stack->bottom;
// 		printf("bottom : %d\n",newNode->data);
// 		printf("size : %d\n",stack->size);
// 	}
// 	else
// 		printf("ERROR\n");
// 	return (0);
// }

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <stdlib.h>

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t i;
	size_t srcsize;

	if (dst == NULL || src == NULL)
		return (0);
	i = 0;
	srcsize = strlen(src);
	if (size != 0)
	{
		while (i < size - 1 && src[i])
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (srcsize);
}

static int is_find(char c, char s)
{
	if (c == s)
		return (1);
	return (0);
}

static int wrd_cnt(char const *s, char c)
{
	size_t cnt;

	cnt = 0;
	if (is_find(*s, c))
		s++;
	while (*s)
	{
		if (!(is_find(*s, c)) && (is_find(*(s + 1), c) || *(s + 1) == '\0'))
			cnt++;
		s++;
	}
	return (cnt);
}

static char *ft_memfree(char **memf, size_t arr_size)
{
	size_t i;

	i = 0;
	while (i < arr_size)
	{
		free(memf[i]);
		i++;
	}
	free(memf);
	return (NULL);
}

static char **resultsplit(char **str, char const *s, size_t size, char c)
{
	size_t i;
	char const *start;

	i = 0;
	str[size] = 0;
	while (*s && i < size)
	{
		while (is_find(*s, c))
			s++;
		start = s;
		while (!(is_find(*s, c)) && *s != '\0')
			s++;
		if (!(str[i] = (char *)malloc(sizeof(char) * (s - start + 1))))
			ft_memfree(str, size + 1);
		ft_strlcpy(str[i], start, s - start + 1);
		i++;
	}
	return (str);
}

char **ft_split(char const *s, char c)
{
	char **str;
	size_t size;

	if (!(s))
		return (NULL);
	size = wrd_cnt(s, c);
	if (!(str = (char **)malloc(sizeof(char *) * (size + 1))))
		return (NULL);
	return (resultsplit(str, s, size, c));
}

int count(char **str)
{
	int i = 0;
	int cnt = 0;

	while (str[i])
	{
		cnt++;
		i++;
	}
	return (cnt);
}

int main(int argc, char **argv)
{
	int i;
	size_t cnt;
	int j = 0, x = 0;
	char *tmp;
	char **sibar;

	i = 1;
	if (argc > 1)
	{
		while (argc > i)
		{
			if (strchr(argv[i], ' '))
			{
				cnt = 0;
				x = 0;
				sibar = ft_split(argv[i], ' ');
				cnt = count(sibar);
				printf()
			}
			i++;
		}
		printf("되냐 ㅅㅂ? : %s", tmp);
	}
}