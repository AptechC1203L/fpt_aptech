/*
 * exam.c
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
#include "common.h"
#include "exam.h"

void show_exam_menu() {
    int choice;
    printf(
        "1. Xem de thi"
        "2. Tao de thi\n"
        "0. Tro ve menu chinh\n");
    choice = getchar();
    switch (choice) {
    case '0':
        return;
    case '1':
        break;
    case '2':
        break;
    }
}
