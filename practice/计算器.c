#include <stdio.h>
int main(void){
    int a,b,c,d;
    char x;
    printf("\t\t\t计算器\n");
	printf("本计算器为简易计算器，请按照格式进行运算\n");
	printf("--------------------------------------------------\n");
    	printf("数字 运算符 数字\n");
	
	while(scanf("%d%c%d",&a,&x,&b)){
        switch(x){
            case '+':
                c=a+b;
                printf("=%d\nctrl+c退出\n",c);
            break;
            case '-':
                c=a-b;
                printf("=%d\nctrl+c退出\n",c);
            break;
            case '*':
            c=a*b;
            printf("=%d\nctrl+c退出\n",c);
            break;
            case '/':
            c=a/b;
            d=a%b;
            printf("=%d......%d\nctrl+c退出\n",c,d);
            break;
        }
    }
    printf("\n");
    return 0;
}

