#include<stdio.h>
#include<stdlib.h>

struct Servitor{
	
	char id[20];
	char name[20];
	int wage;
	int work_hours;
	int pay;
};
int salc(struct Servitor*);

int main(void){
	
	struct Servitor servitor;
	printf("請輸入你的員工編號:");
	scanf("%s", servitor.id);
	printf("請輸入你的名子:");
	scanf("%s", servitor.name);
	printf("請輸入你的薪水:");
	scanf("%d", &servitor.wage);
	printf("請輸入你的工作時數:");
	scanf("%d", &servitor.work_hours);
	
	salc(&servitor);
	
	printf("\n\n%s的資料:---------\n", servitor.name);
	printf("id:%s\n", servitor.id);
	printf("姓名:%s\n", servitor.name);
	printf("時薪:%d\n", servitor.wage);
	printf("工作時數:%d:\n", servitor.work_hours);
	printf("薪水:%d\n", servitor.pay);
}
int salc(struct Servitor *ser){
	
	(ser->pay)=(ser->wage)*(ser->work_hours);
	
	return (ser->pay);
}
