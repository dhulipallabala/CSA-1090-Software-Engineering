#include<stdio.h>
#include<conio.h>
void main()
{
	int E,N,P,CC;
	printf(" Program to find cyclomatice complexity: ");
	printf("Enter the no: of edges in the flow graph");
	scanf("%d",&E);
    printf("Enter the no: of Nodes in the flow graph");\
    scanf("%d",&N);
   	printf("Enter the no: of Predictable Nodes in the flow graph:");
   	scanf("%d",&P);
   	CC = E - N + (2*P);
   	printf("The cyclomatic complexity of the flow graph is : %d",CC);
   	getch();
}
