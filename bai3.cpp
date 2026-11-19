#include<stdio.h>
#include<stdlib.h>
typedef struct    {
    char hoten[30];
    int masv;
    float d1, d2, d3;
}Data;
void nhap(Data *x){
    printf("Nhap ma sv: ");
    scanf("%d", &(x->masv));
    if(x->masv > 0){
        printf("Nhap ho ten: ");
        scanf("%s", (x->hoten));
        printf("Nhap diem mon 1: ");
        scanf("%f", &(x->d1));
        printf("Nhap diem mon 2: ");
        scanf("%f", &(x->d2));
        printf("Nhap diem mon 3: ");
        scanf("%f", &(x->d3));
    }
}
void in(Data x){
    printf("Ten: %s, Ma: %d, Diem 1: %.2f, Diem 2: %.2f, Diem 2: %.2f\n", 
            x.hoten, x.masv, x.d1, x.d2, x.d3);
}
int main(){
	int n;
	printf("So sinh vien: ");
	scanf("%d", &n);
	Data* SV = (Data*) calloc(n, sizeof(Data));
	for (int i=0; i<n; i++){
		nhap(&SV[i]);
	}
	for (int i=0; i<n; i++){
		in(SV[i]);
	}
}
