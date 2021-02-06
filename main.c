/*
** EPITECH PROJECT, 2021
** main.c
** File description:
** aled
*/

#include <erty/estdio.h>
#include <string.h>
#include <stdlib.h>
#include <erty/estdlib.h>
#include <erty/ecstring.h>
#include <erty/efd.h>
#include <stdio.h>
#include <erty/ebuffer.h>
#include <erty/eprintf.h>
#include <erty/esstring.h>
#include <erty/ealloc.h>
#include <malloc.h>
#include <erty/ehashmap.h>
#include <erty/elinked.h>

/*
   static void insert_head_elinked_empty_list(elinked_t *list,
   struct elinked_container *ptr, void *data)
   {
   ptr = ecalloc(sizeof(struct elinked_container), 1);
   if (ptr) {
   ptr->data = data;
   ptr->next = NULL;
   ptr->prev = NULL;
   list->head = ptr;
   list->tail = ptr;
   } else {
   ASSERT("elinked", "insert head list empty failed");
   }
   }

   void insert_head_elinked(elinked_t *list, void *data)
   {
   struct elinked_container *ptr = NULL;

   if (!list->head) {
   insert_head_elinked_empty_list(list, ptr, data);
   return;
   }
   ptr = ecalloc(sizeof(struct elinked_container), 1);
   if (ptr) {
   ptr->data = data;
   ptr->next = list->head;
   list->head->prev = ptr;
   ptr->prev = NULL;
   list->head = ptr;
   } else
   ASSERT("elinked", "insert head list already inited failed");
   */

INIT_LIST(integers_list, int);

typedef LIST(integers_list) ilist_t;

int main(void)
{
    LIST(integers_list) *mytoto = NULL;

    APPEND_TO_HEAD(integers_list, &mytoto, 3);
    APPEND_TO_HEAD(integers_list, &mytoto, 5);
    APPEND_TO_HEAD(integers_list, &mytoto, 2);
    printf("%d -> %d -> %d\n", mytoto->data, mytoto->next->data, mytoto->next->next->data);
    REVERSE_LIST(integers_list, &mytoto);
    printf("%d -> %d -> %d\n", mytoto->data, mytoto->next->data, mytoto->next->next->data);
    return (0);
}
