#include<stdio.h>
int main(){
	int ch;
	printf("enter 1 for tea enter 2 for coffee enter 3 for cold drink");
	printf("enter choice");
	scanf("%d", &ch);
	
	switch (ch){
		case 1:
			   printf("enjoy your t");
			   break;
		case 2:
			   printf("enjoy your coffee");
			   break;
		case 3:
			   printf("enjoy your drink");
			   break;
		case 4:
			   printf(" invalid");
			   break;
		
	}
	return 0;	
}
