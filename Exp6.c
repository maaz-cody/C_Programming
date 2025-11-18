/*
Name: Maaz Ismail Sayyed
UIN: 251M019
Class: FE Mechanical Engineering
Div: F(F1)
*/

#include<stdio.h>

void counter() {
	static int count = 0;
	count ++;
	printf("Count = %d\n", count);
}

int main() {
	counter();
	counter();
	counter();

	return 0;
}