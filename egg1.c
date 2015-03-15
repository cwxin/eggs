#include<stdio.h>

int main()
{
	int i;                           //宣告 i 為整數 
	for(i=0;i<9;++i)                //為一迴圈 i =0,2, ...,8
	{
		printf("egg-%d\n", i+1);  //print egg-1, egg-2, egg-3, ...,egg-9
	}
}
