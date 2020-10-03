#include<stdio.h>


int main(){
	int i;
	int v=1;
	int jawab;
	scanf("%d",&i);
	if( i<= v ){
		printf("%d",v);
	}
	else if(i%5 == 0){
		jawab = i/5;
		printf("%d",jawab);
		
	}
	else{
		jawab=i/5+1;
		printf("%d",jawab);
	}
		
	
		

	return 0;
}

