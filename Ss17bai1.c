#include<stdio.h>
void createArray(int *n, int *arr);
void showArray(int n, int *arr);
int arrayLength(int n, int *arr);
int elementSum(int n, int *arr, int sum);
int hugestElement(int n, int *arr, int max);
int main(){
	int choice;
	int n, arr[100];
	int length;
	int sum = 0;
	int max;
		printf("\t MENU \t\n");
 		printf("1. Enter number of element and elements: \n");
 		printf("2. Show elements in array: \n");
 		printf("3. Caculate array length: \n");
 		printf("4. Elemets sum: \n");
 		printf("5. Show the biggest element: \n");
 		printf("6. Exit \n");
 	
	 while(choice != 6 ){
		printf("Enter your choice: ");
 	    scanf("%d", &choice);
 		
		 switch (choice){
			case 1:
				createArray(&n, arr);
				break;
			case 2:				
				showArray(n, arr);
				break;
			case 3:
				arrayLength(n, arr);
				break;
			case 4:
				elementSum(n, arr, sum);
				break;
			case 5:
				hugestElement(n, arr, max);
				break;
			case 6:
				printf("Exit");
				break;	
		}
	}
}
createArray(int *n, int *arr){
	printf("Enter length: ");
	scanf("%d", n);
	for(int i=0; i < *n; i++){
		printf("[%d] = ", i);
		scanf("%d", &arr[i]);
	}
}

showArray(int n, int *arr){
	for(int i = 0; i < n; i++){
		printf("[%d] = %d\n", i, arr[i]);
	}
}

arrayLength(int n, int *arr){
	printf("Array length = %d\n", n);
}

elementSum(int n, int *arr, int sum){
	for(int i = 0; i < n; i++){
		sum += arr[i];
	}
	printf("Element summary is = %d\n", sum);
}

hugestElement(int n, int *arr, int max){
	max = arr[0];
	for(int i = 0; i < n; i++){
		if(arr[i] > max){
			max = arr[i];
		}
	}
	printf("The hugest element = %d\n", max);
}