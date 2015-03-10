/*
 =======================================================================
 * LEARNING OBJECTIVES:  This module lets you practice:
 *   -- Using NESTED FOR LOOPS (loops within loops) when:
 *       -- The inner loop does NOT depend on outer loop variable.
 *       -- The inner loop DEPENDS on outer loop variable.
 *       -- There are loops FOLLOWED by loops, as well as nested loops.

 * Authors: David Mutchler, Chandan Rupakheti, Matt Boutell, Delvin Defoe
 *          and their colleagues and Joe McNelly.  February, 2013.
 * =====================================================================
 *    TODO: 1. Put your name in the above comment at the indicated place.
 */

/* ======================================================================
 * ADVICE:  One way to solve most problems like these is:
 *
 *   1. Figure out the "pattern":  Loop followed by loop,
 *      loop inside loop, combinations of both, ...
 *
 *   2. Implement loops followed by loops one at a time, testing as you go.
 *
 *   3. For a loop within a loop:
 *
 *      Step 1: Get the PATTERN right, by:
 *        -- Outer loop:  for (j = 0; j < NUMBER_OF_ROWS; j = j + 1)
 *        -- Inner loop:    for (k = 0; k < NUMBER_OF_COLUMNS; k = k + 1)
 *        -- Inside inner loop:  Print a single character (say, an asterisk).
 *        -- After inner loop, inside outer loop:  Print a newline.
 *
 *      Step 2: Now get the CHARACTERs in each line right.
 *        -- Change ONLY the single character that you print
 *              inside the inner loop.
 *        -- Sometimes that character depends on j, sometimes on k,
 *              sometimes on both.
 *        -- If you don't see how the character depends on j and k,
 *              make a table to help you see the formula.  Remember that
 *              as j increases, -j decreases, and so forth.
 * ======================================================================
 */

#include <stdio.h>
#include <stdlib.h>

void test_triangle_same_number_in_each_row();
void test_triangle_all_numbers_in_each_row();
void test_triangle_with_bangs();
void test_triangle_with_bangs_and_numbers();
void test_triangle_right_justified();
void test_triangles_inside();
void test_numbers_constant_forward();
void test_numbers_constant_backward();
void test_numbers_increasing_forward();
void test_xxx();
void triangle_same_number_in_each_row(int r);
void triangle_all_numbers_in_each_row(int r);
void triangle_with_bangs(int r);
void triangle_with_bangs_and_numbers();
void triangle_right_justified();
void triangles_inside();
void numbers_constant_forward();
void numbers_constant_backward();
void numbers_increasing_forward();
void xxx();

/***********************************************************************
 * main():
 *   Calls the   TEST   functions in this module.
 **********************************************************************/
int main() {
//	test_triangle_same_number_in_each_row();
//	test_triangle_all_numbers_in_each_row();
//	test_triangle_with_bangs();
//	test_triangle_with_bangs_and_numbers();
//	test_triangle_right_justified();
//	test_triangles_inside();
//	test_numbers_constant_forward();
//	test_numbers_constant_backward();
//	test_numbers_increasing_forward();
	test_xxx();

	return EXIT_SUCCESS;
}

/***********************************************************************
 * test_triangle_same_number_in_each_row():
 *   Tests the   triangle_same_number_in_each_row   function.
 **********************************************************************/
void test_triangle_same_number_in_each_row() {
	// TODO: 2a. Implement this function, using it to test the NEXT
	// function. Write the two functions in whichever order you prefer.
	triangle_same_number_in_each_row(5);
}

/***********************************************************************
 * triangle_same_number_in_each_row(int r):
 *   Prints a triangle of numbers, with r rows.
 *   The first row is 1, the 2nd is 22, the 3rd is 333, etc.
 *
 *   For example, when r = 5:
 *      1
 *      22
 *      333
 *      4444
 *      55555
 *
 * Precondition: The argument is positive.
 **********************************************************************/
void triangle_same_number_in_each_row(int r) {
	// TODO: 2b. Implement and test this function.
	//           MAKE A PROTOTYPE for it, too.
	int j, k;
	for (j = 0; j < r; j++) {
		for (k = 0; k < j + 1; k++) {
			printf("%i", j + 1);
		}
		printf("\n");
	}
}

