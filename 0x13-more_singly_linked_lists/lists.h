#ifndef _LIST_H_
#define _LIST_H_
#include <stddef.h>


/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct listint_s
{
<<<<<<< HEAD
	int n;
	struct listint_s *next;
} listint_t;

size_t print_listint(const listint_t *h);
size_t listint_len(const listint_t *h);
=======
    int n;
    struct listint_s *next;
} listint_t;

size_t print_listint(const listint_t *h);
>>>>>>> 0ada8ba2bd33891d4afb0f4b6be2ad2a0f9f607d

#endif /* _LIST_H_ */
