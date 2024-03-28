#include "binary.h"
#include "boolean.h"
#include <stdio.h>



int main(void) {
	binarytree root;
	boolean quit = TRUE;
	int menu_sel, num1;

	while (!quit) {
		printf("1: Add\n");
		printf("2: Delete\n");
		printf("3: List Left\n");
		printf("4: List Right\n");
		printf("0: Quit\n");

		switch (menu_sel) {
			case 1:
				if (!is_full()) {			
					printf("Number to Add: ");
					scanf("%d", &num1);
					add(&root, num1);
				}
				else {
					printf("ERROR: Undefined\n");
				}
				break;
			case 2:
				printf("Number to delete: ");
				scanf("%d", &num1);
				
				if (!is_empty()) {
					delete(&root, num1);
				break;
			case 3:
				LNR();
				break;
			case 4:
				printf("List Right\n");
				break;
			case 0:
				quit = TRUE;
				break;
		}
	}
}