/***********************************************************************
 * test_triangle_all_numbers_in_each_row():
 *   Tests the   triangle_all_numbers_in_each_row   function.
 **********************************************************************/
void test_triangle_all_numbers_in_each_row() {
	// TODO: 3a. Implement this function, using it to test the NEXT
	// function. Write the two functions in whichever order you prefer.
	triangle_all_numbers_in_each_row(5);
}

/***********************************************************************
 * triangle_all_numbers_in_each_row(int r):
 *   Prints a triangle of numbers, with r rows.
 *   The first row is 1, the 2nd is 12, the 3rd is 123, etc.
 *
 *   For example, when r = 5:
 *      1
 *      12
 *      123
 *      1234
 *      12345
 *
 * Precondition: The argument is positive.
 **********************************************************************/
void triangle_all_numbers_in_each_row(int r) {
	// TODO: 3b. Implement and test this function.
	//           MAKE A PROTOTYPE for it, too.
	int j, k;
	for (j = 0; j < r; j++) {
		for (k = 0; k < j + 1; k++) {
			printf("%i", k + 1);
		}
		printf("\n");
	}
}

/***********************************************************************
 * test_triangle_with_bangs():
 *   Tests the   triangle_with_bangs   function.
 **********************************************************************/
void test_triangle_with_bangs() {
	// TODO: 4a. Implement this function, using it to test the NEXT
	// function. Write the two functions in whichever order you prefer.
	triangle_with_bangs(5);
}

/***********************************************************************
 * triangle_with_bangs(int r):
 *   Prints a triangle of bangs (exclamation marks), with r rows.
 *   The first row has r bangs, the second row has r-1 bangs,
 *   the third has r-2 bangs, etc. to the last row which has 1 bang.
 *
 *   For example, when r = 5:
 *      !!!!!
 *      !!!!
 *      !!!
 *      !!
 *      !
 *
 * Precondition: The argument is positive.
 **********************************************************************/
void triangle_with_bangs(int r) {
	// TODO: 4b. Implement and test this function.
	//           MAKE A PROTOTYPE for it, too.
	int j, k;
	for (j = 0; j < r; j++) {
		for (k = 0; k < r - j; k++) {
			printf("!");
		}
		printf("\n");
	}
}

/***********************************************************************
 * test_triangle_with_bangs_and_numbers():
 *   Tests the   triangle_with_bangs_and_numbers   function.
 **********************************************************************/
void test_triangle_with_bangs_and_numbers() {
	// TODO: 5a. Implement this function, using it to test the NEXT
	// function. Write the two functions in whichever order you prefer.
	triangle_with_bangs_and_numbers(5);
}

/***********************************************************************
 * triangle_with_bangs_and_numbers(int r):
 *   Prints a triangle of numbers, with r rows.
 *   Each row starts out like the previous problem, but continues
 *   with an increasing number of digits: 1 in the first row,
 *   12 in the second row, 123 in the third row, etc.
 *
 *   For example, when r = 5:
 *      !!!!!1
 *      !!!!12
 *      !!!123
 *      !!1234
 *      !12345
 *
 * Precondition: The argument is positive.
 **********************************************************************/
void triangle_with_bangs_and_numbers(int r) {
	// TODO: 5b. Implement and test this function.
	//           MAKE A PROTOTYPE for it, too.
	// HINT: one way to solve this problem is to have TWO inner loops,
	//       one after the other.
	int j, k, i;
	for (j = 0; j < r; j++) {
		for (k = 0; k < r - j; k++) {
			printf("!");
		}
		for (i = 0; i < j + 1; i++) {
			printf("%i", i + 1);

		}
		printf("\n");
	}
}

/***********************************************************************
 * test_triangle_right_justified():
 *   Tests the   triangle_right_justified   function.
 **********************************************************************/
void test_triangle_right_justified() {
	// TODO: 6a. Implement this function, using it to test the NEXT
	// function. Write the two functions in whichever order you prefer.
	triangle_right_justified(5);
}

