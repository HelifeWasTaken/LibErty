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

int main(void)
{
    hash_t *tab = init_ehashmap();

    insert_ehashmap(&tab, "toto", "john");
    insert_ehashmap(&tab, "aled", "paul");
    printf("%s %s\n", (char *)get_ehashmap(tab, "toto"), get_ehashmap(tab, "aled"));
    printf("TAB_SIZE = %ld, toto = %ld aled = %ld", TAB_SIZE, ehash("toto"), ehash("aled"));
    free_ehashmap(&tab);
    return (0);
}
