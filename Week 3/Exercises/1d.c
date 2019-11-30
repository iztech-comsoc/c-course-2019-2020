#include <stdio.h> 
#define LENGTH 5

double sum(int array[], int len) {
	double s = 0;
	for (int i = 0; i < len; i++) {
		s += array[i];
	}
	return s;
}

int main() {
	int notes[LENGTH] = {};
	int hours[LENGTH] = {};
	double avg = 0;
	
	for (int i = 0; i < LENGTH; i++) {
		scanf("%d %d", &notes[i], &hours[i]);
	}
	
	for (int i = 0; i < LENGTH; i++) {
		avg += notes[i] * hours[i];
	}	
	
	avg = avg / sum(hours, LENGTH);
	
	printf("avg = %f", avg);
}