/***********************************************************************
 * triangle_right_justified(int r):
 *   Prints a triangle of numbers, with r rows.
 *   It looks the same as a previous example, but right-justified.
 *   So the first row has some spaces, then a 1,
 *   the 2nd row has some spaces, then a 12,
 *   the 3rd row has some spaces, then a 123,
 *   and so forth, in such a way that the rightmost numbers line up.
 *   The last row should have no spaces in it.
 *
 *   For example, when r = 5:
 *          1
 *         12
 *        123
 *       1234
 *      12345
 *
 * Precondition: The argument is positive.  Also, for purposes
 *               of "lining up", assume r is a single digit.
 **********************************************************************/
void triangle_right_justified(int r) {
	// TODO: 6b. Implement and test this function.
	//           MAKE A PROTOTYPE for it, too.
	// HINT: The space character ' ' is a character like any other one!
	int j, k, i;
	for (j = 0; j < r; j++) {
		for (k = 0; k < r - j; k++) {
			printf(" ");
		}
		for (i = 0; i < j + 1; i++) {
			printf("%i", i + 1);
		}
		printf("\n");
	}
}

/***********************************************************************
 * test_triangles_inside():
 *   Tests the   triangles_inside   function.
 **********************************************************************/
void test_triangles_inside() {
	// TODO: 7a. Implement this function, using it to test the NEXT
	// function. Write the two functions in whichever order you prefer.
	triangles_inside(5);
}

/***********************************************************************
 * triangles_inside(int r):
 *   Prints a pattern of numbers, with r rows.
 *   Here is what it looks like, ask if you don't see the pattern.
 *
 *   For example, when r = 5:
 *      1234554321
 *      1234  4321
 *      123    321
 *      12      21
 *      1        1
 *
 * Precondition: The argument is positive.
 **********************************************************************/
void triangles_inside(int r) {
	// TODO: 7b. Implement and test this function.
	//           MAKE A PROTOTYPE for it, too.
	int j, k, l;
	for (j = 0; j < r; j++) {
		for (k = 0; k < r - j; k++) {
			printf("%i", k + 1);
		}
		for (l = 0; l < j; l++) {
			printf(" ");
		}
		for (l = r; l > k; l--) {
			printf(" ");
		}
		for (k = r - j; k > 0; k--) {
			printf("%i", k);
		}
		printf("\n");
	}
}
/***********************************************************************
 * test_numbers_constant_forward():
 *   Tests the   numbers_constant_forward   function.
 **********************************************************************/
void test_numbers_constant_forward() {
	// TODO: 8a. Implement this function, using it to test the NEXT
	// function. Write the two functions in whichever order you prefer.
	numbers_constant_forward(4, 7, 3);
}

/***********************************************************************
 * numbers_constant_forward(int r, int max, int n):
 *   Prints a rectangle of numbers, with r rows.
 *   Each row has n 1s, then n 2s, then n 3s, etc. up to n max's.
 *
 *   For example, when r = 4, max = 7 and n = 3:
 *        111222333444555666777
 *        111222333444555666777
 *        111222333444555666777
 *        111222333444555666777
 *
 *   Notice that there were r = 4 rows that all look the same;
 *   each row had numbers that went from 1 to max = 7; and
 *   there were n occurrences of each number on each row.
 *
 *   Here is another example,
 *   when r = 3, max = 5 and n = 8:
 *        1111111122222222333333334444444455555555
 *        1111111122222222333333334444444455555555
 *        1111111122222222333333334444444455555555
 *
 * Precondition: The arguments are positive.
 **********************************************************************/
void numbers_constant_forward(int r, int max, int n) {
	// TODO: 8b. Implement and test this function.
	//           MAKE A PROTOTYPE for it, too.
	// HINT: What loop structure do you need for this problem?
	int a, b, c;
	for (a = 0; a < r; a++) {
		for (b = 0; b < max; b++) {

			for (c = 0; c < n; c++) {
				printf("%i", b + 1);
			}
		}
		printf("\n");
	}
}

/***********************************************************************
 * test_numbers_constant_backward():
 *   Tests the   numbers_constant_backward   function.
 **********************************************************************/
