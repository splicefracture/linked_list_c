/**********************************************************\
 * Filename   : linkedlist.c                    		  *
 * Author     : Alec Prassinos                  		  *
 * Date       : 12/8/03      			                  *
 \********************************************************/


typedef struct node * NODEPTR;

typedef struct node
{
	int id;
	int data;
	NODEPTR next;
}NODE;

NODEPTR CreateNode (void);
void	SetData    (NODEPTR temp, int data);
void	Insert     (NODEPTR* headPtr, NODEPTR temp);
void	Delete     (NODEPTR* headPtr, int data);
int		IsEmpty    (NODEPTR head);
void    PrintList  (NODEPTR head);
