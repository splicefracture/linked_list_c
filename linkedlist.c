/************************************************\
 * Filename    : linkedlist.c                     *
 * Author      : Alec Prassinos                   *
 * Date        : 12/8/03                          *
 \************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#include "linkedlist.h"


NODEPTR CreateNode (void)
{
   NODEPTR newNode;
   
   newNode = (NODEPTR) malloc (sizeof(NODE));
   if (newNode == NULL)
   {
      fprintf (stderr, "Out of Memory - CreateNode\n");
      exit (-1);
   }

   newNode -> data = 0;   
   newNode -> id   = 0; 
   newNode -> next = NULL;

   return newNode;
}

void SetData (NODEPTR temp, ATTRACTION value)
{
   temp -> data = value;
} 

void Insert (NODEPTR* headPtr, NODEPTR temp)
{
	NODEPTR prev, curr;

	if ( IsEmpty (*headPtr)){
      
		*headPtr = temp;
	
	} else {
	   
		prev = NULL;
		curr = *headPtr;
		
		while (curr != NULL){
			prev = curr;
			curr = curr -> next;
		}  
		prev -> next = temp;
	}
}

void Delete (NODEPTR* headPtr, int target)
{
   int value;
	NODEPTR temp, prev, curr;

	if (IsEmpty (*headPtr)){
		fprintf (stderr, "Can't delete from an empty list\n");      
	}else if (target ==  (*headPtr)->id){
	   
		temp = *headPtr;
		int = (*headPtr)->id;
		*headPtr = (*headPtr)->next;
		free (temp);    
	}else{
		
		prev = *headPtr;
		curr = (*headPtr) -> next;

		while (curr != NULL && target !=  (*headPtr)->id ){
			prev = curr;
			curr = curr -> next;
		}      
		if(curr != NULL){
			temp = curr;
			prev -> next = curr -> next;
			value = curr -> data.name;
			free(temp);	
		}else{
			fprintf (stderr, "%d was not in the list\n", target);
      }
   }      
}

int IsEmpty (NODEPTR head){
	
   return (head == NULL);
}


void PrintList (NODEPTR head){
	
	NODEPTR curr;

	if (IsEmpty (head)){
		fprintf (stderr, "\t\t\tNo nodes here.\n");
	} else {
		curr = head;		
		while (curr != NULL){
			printf("%d   ", curr->id);
			printf("%d   ", curr->data);
			curr = curr -> next;
		}
		printf ("\n");
	}   
}
