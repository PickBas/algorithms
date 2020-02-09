#include <stdio.h>

int logarithm(int n) {
 	int answer = 0;
 	while(n >>= 1)
 		answer++;
  	return answer;
}

int borders(int* min_number, int* max_number, int* attempts) {
	puts("Enter min number:");
	scanf("%d", min_number);
	puts("Enter max number:");
	scanf("%d", max_number);

	*attempts = logarithm(*max_number - *min_number) + 1;

	printf("I need %d attempts at most!\n", *attempts);
}

void binary_search(int* min_number, int* max_number, int* mid) {
	char ch;
	while(ch != '=') {
		*mid = *min_number + (*max_number - *min_number) / 2;
		printf("Is it %d?\n \'>\' \'<\' \'=\'\nEnter the sign: ", *mid);
		scanf(" %c", &ch);
		if (ch == '>')
			*min_number = *mid + 1;
		else if (ch == '<')
			*max_number = *mid - 1;
	}
}



int main() {
	int max_number, min_number, mid = 0, attempts;
	borders(&min_number, &max_number, &attempts);
	binary_search(&min_number, &max_number, &mid);
	printf("The answer is: %d", mid);
	return 0;
}
