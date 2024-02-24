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
char Name[40];
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
int main() {
    LL_STATUS status = addItem();
    uint32_t count;
    if (status != LL_NOERROR) {
        printf("Error adding item: %d\n", status);
        return 1;
    }
    status = getCount(&count);
    if (status != LL_NOERROR) {
        printf("Error adding item: %d\n", status);
        return 1;
    }
    printf("Count = %d",count);
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
		fflush(stdout);
		gets(newRec -> Student ->Name);
		fflush(stdin);
		printf("Student ID: ");
		fflush(stdout);
		scanf("%d", &(newRec -> Student -> ID));
		fflush(stdin);
		printf("Student height: ");
		fflush(stdout);
		scanf("%f", &(newRec -> Student -> height));
		fflush(stdin);
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
		(*count)++;
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
		free(temp);
	}
	else
		status = LL_NULL;
	return status;
}
LL_STATUS removeFirst(){
	LL_STATUS status = LL_NOERROR;
	struct S_Node* temp = gpBase;
	if (gpBase){
		gpBase =gpBase -> Next;
		free(temp);
	}
	else
		status = LL_NULL;
	return status;
}


