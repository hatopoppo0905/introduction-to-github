#include<stdio.h>
int main(){
    int n;
    float a,b;
    printf("モードを選択してください(1.足し算2.引き算3.掛け算)\n");
scanf("%d",./&n);
    printf("1つ目の数を入力してください\n");
    scanf("%f",&a);
    printf("2つ目の数を入力してください\n");
    scanf("%f",&b);
    if(n==1){
        printf("足し算の結果は%fです\n",a+b);
    }else if(n==2){
        printf("引き算の結果は%fです\n",a-b);
    }else if(n==3){
        printf("掛け算の結果は%fです\n",a*b);
    }else{
        printf("不正なモードです\n");
    }
    return 0;
}