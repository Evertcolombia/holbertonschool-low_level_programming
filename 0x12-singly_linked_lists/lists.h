#ifndef _LISTS_H_
#define _LISTS_H_
#include <stdarg.h>
#include <stddef.h>

size_t print_list(const list_t *h);

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

#endif /* _LISTS_H_ */
