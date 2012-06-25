/*
 * qa.h
 *
 * Copyright 2012 Ngô Trung <ndtrung4419@gmail.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston,
 * MA 02110-1301, USA.
 *
 *
 */

#ifndef QA_H
#define QA_H

#include "../common.h"
#include <stdint.h>

//TODO: dynamic string representation on-disk
#define MAX_ANSWERS 5
#define STRING_BUF_LEN 128
#define QA_CODE_LEN 7
#define CAT_CODE_LEN 7

struct qa_pair {
    char code[QA_CODE_LEN];
    char question[STRING_BUF_LEN];
    char answer[MAX_ANSWERS][STRING_BUF_LEN];
    int32_t points;
    int32_t number_of_answers;
};

struct category {
    char code[CAT_CODE_LEN];
    char name[STRING_BUF_LEN];
    struct qa_pair *qa_list;
    int32_t qa_list_len;
    FILE *qa_file;
};

// Plain Old Data version for on-disk representation.
// Mostly the same except that we don't include qa_list,
// which is a pointer and thus has unknown size.
struct category_POD {
    char code[CAT_CODE_LEN];
    char name[STRING_BUF_LEN];
    int32_t qa_list_len;
};

void show_qa_menu();
void create_new_qa();
void update_qa();
void show_qa();
struct category *search_cat(char code[]);
struct qa_pair *search_qa(struct category cat, char code[]);

extern struct category *cat_list;
extern int cat_list_len;

#endif
