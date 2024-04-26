///week10-2 輾轉相除法
///a大 b中 c小
#include <stdio.h>
int gcd(int a,int b){
    if(a==0) return b;
    if(b==0) return a;
    return gcd(b,a%b);
}
int main()
{
    printf("請輸入 a b 兩個數字: ");
    int a,b;
    scanf("%d %d",&a,&b);
    printf("最大公因數: %d\n",gcd(a,b));

}
