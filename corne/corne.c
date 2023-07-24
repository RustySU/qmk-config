/**
 * Copyright 2021 Quentin LEBASTARD <qlebastard@gmail.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "quantum.h"

// clang-format off
#ifdef RGB_MATRIX_ENABLE
led_config_t g_led_config = { {
    // Left side underglow
    // {  2,  1,  0,  
    //    3,  4,  5   },
    // left
    { 24, 23, 18, 17, 10,  9 },
    { 25, 22, 19, 16, 11,  8 },
    { 26, 21, 20, 15, 12,  7 },
    { NO_LED, NO_LED, NO_LED,14, 13, 6 },
    // Right side underglow
    // {  27, 28, 29,  
    //    32, 31, 30   },
    // right
    { 36, 37, 44, 45, 50, 51 },
    { 35, 38, 43, 46, 49, 52 },
    { 34, 39, 42, 47, 48, 53 },
    { 33, 40, 41, NO_LED, NO_LED, NO_LED }
}, {
    // Left side underglow
    {85, 16}, {50, 13}, {16, 20}, {16, 38}, {50, 48}, {85, 52},
    // left
    {  95,  63 }, {  85,  39 }, {  85,  21 }, {  85,   4 }, // col 5
    {  68,   2 }, {  68,  19 }, {  68,  37 }, {  80,  58 }, // col 4
    {  60,  55 }, {  50,  35 }, {  50,  13 }, {  50,   0 }, // col 3
    {  33,   3 }, {  33,  20 }, {  33,  37 }, // col 2
    {  16,  42 }, {  16,  24 }, {  16,   7 }, // col 1
    {  0,    7 }, {   0,  24 }, {   0,  41 }, // col 0
    // Right side underglow
    {139, 16}, {174, 13}, {208, 20}, {208, 38}, {174, 48}, {139, 52},
    // right
    { 129,  63 }, { 139,  39 }, { 139,  21 }, { 139,   4 }, // col 5
    { 156,   2 }, { 156,  19 }, { 156,  37 }, { 144,  58 }, // col 4
    { 164,  55 }, { 174,  35 }, { 174,  13 }, { 174,   0 }, // col 3
    { 191,   3 }, { 191,  20 }, { 191,  37 }, // col 2
    { 208,  42 }, { 208,  24 }, { 208,   7 }, // col 1
    { 224,   7 }, { 224,  24 }, { 224,  41 }, // col 0
}, {
    // Left side underglow
    2, 2, 2, 2, 2, 2,
    // left
    4, 4, 4, 4,
    4, 4, 4, 4,
    4, 4, 4, 4,
    4, 4, 4,
    4, 4, 4,
    4, 4, 4,
    // Right side underglow
    2, 2, 2, 2, 2, 2,
    // right
    4, 4, 4, 4,
    4, 4, 4, 4,
    4, 4, 4, 4,
    4, 4, 4,
    4, 4, 4,
    4, 4, 4,
} };
#endif
// clang-format on
