/* Name:Mazhar Hussain     Reg No:20MDELE098
email: 20MDELE098@uetmardan.edu.pk.*/
#include<stdio.h>

struct package{//structure defining//
    char name[50];
	float milk;
	float sugar;
	int eggs;
	float totalbalance;
	float paid;
	float remaining;
};

int main(){
	struct package customer1,customer2;//variable declaration//
	package *pointer;//pointer declaration//

    printf("for customer enter name\n milk quantity\n sugar quantity\n eggs\n total balance \n paid balance\n");
    
	printf("\n_____________________\n");
    scanf("%s %f %f %d %f %f",customer1.name,&customer1.milk,&customer1.sugar,&customer1.eggs,&customer1.totalbalance,&customer1.paid);
    printf("\n_____________________\n");
    
    customer1.remaining=customer1.totalbalance-customer1.paid;
    
	pointer=&customer1;
	
	printf(" customer 1 name is %s \n %f litres milk\n %f kgs sugar\n %d eggs\n %f is total balance\n %f paid balance\n %f remaining balance\n",	
	pointer->name,pointer->milk,pointer->sugar,pointer->eggs,pointer->totalbalance,pointer->paid,pointer->remaining);
	
	return 0;
	
}

