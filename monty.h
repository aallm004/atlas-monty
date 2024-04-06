#ifndef MONTY_H
#define MONTY_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/**
 * struct stack_s - doubly linked list representation of a stack (or queue)
 * @n: integer
 * @prev: points to the previous element of the stack (or queue)
 * @next: points to the next element of the stack (or queue)
 *
 * Description: doubly linked list node structure
 * for stack, queues, LIFO, FIFO
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
 * @user_args: tokens from line
 *
 * Description: opcode and its function
 * for stack, queues, LIFO, FIFO
 */
typedef struct instruction_s
{
		char *opcode;
		void (*f)(stack_t **stack, unsigned int line_number, char **user_args);
} instruction_t;

void (*get_op(char *s))(stack_t **, unsigned int, char **user_args);
void op_add(stack_t **stack, unsigned int line_number, char **user_args);
void op_nop(stack_t **stack, unsigned int line_number, char **user_args);
void op_pall(stack_t **stack, unsigned int line_number, char **user_args);
void op_pint(stack_t **stack, unsigned int line_number, char **user_args);
void op_pop(stack_t **stack, unsigned int line_number, char **user_args);
void op_push(stack_t **stack, unsigned int line_number, char **user_args);
void op_swap(stack_t **stack, unsigned int line_number, char **user_args);
char **tokenize(char *str, char *delim);
void free_string_array(char **str_array);
void free_stack(stack_t *head);
int isnumber(char *ptr);

#endif
