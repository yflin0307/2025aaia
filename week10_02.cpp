#include <stdio.h>
int main(){
   printf("�п�J1�ӥ����: ");
   int n;
   scanf("%d", &n);
   ///printf("�Ӧ�ƬO %d\n", n %10);
   ///printf("�Q��ƬO %d\n", n/10 %10);
   ///printf("�ʦ�ƬO %d\n", n/100 %10);
   while(n>0){
      printf("�Ʀr%d��֭�X:%d\n", n, n%10);
      n = n/10;
   }
}
