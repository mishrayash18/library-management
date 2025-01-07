#include <stdio.h>
int main() {
	 
	int choice,i=0,id,late,num,n;
	int author[100];
	int name[100];
	int ID[100];
	int borrowed[100];
	int totalbooks=0;
	int totalborrowed=0;
		
	printf("CLASS ASSIGNMENT\n\n");
	printf("GROUP LEAD->YASH MISHRA 590011609\nMEMBER1->YUVRAJ SADANA 590016909\nMEMBER2->AYUSH MANHAS 590016692\nMEMBER3->KUMAR YASH 590014094\n");
	printf("\n\nWelcome to library management system\n");
	
	
	while(1) {
		printf("\nPress the following as your choice:\n",choice == 1);
		printf("2 --> Add a book\n3 --> Borrow a book\n4 --> Return a book\n5 --> Generate report\n6 --> Exit\n");
		scanf("%d", &choice);
	
	
		
	
	
		if (choice == 2) {
			printf("enter book ID: ");
			scanf("%d", &ID[totalbooks]);
			printf("enter author ID: ");
			scanf("%d", &author[totalbooks]);
			printf("enter name ID: ");
			scanf("%d", &name[totalbooks]);
			borrowed[totalbooks]=0;
			totalbooks++;
			printf("book added successfully!\n");
		}	
	
		if (choice == 3) {
			printf("enter book ID: ");
			scanf("%d", &ID[totalbooks]);
			printf("enter author ID: ");
			scanf("%d", &author[totalbooks]);
			printf("enter name ID: ");
			scanf("%d", &name[totalbooks]);
		
			for(i=0; i<totalbooks; i++) {
				if (ID[i] == ID[id]) {
					totalbooks--;
					
					printf("book borrowed successfully!");
				}	 
				else {
					printf("this book is not availible");
				}
				
			}
		}
	
		if (choice == 4) {
			printf("enter book ID: ");
			scanf("%d", &ID[totalbooks]);
			printf("enter author ID: ");
			scanf("%d", &author[totalbooks]);
			printf("enter name ID: ");
			scanf("%d", &name[totalbooks]);
			totalbooks++;
			printf("enter the days of late submission: ");
			scanf("%d", &late);
			if(late == 0) 
			{
				printf("no penalty..");
			}
			if(late < 0)
			{
				printf("invalid");
			}
			else {
				num = late*10;
				printf("please pay a penalty of %d", num);
			}
		}
	
		if (choice == 5) {
			printf("report:\n");
			for(i=0;i<totalbooks;i++) {
				if (borrowed[i] == 0)
				{
					printf("book ID:%d , author ID:%d , name ID:%d\n", ID[i], author[i], name[i]);
				}
			}
		}
		
		if (choice == 6) {
			return 0;
		}
		
	}
return 0;
}
	



