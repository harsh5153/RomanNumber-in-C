#include <stdio.h>
#include <conio.h>
void fun(int a ,char ones ,char fives, char tens ){

	if(a<4){
		for (int i = 0; i < a; ++i)
			printf("%c" , ones);
	}
	else if (a == 4)
		printf("%c%c",ones,fives );
	else if(a == 5)
		printf("%c" , fives);
	else{
		if(a >5 && a<9)
			printf("%c" , fives);
		fun(a-5 ,ones ,tens ,tens );
	}
}
void fourd(int a){
	fun(a , 'm' , 'V' , 'X');
}
void threed(int a){
	fun(a , 'c' , 'd' , 'm');
}
void twod(int a){
	fun(a , 'x' , 'l' , 'c');
}
void oned(int a ){
	fun(a , 'i' , 'v' , 'x');
}
int main(int argc, char const *argv[])
{
	int n , i = 0, r ,  a[5];
	printf("Enter Number\n");
	scanf("%d" , &n);
	while(n != 0){
		a[i] = n%10;
		i++;
		n /= 10;
	}
	if(i==4){
		fourd(a[i-1]);
		threed(a[i-2]);
		twod(a[i-3]);	
		}
	else if(i==3){
		threed(a[i-1]);
		twod(a[i-2]);	
		}	
	else if(i == 2)
		twod(a[i-1]);   
	oned(a[0]);    
	getch();
	return 0;
}