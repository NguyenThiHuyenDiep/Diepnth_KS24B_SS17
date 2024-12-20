#include <stdio.h>
void menu(){
	printf("\n--------------------MENU--------------------\n");
	printf("1. Nhap vao so phan tu va tung phan tu\n");
	printf("2. In ra cac phan tu la so chan\n");
	printf("3. In ra cac phan tu la so nguyen to\n");
	printf("4. Dao nguoc mang\n");
	printf("5. Sap xep mang\n");
	printf("6. Nhap vao mot vi tri va tim kiem phan tu trong mang\n");
	printf("7. Thoat\n");
}

//Case 1
void addArray(int arr[], int *n){
	printf("Nhap so phan tu: ");
    scanf("%d", n);
    printf("Nhap cac phan tu:\n");
    for (int i = 0; i < *n; i++) {
        printf("arr[%d]=  ", i);
        scanf("%d", &arr[i]);
    }
}

//Case 2
void evenNumbers(int arr[], int n){
	printf("Cac phan tu la so chan: ");
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            printf("%d ", arr[i]);
        }
    }
}

//Case 3
void prime(int arr[], int n){
	printf("Cac phan tu la so nguyen to: ");
    for (int i = 0; i < n; i++) {
        int count = 0;
        for (int j = 1; j <= arr[i]; j++) {
            if (arr[i] % j == 0) {
                count++;
            }
        }
        if (count == 2) {
            printf("%d ", arr[i]);
        }
    }
}

//Case 4
void reverse(int arr[], int n){
	printf("Mang dao nguoc: ");
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
}

//Case 5
void sort(int arr[], int n, int pick){
	for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (pick == 1) {
                if (arr[i] > arr[j]) {
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            } else if (pick == 2) {
                if (arr[i] < arr[j]) {
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
    }
    printf("Mang sau khi sap xep: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
}

//Case 6
void search(int arr[], int n, int index){
	if (index >= 0 && index < n) {
        printf("Phan tu tai vi tri %d: %d\n", index, arr[index]);
    }else{
    	printf("vi tri khong hop le");
	}
}

int main() {
    int choose;
    int n;
    int arr[100];
    do {menu();
        printf("Lua chon cua ban: ");
        scanf("%d", &choose);
        switch (choose) {
            case 1:{
            	addArray(arr, &n);
				break;
			}
            case 2:{
            	evenNumbers(arr, n);
				break;
			}
            case 3:{
            	prime(arr, n);
				break;
			}
            case 4:{
            	reverse(arr, n);
				break;
			}
            case 5:{
            	int pick;
                    printf("Lua chon sap xep:\n");
                    printf("1. Tang dan\n");
                    printf("2. Giam dan\n");
                    printf("Lua chon cua ban: ");
                    scanf("%d", &pick);
                    sort(arr, n, pick);
				break;
			}
            case 6:{
            	int index;
                    printf("Nhap vi tri can tim: ");
                    scanf("%d", &index);
                    search(arr, n, index);
				break;
			}
            case 7:{
            	printf("Thoat chuong trinh");
				break;
			}
            default:{
            	printf("khong hop le");
				break;
			}
        }
    } while (choose != 7);
    
    return 0;
}
