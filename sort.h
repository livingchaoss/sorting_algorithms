#ifndef SORT_H
#define SORT_H

#include <stdio.h>
#include <stdlib.h>
#define UP 0
#define DOWN 1

/**
 * enum bool - enumeration of boolean value
 * @false: boolean value
 * @true: boolean value
 */
typedef enum bool
{
	false = 0,
	true
} bool;

/**
 * struct listint_s - doubly linked list node
 * @prev: pointer to previous element of the list
 * @next: pointer to the next element of the list
 * @n: integer value
 */
typedef struct listint_s
{
	const int n;
	struct listint_s *prev;
	struct listint_s *next;
} listint_t;

void swap_ints(int *a, int *b);

void print_array(const int *array, size_t size);
void print_list(const listint_t *list);

void bubble_sort(int *array, size_t size);
void insertion_sort_list(listint_t **list);
void selection_sort(int *array, size_t size);
void quick_sort(int *array, size_t size);

#endif
