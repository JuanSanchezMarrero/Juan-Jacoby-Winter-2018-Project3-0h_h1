/**
 * test.cpp
 *
 * EECS 183
 * Project 3: 0h h1 Test Suite
 * Winter 2018
 *
 * <Jacoby Kroschel, Juan Sanchez>
 * <kroschel, jusa>
 *
 * <tests the functions of the OH-HI game.>
 */

#include <iostream>
#include "utility.h"
#include "ohhi.h"

using namespace std;

void test_count_unknown_squares();
void test_row_has_no_threes_of_color();
void test_col_has_no_threes_of_color();
void test_board_has_no_threes();
void test_rows_are_different();
void test_cols_are_different();
void test_board_has_no_duplicates();
void test_solve_balance_row();
void test_solve_balance_column();
void test_solve_three_in_a_column();
void test_solve_three_in_a_row();
void test_board_is_solved();
void test_check_valid_input();
void test_check_valid_move();


// declare more test functions here

int main() {
    
    test_count_unknown_squares();
    
    test_row_has_no_threes_of_color();
    
    test_col_has_no_threes_of_color();    
    
    test_board_has_no_threes();
    
    test_rows_are_different();
    
    test_cols_are_different();
    
    test_board_has_no_duplicates();    
    
    test_solve_balance_row();
    
    test_solve_balance_column();
    
    test_solve_three_in_a_column();
    
    test_solve_three_in_a_row();
    
    test_board_is_solved();
    
    test_check_valid_input();
    
    test_check_valid_move();



  

    // add your calls to test functions here

    return 0;
}


void test_count_unknown_squares() {
    int board[MAX_SIZE][MAX_SIZE];

    // test case 1
    string test_board_1[4] = { "XO-O",
        "--OO",
        "---X",
        "--O-" };
    int size_1 = 4;
    read_board_from_string(board, test_board_1, size_1);
    cout << count_unknown_squares(board, size_1) << endl;
    
    
    // test case 2
    string test_board_2[4] = { "XXOO",
        "-XOO",
        "O--X",
        "X-O-" };
    int size_2 = 4;
    read_board_from_string(board, test_board_2, size_2);
    cout << count_unknown_squares(board, size_2) << endl;
    
    // test case 3
    string test_board_3[6] = { "X--O",
        "-X-O",
        "-OOX",
        "-OO-" };
    int size_3 = 4;
    read_board_from_string(board, test_board_3, size_3);
    cout << count_unknown_squares(board, size_3) << endl;
    
    // test case 4
    string test_board_4[8] = { "----",
        "----",
        "----",
        "----" };
    int size_4 = 4;
    read_board_from_string(board, test_board_4, size_4);
    cout << count_unknown_squares(board, size_4) << endl;
    
}

void test_row_has_no_threes_of_color() {
    int board[MAX_SIZE][MAX_SIZE];

    // test case 1
    string test_board_1[4] = { "----",
        "----",
        "----",
        "----" };
    int size_1 = 4;
    read_board_from_string(board, test_board_1, size_1);
    cout << row_has_no_threes_of_color(board, size_1, 0, 1) << endl;

    // test case 2
    string test_board_2[4] = { "-OOO",
        "----",
        "----",
        "----" };
    int size_2 = 4;
    read_board_from_string(board, test_board_2, size_2);
    cout << row_has_no_threes_of_color(board, size_1, 3, 2) << endl;

    // test case 3
    string test_board_3[4] = { "-X--",
        "OX--",
        "X---",
        "XXXX" };
    int size_3 = 4;
    read_board_from_string(board, test_board_3, size_3);
    cout << row_has_no_threes_of_color(board, size_3, 3, 2) << endl;

    // test case 4
    string test_board_4[4] = { "--OX--",
        "---O-",
        "-O-X--",
        "-X---X" };
    int size_4 = 6;
    read_board_from_string(board, test_board_4, size_4);
    cout << row_has_no_threes_of_color(board, size_4, 2, 2) << endl;

}

