#include "test_cino_utils.h"
#include "test_cino_string.h"
#include "test_cino_array.h"
#include "test_cino_list.h"

void test_cino_utils() {
    test_min();
    test_max();
    test_negate();
    test_swap();
    test_equal_double();

    test_return_if_fail();
    test_return_value_if_fail();
    test_call_and_return_if_fail();
    test_call_and_return_value_if_fail();

    test_array_len();

    test_str_to_bool();
    test_bool_to_str();
    test_str_to_char();
    test_char_to_str();
    test_str_to_int();
    test_int_to_str();
    test_str_to_double();
    test_double_to_str();

    test_wrap_int();
    test_unwrap_int();
    test_wrap_double();
    test_unwrap_double();

    test_str_equal();
    test_str_equal_ignore_case();
    test_str_starts_with();
    test_str_to_lower();
    test_str_to_upper();
    test_str_ends_with();
    test_str_clear();
    test_str_length();
    test_str_copy();
    test_str_concat();
    test_str_trim();
    test_str_append_char();
    test_str_append_int();
    test_str_append_double();
    test_str_insert_char();
    test_str_insert_string();
    test_str_substring();
    test_str_count_substring();
    test_str_replace_char();
    test_str_replace();
    test_str_remove();
    test_str_index_of_char();
    test_str_index_of_char_from();
    test_str_index_of_substring();
    test_str_index_of_substring_from();
    test_str_last_index_of_char();
    test_str_last_index_of_char_from();
    test_str_last_index_of_substring();
    test_str_last_index_of_substring_from();
    test_str_split();

    LOGGER(INFO, "[PASS] test_cino_utils");
}

void test_cino_string() {
    test_string_create();
    test_string_destroy();
    test_string_get();
    test_string_set();
    test_string_length();
    test_string_clear();
    test_string_equal();
    test_string_equal_ignore_case();
    test_string_to_lower();
    test_string_to_upper();
    test_string_starts_with();
    test_string_ends_with();
    test_string_copy();
    test_string_concat();
    test_string_trim();
    test_string_append_char();
    test_string_insert_char();
    test_string_insert_string();
    test_string_count_substring();
    test_string_replace_char();
    test_string_replace();
    test_string_remove();

    LOGGER(INFO, "[PASS] test_cino_string");
}

void test_cino_array() {
    test_array_create();
    test_array_destroy();
    test_array_is_empty();
    test_array_size();
    test_array_clear();
    test_array_get();
    test_array_set();
    test_array_append();
    test_array_insert();
    test_array_remove();
    test_array_min();
    test_array_max();
    test_array_index_of();
    test_array_last_index_of();
    test_array_count();
    test_array_reverse();
    test_array_swap();
    test_array_sort();
    test_array_iter_begin();
    test_array_iter_end();
    test_array_iter_has_prev();
    test_array_iter_has_next();
    test_array_iter_prev();
    test_array_iter_next();

    LOGGER(INFO, "[PASS] test_cino_array");
}

void test_cino_list() {
    test_list_create();
    test_list_destroy();
    test_list_is_empty();
    test_list_size();
    test_list_clear();
    test_list_get_front();
    test_list_get_back();
    test_list_get();
    test_list_set();
    test_list_index_of();
    test_list_push_front();
    test_list_push_back();
    test_list_pop_front();
    test_list_pop_back();
    test_list_insert();
    test_list_remove();

    LOGGER(INFO, "[PASS] test_cino_list");
}

int main(int argc, char *argv[]) {
    test_cino_utils();
    test_cino_string();
    test_cino_array();
    test_cino_list();

    return 0;
}