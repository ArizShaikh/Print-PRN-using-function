#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

//Program to declare function to print prn 
#include <stdio.h>
#include <stdlib.h>

long long int x;
long long int get_prn()  //function declaration and definition
{
long long int PRN;
printf("Enter prn ");
scanf("%lld",&PRN);
return PRN;				//returns prn to main function where it is being called
}
int display_prn()
{
printf("prn : %lld",x);
}
int main()
{
x=get_prn();				//function call
display_prn();

}

