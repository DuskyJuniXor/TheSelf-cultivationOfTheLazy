#include <stdio.h>
#define N 100

int main(int argc, char **argv){
	
	int add1 = 0, add2 = 0;
	int i = 0;

	while(argv[1][i] != '\0'){
		add1 = add1 * 10 + (int)(argv[1][i]) - 48;
		i++;
	}
	i = 0;
	while(argv[2][i] != '\0'){
		add2 = add2 * 10 + (int)(argv[2][i]) - 48;
		i++;
	}
	
	printf("%d\n", add1 + add2);

	return 0;
}
