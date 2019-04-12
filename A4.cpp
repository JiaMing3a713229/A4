/* 
題目名稱:作業10
製作:呂家明 
修改/完成日期:2019/4/7
*/

#include<stdio.h>
#include<stdlib.h>

int main(void){
	int month_array[2][12]={{31,28,31,30,31,30,31,31,30,31,30,31},
							{31,29,31,30,31,30,31,31,30,31,30,31}};
	int year=0,month=0,day=0,sum=0;
	int i;

	printf("這是判斷這一天是這一年的第幾天的程式\n");
	printf("請輸入年份:");
	scanf("%d",&year);
	printf("請輸入月份:");
	scanf("%d",&month);
	printf("請輸入幾號:");
	scanf("%d",&day);
	
	//判斷是否為潤年 
	for(i=0;i<month-1;i++){

		if((year%4==0&&year%100!=0)||year%400==0){

			sum+=month_array[1][i];

		}

		else{

			sum+=month_array[0][i];

		}
	} 

	sum+=day;                 //計算天數作業06: 確認輸入的身分證號碼是否合法??  
	printf("天數為:%d天",sum);

} 
