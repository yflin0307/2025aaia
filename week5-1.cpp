#include <stdio.h>

int main()
{///�}�C���ŧi4��A�̭���l��4�ӭ� �j�A��
   int a[4] = {10, 20, 30, 40};
   for(int i=0; i<4;i++){
    printf("%d ", a[i]);
   }///�q����for�j��A�q0�}�l
   printf("\n");

   a[0] = 99;///��a[0]���ȴ���99
   for(int i=0; i<4; i++){
    printf("%d ", a[i]);
   }
   printf("\n");
}