void test_col_has_no_threes_of_color() {
    int board[MAX_SIZE][MAX_SIZE];

    // test case 1
    string test_board_1[4] = { "----",
        "----",
        "----",
        "----" };
    int size_1 = 4;
    read_board_from_string(board, test_board_1, size_1);
    cout << col_has_no_threes_of_color(board, size_1, 0, 1) << endl;

    // test case 2
    string test_board_2[4] = { "-OOO",
        "----",
        "----",
        "----" };
    int size_2 = 4;
    read_board_from_string(board, test_board_2, size_2);
    cout << col_has_no_threes_of_color(board, size_1, 3, 2) << endl;

    // test case 3
    string test_board_3[4] = { "XX--",
        "XO--",
        "X---",
        "XOOX" };
    int size_3 = 4;
    read_board_from_string(board, test_board_3, size_3);
    cout << col_has_no_threes_of_color(board, size_3, 3, 2) << endl;

    // test case 4
    string test_board_4[4] = { "--OX--",
        "---O-",
        "-O-X--",
        "-X---X" };
    int size_4 = 6;
    read_board_from_string(board, test_board_4, size_4);
    cout << col_has_no_threes_of_color(board, size_4, 2, 2) << endl;
}

void test_board_has_no_threes() {
    int board[MAX_SIZE][MAX_SIZE];

    // test case 1
    string test_board_1[4] = { "----",
        "----",
        "----",
        "----" };
    int size_1 = 4;
    read_board_from_string(board, test_board_1, size_1);
    cout << board_has_no_threes(board, size_1) << endl;

    // test case 2
    string test_board_2[4] = { "-XO-",
        "---X",
        "XXO-",
        "-OO-" };
    int size_2 = 4;
    read_board_from_string(board, test_board_2, size_2);
    cout << board_has_no_threes(board, size_2) << endl;

    // test case 3
    string test_board_3[4] = { "-XO-",
        "---X",
        "XXO-",
        "XOXO" };
    int size_3 = 4;
    read_board_from_string(board, test_board_3, size_3);
    cout << board_has_no_threes(board, size_3) << endl;

    // test case 4
    string test_board_4[4] = { "-XO-",
        "---X",
        "XXO-",
        "-XX-" };
    int size_4 = 4;
    read_board_from_string(board, test_board_4, size_4);
    cout << board_has_no_threes(board, size_4) << endl;

}

void test_board_has_no_duplicates() {
    int board[MAX_SIZE][MAX_SIZE];

    // test case 1
    string test_board_1[] = { "XO-O",
        "--OO",
        "---X",
        "--O-" };
    int size_1 = 4;
    read_board_from_string(board, test_board_1, size_1);
    cout << board_has_no_duplicates(board, size_1);

    // test case 2
   
    string test_board_2[] = { "XOXO",
        "XOXO",
        "---X",
        "--O-" };
    int size_2 = 4;
    read_board_from_string(board, test_board_2, size_2);
    cout << board_has_no_duplicates(board, size_2);

    // test case 3
    string test_board_3[] = { "XO-O",
        "--OO",
        "---X",
        "--OO" };
    int size_3 = 4;
    read_board_from_string(board, test_board_3, size_3);
    cout << board_has_no_duplicates(board, size_3);

    // test case 4
    string test_board_4[] = { "XO-X",
        "--OO",
        "XOXO",
        "XOXO" };
    int size_4 = 4;
    read_board_from_string(board, test_board_4, size_4);
    cout << board_has_no_duplicates(board, size_4);

}

void test_cols_are_different() {
    int board[MAX_SIZE][MAX_SIZE];

    // test case 1
    string test_board_1[4] = { "----",
        "----",
        "----",
        "----" };
    int size_1 = 4;
    read_board_from_string(board, test_board_1, size_1);
    cout << cols_are_different(board, size_1, 0, 1) << endl;

    // test case 2
    string test_board_2[4] = { "-OO-",
        "-OO-",
        "----",
        "----" };
    int size_2 = 4;
    read_board_from_string(board, test_board_2, size_2);
    cout << cols_are_different(board, size_2, 0, 1) << endl;

    // test case 3
    string test_board_3[4] = { "-XXO",
        "----",
        "XO-O",
        "----" };
    int size_3 = 4;
    read_board_from_string(board, test_board_3, size_3);
    cout << cols_are_different(board, size_3, 2, 3) << endl;

    // test case 4
    string test_board_4[4] = { "XOXO",
        "OXOX",
        "XOXO",
        "OXOX" };
    int size_4 = 4;
    read_board_from_string(board, test_board_4, size_4);
    cout << cols_are_different(board, size_4, 0, 3) << endl;
}

