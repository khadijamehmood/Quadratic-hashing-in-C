#include<stdio.h>
#include<conio.h>
int arr[9];
int value,key,size=9;
init()
{
	for(int i=0;i<9;i++)
	{ arr[i]=0;
			}
}
quadprobing(int key,int value)
{ int t;
   	
   	for(int i=0;i<9;i++)
   	{
   		 t=(value+i*i)%9;
   		if(arr[t]==0){
   			arr[t]=key;
   			break;
		   }
	   }

	printf("\nby using quad probing inserted %d at index %d ",key,t);
   	
}

insert(int key)
{
	int value=key%9;
	if(arr[value]==0)
	{
		arr[value]=key;
		printf("%d inserted at arr[%d]\n",key,value);
    
	}
	else
	{
	 printf("\nCollision : arr[%d] has element %d already!\n",value,arr[value]);
	 quadprobing(key,value);
	}
}
print()
{
	for(int i = 0; i < size; i++)
        printf("arr[%d] = %d\n",i,arr[i]);
}

delet(int key)
{
	value=key%9;
	arr[value]==0;
	
}
search(int key)
{
	value=key%9;
	if(arr[value]!=0){
		printf("\n%d found in hashing table",arr[value]);
	}
	else{
		printf("not found searching value");
	}
	
}



main(){
	{  int size,ch;
   printf("enter a size of an hash table ");
   scanf("%d",&size);
    
	init();
	do
	{
	  printf("\nchoose \n1.insert\n2.search\n3.delete");
	  scanf("%d",&ch);
	
	
   	switch(ch){
		case 1 :
			printf("insert a key element\n");
			scanf("%d",&key);
			insert(key);
			break;
		case 2 :
			printf("search a key element in hash table");
			scanf("%d",&key);
			search(key);
			break;
		case 3 :
			printf("\ndelete key element in hashing table");
			scanf("%d",&key);
			delet(key);
			break;
		default:
			printf("\nwrong choice");
		}
			
		}	while(ch!=0);}
}


	

