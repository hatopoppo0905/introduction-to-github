#include<stdio.h>
float tasu(float a,float b);
float hiku(float a,float b);
float kake(float a,float b);
int main(void){
    int n;
    float a,b;
    printf("モードを選択してください(1.足し算2.引き算3.掛け算)\n");
    scanf("%d",&n);
    printf("1つ目の数を入力してください\n");
    scanf("%f",&a);
    printf("2つ目の数を入力してください\n");
    scanf("%f",&b);
    switch(n){
        case 1:
            printf("足し算の結果は%fです\n",tasu(a,b));
            break;
        case 2:
            printf("引き算の結果は%fです\n",hiku(a,b));
            break;
        case 3:
            printf("掛け算の結果は%fです\n",kake(a,b));
            break;
        default:
            printf("不正なモードです\n");
    }
}
float tasu(float a,float b){
    return a+b;
}
float hiku(float a,float b){
    return a-b;
}
float kake(float a,float b){
    return a*b;
}
