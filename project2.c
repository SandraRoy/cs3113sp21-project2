#include<stdio.h>
#include<stdlib.h>
// free list
struct free
{
        int tag;
        int size;
        struct free* next;
}
struct free* f_head= NULL;
struct free* f_prev=NULL;
struct full{
        int block_head;
        int block_end;
        int block_id;
        int tag;
	char process;
        int size;
}
struct full* full_head= NULL;
struct full* full_prev=NULL;

void allocate(int n,char id)
{
	struct full* a= (struct full*)malloc(sizeof(struct full*));
	a->size =n;
	a->process=id;
	a->next=NULL;

	struct free* empty = f_head;

	while(free!=null)
	{
		if(a->size<= empty->size)
		{
			break;
		}
		empty= empty->next;
	}

	//start from the node to be filled
	if( empty!=NULL)
	{
		a->block_id= id;
		empty->size= empty->size-a->size;
		if(full_head== NULL)
		{
			full_head= a;
		}
		else
		{
			full_prev= full_head;
			while(
		}
	}


}
int main(int argc, char* argv[])
{	
	FILE* fp;
	char fit;
	int bytes;
	if(argc>= 2)
	{
		sscanf(argv[1],"%c",&fit);
		sscanf(argv[2],"%d",&bytes);
		fp= fopen(argv[3],"r");	
	}
	printf("%c\n",fit);
	printf("%d\n",bytes);

	return 0;
}