void test_rows_are_different() {
    int board[MAX_SIZE][MAX_SIZE];

    // test case 1
    string test_board_1[4] = { "----",
        "----",
        "----",
        "----" };
    int size_1 = 4;
    read_board_from_string(board, test_board_1, size_1);
    cout << rows_are_different(board, size_1, 0, 1) << endl;

    // test case 2
    string test_board_2[4] = { "-OO-",
        "-OO-",
        "----",
        "----" };
    int size_2 = 4;
    read_board_from_string(board, test_board_2, size_2);
    cout << rows_are_different(board, size_2, 0, 1) << endl;

    // test case 3
    string test_board_3[4] = { "-XXO",
        "----",
        "XO-O",
        "----" };
    int size_3 = 4;
    read_board_from_string(board, test_board_3, size_3);
    cout << rows_are_different(board, size_3, 2, 3) << endl;

    // test case 4
    string test_board_4[4] = { "XOXO",
        "OXOX",
        "XOXO",
        "OXOX" };
    int size_4 = 4;
    read_board_from_string(board, test_board_4, size_4);
    cout << rows_are_different(board, size_4, 0, 3) << endl;
}

void test_solve_balance_row() {
    int board[MAX_SIZE][MAX_SIZE];

    // test case 1
    string test_board_1[4] = { "XX--",
        "----",
        "----",
        "----" };
    int size_1 = 4;
    read_board_from_string(board, test_board_1, size_1);
    solve_balance_row(board, size_1, 0, 1);

    // test case 2
    string test_board_2[4] = { "XX--",
        "----",
        "X-X-",
        "----" };
    int size_2 = 4;
    read_board_from_string(board, test_board_2, size_2);
    solve_balance_row(board, size_2, 2, 1);
    
    // test case 3
    string test_board_3[4] = { "XX--",
        "XOX-",
        "X-X-",
        "----" };
    int size_3 = 4;
    read_board_from_string(board, test_board_3, size_3);
    solve_balance_row(board, size_3, 1, 1);

    // test case 4
    string test_board_4[4] = { "XX--",
        "----",
        "X-X-",
        "-OO-" };
    int size_4 = 4;
    read_board_from_string(board, test_board_4, size_4);
    solve_balance_row(board, size_4, 3, 1);
}

void test_solve_balance_column() {
    int board[MAX_SIZE][MAX_SIZE];

    // test case 1
    string test_board_1[4] = { "XX--",
        "X---",
        "----",
        "----" };
    int size_1 = 4;
    read_board_from_string(board, test_board_1, size_1);
    solve_balance_column(board, size_1, 0, 1);

    // test case 2
    string test_board_2[4] = { "XX--",
        "--X-",
        "X-X-",
        "--O-" };
    int size_2 = 4;
    read_board_from_string(board, test_board_2, size_2);
    solve_balance_column(board, size_2, 2, 1);

    // test case 3
    string test_board_3[4] = { "XX--",
        "XOX-",
        "X-X-",
        "-X--" };
    int size_3 = 4;
    read_board_from_string(board, test_board_3, size_3);
    solve_balance_column(board, size_3, 1, 1);

    // test case 4
    string test_board_4[4] = { "XX-O",
        "----",
        "X-XO",
        "-OOX" };
    int size_4 = 4;
    read_board_from_string(board, test_board_4, size_4);
    solve_balance_column(board, size_4, 3, 1);
}

void test_solve_three_in_a_column() {
    int board[MAX_SIZE][MAX_SIZE];

    // test case 1
    string test_board_1[4] = { "XX--",
        "--O-",
        "-X--",
        "X--O" };
    int size_1 = 4;
    read_board_from_string(board, test_board_1, size_1);
    solve_three_in_a_column(board, size_1, 0, 1);

    // test case 2
    string test_board_2[4] = { "O-O-",
        "-XX-",
        "-X-X",
        "X--O" };
    int size_2 = 4;
    read_board_from_string(board, test_board_2, size_2);
    solve_three_in_a_column(board, size_2, 1, 1);

    // test case 3
    string test_board_3[4] = { "XX-O",
        "OO-X",
        "X-XO",
        "X-XX" };
    int size_3 = 4;
    read_board_from_string(board, test_board_3, size_3);
    solve_three_in_a_column(board, size_3, 3, 1);

    // test case 4
    string test_board_4[4] = { "XX--",
        "OO-X",
        "X-X-",
        "O--O" };
    int size_4 = 4;
    read_board_from_string(board, test_board_4, size_4);
    solve_three_in_a_column(board, size_4, 0, 1);

}

