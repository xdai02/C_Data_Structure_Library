/**************************************************
 * Module   :   cino_list
 * Function :   Operations on cino-list
 * Category :
 *              - list_t
 **************************************************/

#ifndef _CINO_LIST_H_
#define _CINO_LIST_H_

#include "cino_utils.h"

/****************************************
 *               list_t
 ****************************************/

typedef struct list_t list_t;

/**
 * @brief   Create cino-list.
 * @param data_type data type of each element
 *                  valid data type includes:
 *                      - int
 *                      - double
 *                      - T (generic)
 * @return  Returns the pointer to cino-list, or `NULL` if creation failed.
 */
list_t *list_create(const str_t data_type);

/**
 * @brief   Destroy cino-list.
 * @note    It is caller's responsibility to free all the elements before calling
 *          this function, if it is a T (generic) cino-list.
 * @param list  cino-list
 */
void list_destroy(list_t *list);

/**
 * @brief   Determine if the cino-list is empty.
 * @param list  cino-list
 * @return  Returns `true` if the cino-list is empty, otherwise returns `false`.
 */
bool list_is_empty(const list_t *list);

/**
 * @brief   Get the number of elements in the cino-list.
 * @param list  cino-list
 * @return  Returns the number of elements in the cino-list.
 */
size_t list_size(const list_t *list);

/**
 * @brief   Clear all the elments in the cino-list.
 * @note    It is caller's responsibility to free all the elements before calling
 *          this function, if it is a T (generic) cino-list.
 * @param list  cino-list
 * @return  Returns the modified cino-list.
 */
list_t *list_clear(list_t *list);

/**
 * @brief   Get the first element in the cino-list.
 * @param list  cino-list
 * @return  For primitive cino-list, this function returns a wrapper type of the first
 *          primitive. It is caller's responsibility to unwrap to get the primitive.
 */
T list_get_front(const list_t *list);

/**
 * @brief   Get the last element in the cino-list.
 * @param list  cino-list
 * @return  For primitive cino-list, this function returns a wrapper type of the last
 *          primitive. It is caller's responsibility to unwrap to get the primitive.
 */
T list_get_back(const list_t *list);

/**
 * @brief   Get the element of the indexed component in the cino-list.
 * @param list  cino-list
 * @param index index
 * @return  For primitive cino-list, this function returns a wrapper type of the
 *          primitive. It is caller's responsibility to unwrap to get the primitive.
 */
T list_get(const list_t *list, int index);

/**
 * @brief   Update the element of the indexed component in the cino-list.
 * @param list  cino-list
 * @param index index
 * @param data  - For primitive data, a wrapper type of that primitive is needed.
 *              This function will not unwrap or free the wrapper. It is caller's
 *              responsibility to unwrap.
 *              - For T (generic) cino-list, it is caller's responsibility to free
 *              the previous data before overwriting it.
 */
void list_set(list_t *list, int index, T data);

/**
 * @brief   Find the index of the first occurrence of the specified element in the
 *          cino-list.
 * @param list      cino-list
 * @param context   - For primitive cino-list, a wrapper type of the searching data should
 *                    be passed. It is caller's responsibility to unwrap.
 *                  - For T (generic) cino-list, a match_t callback function should be passed
 *                    as the matching rule.
 * @return  Returns the index of the first occurrence of the specified element in the
 *          cino-list, or `-1` if not found.
 */
int list_index_of(const list_t *list, void *context);

list_t *list_push_front(list_t *list, T data);

list_t *list_push_back(list_t *list, T data);

list_t *list_pop_front(list_t *list);

list_t *list_pop_back(list_t *list);

list_t *list_insert(list_t *list, int index, T data);

list_t *list_remove(list_t *list, int index, T data);

#endif