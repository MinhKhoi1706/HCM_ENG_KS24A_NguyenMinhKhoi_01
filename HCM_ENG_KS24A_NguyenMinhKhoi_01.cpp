#include <stdio.h>

int main() {
    int n = 0;
    printf("Nhap so phan tu mang: ");
    scanf("%d", &n);

    int arr[n];
    printf("Nhap gia tri cho cac phan tu mang:\n");
    
    for (int i = 0; i < n; i++) {
        printf("arr[%d]: ", i);
        scanf("%d", &arr[i]);
    }

    while (1) {
        printf("\n---------------------------\n");
        printf("MENU\n");
        printf("1. Nhap so phan tu va gia tri cho mang\n");
        printf("2. In ra gia tri cua cac phan tu\n");
        printf("3. Tim gia tri nho nhat va lon nhat trong mang\n");
        printf("4. In ra tong cua tat ca phan tu\n");
        printf("5. Them 1 phan tu vao cuoi mang\n");
        printf("6. Xoa phan tu tai vi tri cu the\n");
        printf("7. Sap xep lai mang theo thu tu giam dan (bubble sort)\n");
        printf("8. Kiem tra phan tu do co ton tai trong mang hay khong (linear search)\n");
        printf("9. In ra toan bo so nguyen to trong mang\n");
        printf("10. Sap xep mang theo thu tu tang dan (selection sort)\n");

        int choice;
        printf("Hay nhap lua chon: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                break;

            case 2:
                for (int i = 0; i < n; i++) {
                    printf("arr[%d] = %d,", i, arr[i]);
                }
                break;

            case 3:
                {
                    int max = arr[0];   
					int min = arr[0];                
                    for (int i = 1; i < n; i++) {
                    	if (arr[i] < min) min = arr[i];
                        if (arr[i] > max) max = arr[i];
                        
                    }
                    printf("Gia tri lon nhat trong mang la: %d\n", max);
                    printf("Gia tri nho nhat trong mang la: %d\n", min);
                }
                break;

            case 4:
                {
                    int sum = 0;
                    for (int i = 0; i < n; i++) {
                        sum += arr[i];
                    }
                    printf("Tong gia tri cua tat ca phan tu trong mang: %d\n", sum);
                }
                break;

            case 5:
                {
                    int newValue;
                    printf("Nhap gia tri phan tu moi: ");
                    scanf("%d", &newValue);
                    arr[n] = newValue;
                    n++;
                }
                break;

            case 6:
                {
                    int index;
                    printf("Nhap vi tri can xoa: ");
                    scanf("%d", &index);
                    if (index >= 0 && index < n) {
                        for (int i = index; i < n - 1; i++) {
                            arr[i] = arr[i + 1];
                        }
                        n--;
                    } else {
                        printf("Vi tri khong hop le!\n");
                    }
                }
                break;

            case 7:
                {
                    for (int i = 0; i < n - 1; i++) {
                        for (int j = 0; j < n - 1 - i; j++) {
                            if (arr[j] < arr[j + 1]) {
                                int temp = arr[j];
                                arr[j] = arr[j + 1];
                                arr[j + 1] = temp;
                            }
                        }
                    }
                    printf("Mang sau khi sap xep giam dan: ");
                    for (int i = 0; i < n; i++) {
                        printf("arr[%d] = %d\n", i, arr[i]);
                    }
                }
                break;

            case 8:
               
                break;

            case 9:
               
                break;

            case 10:
                {
                    for (int i = 0; i < n - 1; i++) {
                        int minIndex = i;
                        for (int j = i + 1; j < n; j++) {
                            if (arr[j] < arr[minIndex]) {
                                minIndex = j;
                            }
                        }
                        if (minIndex != i) {
                            int temp = arr[i];
                            arr[i] = arr[minIndex];
                            arr[minIndex] = temp;
                        }
                    }
                    printf("Mang sau khi sap xep tang dan: ");
                    for (int i = 0; i < n; i++) {
                        printf("arr[%d] = %d\n", i, arr[i]);
                    }
                }
                break;

            default:
                printf("Lua chon khong hop le! Vui long nhap lai.\n");
                break;
        }
    }

    return 0;
}

