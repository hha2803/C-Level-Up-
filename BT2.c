#include<stdio.h>

// Viết chương trình ngày tháng năm. In ra màn hình số tuổi 

void Input(int day, int month, int year){
   
   int year_new = 2023;

    do
    {
        printf("Nhap ngay sinh:");
        scanf("%d", &day);
        printf("\n");

        printf("Nhap thang sinh:");
        scanf("%d", &month);
        printf("\n");

        
        printf("Nhap nam sinh:");
        scanf("%d", &year);
        printf("\n");
        
    } while (day <=0 && day >= 31);

    printf("Thong tin cua ban la: %d/%d/%d\n", day, month,year);
    if(month == 2 && day > 28){
            printf("Thong tin khong hop le !!!!!\n");
        }
    printf("Tuoi cua ban la:%d", year_new - year);
}


int main(int argc, char const *argv[])
{
    
    int day, month, year; 

    Input(day,month,year);
   
    return 0;
}
