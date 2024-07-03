#include<stdio.h>
#include<stdlib.h>
int a[20];
int n,val,i,pos;
void create();
void display();
void insert();
void delete();
int main()
{
	int  choice=1;
	while(choice)
	{
	    printf("\n\n-----MENU------\n");
	    printf("1.CREATE\n");
	    printf("2.DISPLAY\n");
	    printf("3.INSERT\n");
	    printf("4.DELETE\n");
	    printf("5.EXIT\n");
	    printf("------------");
	    printf("Enter your choice\n");
	    scanf("%d",& choice);
	    switch(choice)
	    {
	    	case 1:
	    		create();
	    		break;
	    	case 2:
				display();
				break;
			case 3:
				insert();
				break;
			case 4:
				delete();
				break;
			case 5:
				exit(0);
				break;
			default:
			printf("\nInvalid choice:\n");
			break;
		}
	}
	return 0;	
}
void create()
{
	printf("\n Enter the size of the array elements:\t");
	scanf("%d",&n);
	printf("\n Enter the elements for the  array:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		
    }	
}
void display()
{
	int i;
	printf("\n The array elements are:\n");
	for(i=0;i<n;i++)
	{
		printf("%d\t",a[i]);
	}
}
    void insert()
    {
    	printf("\n Enter the position for the new element:\t");
    	scanf("%d",&pos);
    	printf("\n Enter the element to be inserted:\t");
    	scanf("%d",&val);
    	for(i=n-1;i>=pos;i--)
    	{
    		a[i+1]=a[i];
		}
		    a[pos]=val;
		    n=n+1;
	}
	void delete()
	{
		printf("\n Enter the position of the element to br deleted:\t");
		scanf("%d",&pos);
		val=a[pos];
		for(i=pos;i<n-1;i++)
	    {
			a[i]=a[i+1];
		}
		n=n-1;
		printf("\n The deleted element is=%d",val);
	}
	
