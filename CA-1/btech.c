include <stdio.h>

int main() {
	int choice;

	print("Menu:\n");
	print("1. Btech CSE\n");
	print("2. Btech Mechanical\n");
	print("3. Btech AIML\n");
	print("4. Btech Electrical\n");
	scanf("%d",&choice);

	switch(choice) {
            case1:
		printf("You have chosen Btech CSE\n");
		break;
		return 0;
	    case2:
		printf("you have chosen btech mechanical\n")
	    case3:
	        printf("you have chosen btech aiml\n")
	    default:
		printf("invalid choice!\n");
	}
	return 0;
} 
