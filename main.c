
#include <stdio.h>

int main() {
    float dtb, drl;

    scanf("%f", &dtb);
    scanf("%f", &drl);

 
    if (dtb >= 9 && dtb <= 10) {
        printf("XUAT_SAC");
    } else if (dtb >= 8 && dtb < 9) {
        printf("GIOI");
    } else if (dtb >= 7 && dtb < 8) {
        printf("TRUNG_BINH");
    } else {
        printf("KHONG_DAT");
    }


    if (drl >= 90) {
        printf("XUAT_SAC");
    } else if (drl >= 80 && drl < 90) {
        printf("TOT\n");
    } else if (drl >= 70 && drl < 80) {
        printf("KHA\n");
    } else {
        printf("KHONG_DAT");
    }

 
    if (dtb >= 9 && dtb <= 10 && drl >= 90) {
        printf("HOC_BONG_XUAT_SAC");

    } else if (
        (dtb >= 8 && dtb < 9 && drl >= 80) ||
        (dtb >= 9 && dtb <= 10 && drl >= 80 && drl < 90)
    ) {
        printf("HOC_BONG_GIOI");

    } else if (
        (dtb >= 7 && dtb < 8 && drl >= 70) || (dtb >= 8 && dtb < 9 && drl >= 70 && drl < 80) ||(dtb >= 9 && dtb <= 10 && drl >= 70 && drl < 80)
    ) {
        printf("HOC_BONG_KHA");

    } else {
        printf("KHONG_DAT");
    }

    return 0
}
