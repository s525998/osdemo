/* Pemba Sherpa
    Lab 01
    Finding length of collatz chain
*/
#include <stdio.h>

void print_step (int step);
int odd (int num);
int even (int num);
int check (int num);

int main (int argc, char* argv[])
{
	int number = 1000;
	int step = 0;
	
	while (number != 1) {
		number = check (number);
		step += 1;
	}
	 print_step (step);
}


int check (int num) {
	if (num % 2 == 0){
		num = even (num);
		return num;
	}
	else {
		num = odd (num);
		return num ;	
	}

}

int even (int num){
	return num/2;
}

int odd (int num){
	return num*3 + 1;
}

void print_step (int step){
	printf ("The number of step is: %d\n", step);
}

