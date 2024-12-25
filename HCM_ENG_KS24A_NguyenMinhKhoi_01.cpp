#include<stdio.h>

int main(){
	int n = 0;

	printf("nhap so phan tu mang ");
	scanf("%d", &n);
	int arr [n];
	printf("nhap gia tri cua phan tu mang\n");
	
	for(int i = 0; i < n; i++){
		printf("arr[%d]", i);
		scanf("%d",&arr[i]);
	}
	
		
		while(1){
		printf("\n");
		printf("---------------------------\n");
		printf("MENU\n");
		printf("1. nhap so phan tu va gia tri cho mang\n");
		printf("2. in ra gia tri cua cac phan tu\n");
		printf("3. tim gia tri nho nhat va lon nhat trong mang\n");
		printf("4. in ra tong cua tat ca phan tu\n");
		printf("5. them 1 phan tu vao cuoi mang\n");
		printf("6. xoa phan tu tai vi tri cu the\n");
		printf("7. sap xep lai mang theo thu tu giam dan(bubble sort)\n");
		printf("8. kiem tra phan tu do co ton tai trong mang hay khong(linear search)\n");
		printf("9. in ra toan bo so nguyen to trong mang\n");
		printf("10. sap xep mang theo thu tu tang dan(selection sort)\n");
		
		
		int choice;
		printf("\n");
		printf("hay nhap lua chon ");
		scanf("%d",&choice);
		
			switch(choice) {
			
				case 1:
					
					break;
				
				case 2:
					for(int i = 0; i < n; i++){
						printf("arr[%d]=%d ",i,arr[i]);
					}
				break;
				
				case 3:
					int max = arr[0];
    				for (int i = 0; i < n; i++) {
            				if (arr[i] > max) {
                				max = arr[i];
            				}
        				
    				}
    
   					 printf("Phan tu lon nhat trong mang la: %d\n", max);
   				break;
   				
				case 4:		
					int sum;
					
					for(int i = 0; i < n; i++){					
							sum = sum + arr[i];
					}				
				
    				printf("tong gia tri cac phan tu la %d",sum);
    			
				break;
    			
    			case 5:
    				
    				break;
    			
    				
    
    		
    		
			
			
			}
		
		}
	
	

	
	return 0;
}


