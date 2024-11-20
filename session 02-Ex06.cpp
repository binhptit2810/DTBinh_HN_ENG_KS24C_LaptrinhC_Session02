#include <stdio.h>

int main(){
	// Khai bao hang so PI kieu du lieu float co gia tri la 3.14
	const float PI = 3.14;
	
	// Khai bao ban kinh cua duong tron
	int bankinh = 5;
	
	// Chu vi cua hinh tron la
	float chuvi = 2 * PI * bankinh;
	
	// Khai bao dien tich cua duong tron
	float dientich = bankinh * bankinh * PI;
	
	// Chu vi cua hinh tron la
	printf("Chu vi cua hinh tron la:%.2f\n", chuvi);
	
	// Dien tich cua hinh tron la
	printf("Dien tich cua hinh tron la:%.2f\n", dientich);
		
	return 0;
	
}
