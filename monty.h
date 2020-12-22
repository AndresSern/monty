#ifndef HOLBERTON_H
#define HOLBERTON_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include <unistd.h>


char *second;
/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct stack_s
{
	int n;
	struct stack_s *prev;
	struct stack_s *next;
} stack_t;


/**
 * struct instruction_s - opcode and its function
 * @opcode: the opcode
 * @f: function to handle the opcode
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO Holberton project
 */
typedef struct instruction_s
{
	char *opcode;
	void (*f)(stack_t **stack, unsigned int line_number);
} instruction_t;

void _errors(int errornum, unsigned int line_number, stack_t **stack);
void checkFunction(char *token, unsigned int line_number, stack_t **head);
int check_push(char *s);
void f_push(stack_t **stack, unsigned int line_number);
void free_list(stack_t *stack);
void f_pall(stack_t **head, unsigned int line_number);
void f_pint(stack_t **head, unsigned int line_number);
void f_pop(stack_t **head, unsigned int line_number);
void f_swap(stack_t **head, unsigned int line_number);

#endif
