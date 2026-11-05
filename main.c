#include <stdio.h>

int main() {
  float dtb,drl,;
  scanf("%f", &dtb);
  scanf("%f", &drl);
  if (dtb >=9 && dtb <=10){
    printf("XUAT_SAC");
  }else if ( 8<=dtb && dtb <=9){
    printf("GIOI");
  }else if (7 <=dtb && dtb <=8){
    printf("TRUNG_BINH");
  }else {
    printf("KHONG_DAT");
  }
if (drl >=90){
  printf("XUAC_SAC");
}else if( 80 <=drl && drl <=90){
  printf("TOT");
}else if( 70<=drl && drl <=80){
  printf("KHA");
}else{
  printf("KHONG DAT");
}
if(dtb >=9 && dtb <=10 && drl >=90) {
  printf("HOC_BONG_XUAC_SAC");
}else if((8<=dtb && dtb <=9 && (80 <=drl && drl <=9 || drl >=90)) || (dtb >=9 && dtb <=10 && 80 <=drl && drl <=90) ) {
    printf("HOC_BONG_GIOI");
}else if((7 <=dtb && dtb <=8) && drl >=70){
  if((8<=dtb && dtb <=9 )&& ( 70<=drl && drl <=80))
  else((dtb >=9 && dtb <=10) && ( 70<=drl && drl <=80))
  printf("HOC_BONG_KHA");
}else{
  printf("KHONG_DAT");
}
return 0;
}