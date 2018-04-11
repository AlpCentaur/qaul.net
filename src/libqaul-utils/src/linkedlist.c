/*
 * qaul.net is free software
 * licensed under GPL (version 3)
 */

#include "qaul/utils/linkedlist.h"
#include "qaul/utils/defines.h"


int qllist_init(struct ql_list *list)
{
    ql_list->first = 0;
    ql_list->last = 0;

    return 0;
}

/**
 * add a new list entry.
 * it adds the entry as first item.
 */
int qllist_add (void *data, struct ql_list *list)
{
    return qllist_add_first(data);
}

/**
 * add a new list entry as first item
 */
int qllist_add_first (void *data, struct ql_list *list)
{
    

    return 0;
}

/**
 * add a new list entry as last item
 */
int qllist_add_last (void *data, struct ql_list *list)
{
    

    return 0;
}

/**
 * delete list entry
 */
void qllist_remove (void *data, struct ql_list *list)
{
    return 0;
}
