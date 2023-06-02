#ifndef lists_h
#define lists_h

/**
 *struct list_h - singly linked list
 *@str: string - (malloc string)
 *@len: length of string
 *@next: goes to the next node
 *
 * Specification: singly linked node structure
 * project
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_h *next;
} list_t

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t**head, const char *str);
list_t *add_node_end(list_t**head, const char *str);
void free_list(list_t *head);

#endif
