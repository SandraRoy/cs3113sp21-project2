#include<stdio.h>
#include<stdlib.h>
#define SIZE 50000
struct alloc{
        int head;
        int end;
        

	char process;
        int size;
};
void firstFit(int n, int fit,char block_id, struct alloc arr[])
{
	if(n<fit)
	{
		for(int i=0;i<SIZE;i++)
		{
			if(arr[i].head==0 && arr[i].end==0)
			{
				if(i==0)
				{
					arr[i].end=n;
				}
				else
				{
					arr[i].head=arr[i-1].end;
					arr[i].end=arr[i].head+n;
				}
				//strncpy(arr[i].id,block_id);	
			}

		}
	}
}
int main(int argc, char* argv[])
{	
	struct alloc num[SIZE];
	for(int i=0;i<SIZE;i++)
	{
	
		num[i].head=0;
		num[i].end=0;	
	}
	FILE* fp;
	char fit;
	char a;
	char b;
	unsigned int  c;
	int bytes;
	int r_id;
	int release;
	int available;
	int assigned;
	int find;
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