void test_numbers_constant_backward() {
	// TODO: 9a. Implement this function, using it to test the NEXT
	// function. Write the two functions in whichever order you prefer.
	numbers_constant_backward(4, 7, 3);
}

/***********************************************************************
 * numbers_constant_backward(int r, int max, int n):
 *   Prints a rectangle of numbers, with r rows.
 *   It looks the same as the previous problem,
 *   but with numbers reversed.
 *
 *   For example, when r = 4, max = 7 and n = 3:
 *        777666555444333222111
 *        777666555444333222111
 *        777666555444333222111
 *        777666555444333222111
 *
 * Precondition: The arguments are positive.
 **********************************************************************/
void numbers_constant_backward(int r, int max, int n) {
	// TODO: 9b. Implement and test this function.
	//           MAKE A PROTOTYPE for it, too.
	int a, b, c;
	for (a = 0; a < r; a++) {
		for (b = max; b > 0; b--) {
			for (c = 0; c < n; c++) {
				printf("%i", b);
			}
		}
		printf("\n");
	}
}

/***********************************************************************
 * test_numbers_increasing_forward():
 *   Tests the   numbers_increasing_forward   function.
 **********************************************************************/
void test_numbers_increasing_forward() {
	// TODO: 10a. Implement this function, using it to test the NEXT
	// function. Write the two functions in whichever order you prefer.
	numbers_increasing_forward(2, 7);
}

/***********************************************************************
 * numbers_increasing_forward(int r, int max):
 *   Prints a rectangle of numbers, with r rows,
 *   as in the previous two problems.
 *   But now each row has one 1, two 2s, three 3s, four 4s,
 *   etc up to the given max.
 *
 *   For example, when r = 4 and max = 3:
 *        122333
 *        122333
 *        122333
 *        122333
 *
 *   Another example, when r = 2 and max = 7:
 *        1223334444555556666667777777
 *        1223334444555556666667777777
 *
 * Precondition: The arguments are positive.
 **********************************************************************/
void numbers_increasing_forward(int r, int max) {
	// TODO: 10b. Implement and test this function.
	//           MAKE A PROTOTYPE for it, too.
	// HINT: What loop structure do you need for this problem?
	int j, k, l;
	for (j = 0; j < r; j++) {
		for (k = 0; k < max + 1; k++) {
			for (l = 0; l < k; l++) {
				printf("%i", k);

			}
		}
		printf("\n");
	}
}

/***********************************************************************
 * test_xxx():
 *   Tests the   xxx   function.
 **********************************************************************/
void test_xxx() {
	// TODO: 11a. Implement this function, using it to test the NEXT
	// function. Write the two functions in whichever order you prefer.
	xxx(7);
}

/***********************************************************************
 * xxx(int r):
 *   Prints an X-shaped pattern, with 2r rows.
 *   (That is TWICE r.)
 *
 *   For example, when r = 7:
 *   1            1
 *    2          2
 *     3        3
 *      4      4
 *       5    5
 *        6  6
 *         77
 *         77
 *        6  6
 *       5    5
 *      4      4
 *     3        3
 *    2          2
 *   1            1
 *
 * Ask if you don't see the pattern we are trying to describe.
 *
 * Precondition: The argument is positive.
 **********************************************************************/
void xxx(int r) {
	// TODO: 11b. Implement and test this function.
	//           MAKE A PROTOTYPE for it, too.
	int a, b, c, d, e, f, g, h, k, i;
	for (a = 0; a < r; a++) {
		for (b = 0; b < a; b++) {
			printf(" ");
		}
		for (c = 0; c < 1; c++) {
			printf("%i", a + 1);
		}
		for (d = 0; d < 2 * r - (a + 1) * 2; d++) {
			printf(" ");
		}
		for (e = 0; e < 1; e++) {
			printf("%i", a + 1);
		}

		printf("\n");
	}
	for (k = 0; k < r; k++) {
		for (f = 0; f < r-k-1; f++) {
			printf(" ");
		}
		for (g = 0; g < 1; g++) {
			printf("%i", r - k);
		}
		for (h = 0; h < 2 * k; h++) {
			printf(" ");
		}
		for (i = 0; i < 1; i++) {
			printf("%i", r - k);
		}
		printf("\n");

	}

}
