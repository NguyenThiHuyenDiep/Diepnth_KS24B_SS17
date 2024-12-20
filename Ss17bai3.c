#include <stdio.h>
#include <string.h>
#include <ctype.h>


int createString(char *arr, int *length);
void reverseString(char *arr, char *reverseArray);
void countCharacter(char *arr);
void compareString(char *arr);
void upperCaseString(char *arr);
void connectString(char *arr);

int main() {
    int choice, length;
    char arr[100], reverseArr[100];
		printf("\t MENU \t\n");
        printf("1. Enter string\n");
        printf("2. Reverse string\n");
        printf("3. Count character in string\n");
        printf("4. Enter new str and comepare it to the firstone\n");
        printf("5. Upper case all letter\n");
        printf("6. Enter new str and connect it to the first one\n");
        printf("7. Exit\n");
    while (choice != 7){
		printf("Enter your choice: ");
        scanf("%d", &choice);
        getchar();
        switch (choice) {
            case 1:
                createString(arr, &length);
                break;
            case 2:
                reverseString(arr, reverseArr);
                break;
            case 3:
                countCharacter(arr);
                break;
            case 4:
                compareString(arr);
                break;
            case 5:
                upperCaseString(arr);
                break;
            case 6:
                connectString(arr);
                break;
            case 7:
                break;
        }
    } 
}


int createString(char *arr, int *length) {
    printf("Enter string: ");
    fgets(arr, 100, stdin);
    fflush(stdin);
    *length = strlen(arr);
    return 0;
}

void reverseString(char *arr, char *reverseArr) {
    int length = strlen(arr);
    for (int i = 0; i < length; i++) {
        reverseArr[i] = arr[length - 1 - i];
    }
    reverseArr[length] = '\0';
    for (int i = 0; i < length; i++) {
        arr[i]=reverseArr[i];
    }
    printf("Reverse string: %s\n", reverseArr);
}

void countCharacter(char *arr) {
    int count = 1;
    for (int i = 0; i < strlen(arr); i++) {
        if (arr[i] == ' ') {
            count++;
        }
    }
    printf("Amount of elenment: %d\n", count);
}

void compareString(char *arr) {
    char compareArr[100];
    printf("Enter new string: ");
    fgets(compareArr, 100, stdin);
    fflush(stdin);
    if (strcmp(arr, compareArr) == 0) {
        printf("Equal\n");
    } 
    else {
        printf("Different\n");
    }
}

void upperCaseString(char *arr) {
    for (int i = 0; i < strlen(arr); i++) {
        arr[i] = toupper(arr[i]);
    }
    printf("String after uppercase: %s\n", arr);
}

void connectString(char *arr) {
    char connectArr[100];
    printf("Enter new str: ");
    fgets(connectArr, 100, stdin);
    fflush(stdin);
    strcat(arr, connectArr);
    printf("After connecting: %s\n", arr);
}