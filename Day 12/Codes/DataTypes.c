#include<stdio.h>
int main(){
        int age=10;
        printf("%d\n",age);
        printf("size: %zu\n", sizeof(age));

        double number=12.45;
        printf("%lf\n",number);
        printf("%.2lf\n",number);

        float number1=10.9f;
        printf("%f\n",number1);
        printf("%.1f\n",number1);

        char letter='D';
        printf("%c\n",letter);
        printf("\n%d\n",letter);

return 0;
}