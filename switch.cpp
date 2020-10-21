#include<stdio.h>
#include<math.h>
int main()
{
	int n,choice,rev,org,fact=1,i,arm,c,t;
	do
	{
	printf("enter your number");
	scanf("%d",&n);
	printf("\npress 1 for evenodd\n press 2 for reverse\n press 3 for palindrome\n press 4 for factorial\n press 5 for armstrong\n press 6 for prime\n");
	printf("enter your choice\n");
	scanf("%d",&choice);
	org=n;
	switch(choice)
	{
		case 1:
			{
				if(n%2==0)
			printf("\n number is even");
			else
			printf("\n number is odd");
			break;
			}
			case 2:
				{
					for(rev=0;n!=0;n/=10)
					{
						rev=rev*10+n%10;
					}
					printf("\n reverse is %d",rev);
					break;
				}
				case 3:
					{
					for(rev=0;n!=0;n/=10)
					{
						rev=rev*10+n%10;
					}	
					if(rev==org)
					printf("\n number is palindrome");
					else
					printf("\n number is not palimdrome");
					break;
					}
					case 4:
						{
							for(i=1;i<=n;i++)
							{
								fact=fact*i;
							}						
					    printf("\n factorial is %d",fact);
					    break;
						}
						
						case 5:
							{
								for(i=0;n!=0;n/=10)
								{
									i++;
								}
								n=org;
								for(arm=0;n!=0;n/=10)
								{
									arm=arm+pow((n%10),i);
								}
								if(arm==org)
								printf("\n number is armstrong");
								else
								printf("\n number is not armstrong");
								break;
							}
							case 6:
								{
									c=0;
									for(i=1;i<=n;i++)
									{
										if(n%i==0)
										{
											c++;
										}
									}
									if((c==1)||(c==2))
									printf("\n prime number");
									else
									printf("\n not prime number");
									break;
								}	
								defult:
									printf("\n your choice is invalid");
	}
	printf("\n press 1 for continue and press 0 for exit");
	scanf("%d",&t);
    }while(t==1);
	return 0;
}