void test_solve_three_in_a_row() {
    int board[MAX_SIZE][MAX_SIZE];

    // test case 1
    string test_board_1[4] = { "XX--",
        "--O-",
        "-X--",
        "X--O" };
    int size_1 = 4;
    read_board_from_string(board, test_board_1, size_1);
    solve_three_in_a_row(board, size_1, 0, 1);

    // test case 2
    string test_board_2[4] = { "O-O-",
        "-XX-",
        "-X-X",
        "X--O" };
    int size_2 = 4;
    read_board_from_string(board, test_board_2, size_2);
    solve_three_in_a_row(board, size_2, 1, 1);

    // test case 3
    string test_board_3[4] = { "XX-O",
        "OO-X",
        "X-XO",
        "X-XX" };
    int size_3 = 4;
    read_board_from_string(board, test_board_3, size_3);
    solve_three_in_a_row(board, size_3, 3, 1);

    // test case 4
    string test_board_4[4] = { "XX--",
        "OO-X",
        "X-X-",
        "O--O" };
    int size_4 = 4;
    read_board_from_string(board, test_board_4, size_4);
    solve_three_in_a_row(board, size_4, 0, 1);

}

void test_board_is_solved() {
    //test 1
    int board[MAX_SIZE][MAX_SIZE];
    string test_board_1[4] = { "O---",
    "-XX-",
    "--XX",
    "X--O" };
    int size_1 = 4;
    read_board_from_string(board, test_board_1, size_1);
    cout << board_is_solved(board, size_1);
}

void test_check_valid_input() {

    //test case 1

    int size = 8;
    int row_input = 5;
    char col_input = 'a';
    char color_char = 4;
    int row = 5;
    int col = 0;

    cout << check_valid_input(size, row_input, col_input,
        color_char, row, col) << endl;

    //test case 2

    size = 8;
    row_input = 1;
    col_input = 'b';
    color_char = 1;
    row = 1;
    col = 2;

    cout << check_valid_input(size, row_input, col_input,
        color_char, row, col) << endl;

    //test case 3

    size = 6;
    row_input = 2;
    col_input = 'c';
    color_char = 2;
    row = 2;
    col = 2;

    cout << check_valid_input(size, row_input, col_input,
        color_char, row, col) << endl;

    //test case 4

    size = 4;
    row_input = 4;
    col_input = 'c';
    color_char = 1;
    row = 4;
    col = 3;

    cout << check_valid_input(size, row_input, col_input,
        color_char, row, col) << endl;

}

void test_check_valid_move() {
    int original_board[MAX_SIZE][MAX_SIZE];
    int current_board[MAX_SIZE][MAX_SIZE];

    //test 1
    int size_1 = 4;
    string original_board_1[4] = { "XO--",
    "-XO-",
    "XOOX",
    "XOXO" };
    string current_board_1[4] = { "XOX-",
        "-XOO",
        "XOOX",
        "XOXO" };
    read_board_from_string(original_board, original_board_1, size_1);
    read_board_from_string(current_board, original_board_1, size_1);
    cout << check_valid_move(original_board, current_board, size_1, 0, 0, 1);

    //test 2
    int size_2 = 4;
    string original_board_2[4] = { "XO--",
        "-XO-",
        "X-OX",
        "XO-O" };
    string current_board_2[4] = { "XOX-",
        "-XOO",
        "XOOX",
        "XOXO" };
    read_board_from_string(original_board, original_board_2, size_2);
    read_board_from_string(current_board, original_board_2, size_2);
    cout << check_valid_move(original_board, current_board, size_2, 0, 0, 1);

    //test 3
    int size_3 = 4;
    string original_board_3[4] = { "----",
        "----",
        "----",
        "----" };
    string current_board_3[4] = { "XOX-",
        "-XOO",
        "XOOX",
        "XOXO" };
    read_board_from_string(original_board, original_board_3, size_3);
    read_board_from_string(current_board, original_board_3, size_3);
    cout << check_valid_move(original_board, current_board, size_3, 0, 0, 1);

    //test 4
    int size_4 = 4;
    string original_board_4[4] = { "XO--",
        "-XO-",
        "XOOX",
        "XOXO" };
    string current_board_4[4] = { "XOX-",
        "-XOO",
        "XOOX",
        "XOXO" };
    read_board_from_string(original_board, original_board_4, size_4);
    read_board_from_string(current_board, original_board_4, size_4);
    cout << check_valid_move(original_board, current_board, size_4, 0, 0, 1);



}

