/*
 * LinkedList.c
 *
 *  Created on: 23 Feb 2024
 *      Author: Ahmed Sherif
 */

#include<stdio.h>
#include<stdlib.h>
#include<stdint.h>
#include<conio.h>
struct S_Data{
uint32_t ID;
uint8_t Name[40];
float height;
};
struct S_Node {
	struct S_Data *Student;
	struct S_Node *Next;
};
struct S_Node *gpBase = NULL ;
typedef enum{
	LL_NOERROR,
	LL_ALLOCATION_ERROR,
	LL_NULL
}LL_STATUS;
LL_STATUS addItem();
LL_STATUS getCount(uint32_t *count);
LL_STATUS removeLast();
LL_STATUS removeFirst();
//LL_STATUS insertIndex(uint8_t index);
int main(){



	return 0;
}
LL_STATUS addItem(){
	LL_STATUS status = LL_NOERROR;
	struct S_Node* newRec =(struct S_Node*)malloc(sizeof (struct S_Node));
	struct S_Node* temp;
	if(newRec)
	{
		if(gpBase)
		{
			temp =gpBase;
			while(temp -> Next)
				temp = temp -> Next;
			temp -> Next = newRec;
		}
		else
			gpBase = newRec;
		//getting the data
		newRec -> Next =NULL;
		newRec -> Student =(struct S_Data *)malloc(sizeof(struct S_Data));
		printf("----------------------------------------------------\n");
		printf("Student Name: ");
		scanf("%s\n",newRec -> Student ->Name);
		printf("Student ID: ");
		scanf("%d\n", &(newRec -> Student -> ID));
		printf("Student height: ");
		scanf("%f\n", &(newRec -> Student -> height));
		printf("----------------------------------------------------\n");
	}
	else
	{
		status = LL_ALLOCATION_ERROR;
	}
	return status;
}
LL_STATUS getCount(uint32_t *count){
	LL_STATUS status = LL_NOERROR;
	*count = 0;
	if (gpBase){
		struct S_Node* temp = gpBase;
		while(temp -> Next){
			temp = temp -> Next;
			*count += 1;
		}
	}
	else
		status = LL_NULL;
	return status;

}
LL_STATUS removeLast(){
	LL_STATUS status = LL_NOERROR;
	if (gpBase){
		struct S_Node* temp = gpBase;
		struct S_Node* prevTemp = gpBase;
		while(temp -> Next){
			prevTemp = temp;
			temp = temp -> Next;
		}
		prevTemp -> Next = NULL;
	}
	else
		status = LL_NULL;
	return status;
}
LL_STATUS removeFirst(){
	LL_STATUS status = LL_NOERROR;
	if (gpBase){
		gpBase =gpBase -> Next;
	}
	else
		status = LL_NULL;
	return status;
}


