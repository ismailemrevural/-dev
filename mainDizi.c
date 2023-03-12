#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
 void  kucukbulma(int array[])
{
	int enkucuk=array[0];	
	int i;															
	int n;
	for(i=0;i<n;i++)
	{
		if(enkucuk>array[i])
		{
		enkucuk=array[i];	
		}
	}
	 printf("En kucuk eleman %d",enkucuk);

}

int main() {
	int x;
	printf("Dizinin eleman Sayisini Giriniz\n");
	scanf("%d",&x);
		int  dizi[x];
	int i;
	printf("Dizinin Elemanlrini Giriniz\n");
	for(i=0;i<x;i++)
	{
		scanf("%d",&dizi[i]);
	}
		kucukbulma(dizi);

	return 0;
}
