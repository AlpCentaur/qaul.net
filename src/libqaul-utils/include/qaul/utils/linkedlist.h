/*
 * qaul.net is free software
 * licensed under GPL (version 3)
 */

#ifndef _LINKEDLIST_H
#define _LINKEDLIST_H

#ifdef __cplusplus
extern "C" {
#endif // __cplusplus

/**
 * Generic linked list impelementation.
 */

struct ql_list{
    struct ql_list_item *first;
    struct ql_list_item *last;
}

struct ql_list_item {
	struct ql_list_item *prev;
    struct ql_list_item *next;
    int lock;                   /// is this list item locked?
	void *data;                 /// generic data
};

/**
 * initialize the list
 * return the list struct
 */
int qllist_init(struct ql_list **list);

/**
 * remove entire list
 */
int qllist_remove_list(struct ql_list *list);

/**
 * add a new list entry
 */
int qllist_add (void *data, struct ql_list *list);

/**
 * add a new list entry as first item
 */
int qllist_add_first (void *data, struct ql_list *list);

/**
 * add a new list entry as last item
 */
int qllist_add_last (void *data, struct ql_list *list);

/**
 * delete list entry
 */
int qllist_remove (void *data, struct ql_list *list);



#ifdef __cplusplus
}
#endif // __cplusplus

#endif
