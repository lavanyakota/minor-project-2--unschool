#include<stdio.h>
#include<conio.h>
#include<string.h>
int order();
int serve();
int display();
struct order
{
    char name[50];
    int order_num;
    int food_num;
    int cost;
}p[10000];
int count1=0,count2=0,waiting=0;
int order()
{
    char option;
    int n,code,quantity,amount;
    printf("please enter your name:");
    scanf("%s",&p[count1].name);
    p[count1].order_num=10000+count1;
    printf("\n----------------------------------MENU-------------------------------------\n");
    printf("ItemCode  Description-----------------------size-----------------------price\n");
    printf("[11]      Burger-------------------------200/300gm-----------------130/260\n");
    printf("[12]      Chicken Pizza------------------12/14/16inch--------------750/975/1250\n");
    printf("[13]      Fried Chicken------------------1/4/10 pcs----------------85/320/790\n");
    printf("[14]      Grilled Chicken----------------quater/half/full----------70/140/250\n");
    printf("[15]      Noodles------------------------Half/full-----------------130/260\n");
    printf("[16]      Pasta--------------------------Half/full-----------------120/240\n");
    printf("[17]      Oreo Shake---------------------250mg---------------------180\n");
    printf("[18]      Cold Coffee--------------------250mg---------------------65\n");
    printf("[19]      Cappuccino---------------------250mg---------------------70\n");
    printf("[20]      Coke---------------------------250/500mg-----------------20/30\n");
    p[count1].food_num=n;
    p[count1].cost=0;
    p[count1].food_num=0;
    printf("How many you want to order:");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        label:
        printf("Enter choosen item code:");
        scanf("%d",&code);
        switch(code)
        {
            case 11:
            {
                printf("Enter size of burger(1.200  2.300)gm:");
                int i;
                scanf("%d",&i);
                if(i==1)
                {
                    printf("200gm of BURGER\n");
                    printf("Please Enter the quantity:");
                    scanf("%d",&quantity);
                    p[count1].food_num+=quantity;
                    p[count1].cost+=(quantity*130);
                }
                else if(i==2)
                {
                    printf("300gm of BURGER\n");
                    printf("Please Enter the quantity:");
                    scanf("%d",&quantity);
                    p[count1].food_num+=quantity;
                    p[count1].cost+=(quantity*180);
                }
                printf("Do you want to order anything else?(y/n)\n");
                scanf("%s",&option);
                if(option=='y'||option=='Y')
                {
                    goto label;
                    
                }
                break;
            }
            case 12:
            {
                printf("How many inches of Chicken Pizza(1.12  2.14  3.16)");
                int i;
                scanf("%d",&i);
                if(i==1)
                {
                    printf("12 inches CHICKEN PIZZA\n");
                    printf("Please Enter the quantity:");
                    scanf("%d",&quantity);
                    p[count1].food_num+=quantity;
                    p[count1].cost+=(quantity*750);
                }
                else if(i==2)
                {
                    printf("14 inches CHICKEN PIZZA\n");
                    printf("Please Enter the quantity:");
                    scanf("%d",&quantity);
                    p[count1].food_num+=quantity;
                    p[count1].cost+=(quantity*975);
                }
                else if(i==3)
                {
                    printf("16 inches CHICKEN PIZZA\n");
                    printf("Please Enter the quantity:");
                    scanf("%d",&quantity);
                    p[count1].food_num+=quantity;
                    p[count1].cost+=(quantity*1250);
                }
                printf("Do you want to order anything else?(y/n)\n");
                scanf("%s",&option);
                if(option=='y'||option=='Y')
                {
                    goto label;
                    
                }
                break;
            }
            case 13:
            {
                printf("How many Pieces of Fried Chicken(1.1  2.4  3.10):");
                int i;
                scanf("%d",&i);
                if(i==1)
                {
                    printf("1 Piece of FRIED CHICKEN\n");
                    printf("Please Enter the quantity:");
                    scanf("%d",&quantity);
                    p[count1].food_num+=quantity;
                    p[count1].cost+=(quantity*85);
                }
                else if(i==2)
                {
                    printf("4 Pieces of FRIED CHICKEN\n");
                    printf("Please Enter the quantity:");
                    scanf("%d",&quantity);
                    p[count1].food_num+=quantity;
                    p[count1].cost+=(quantity*320);
                }
                else if(i==3)
                {
                    printf("10 Pieces of FRIED CHICKEN\n");
                    printf("Please Enter the quantity:");
                    scanf("%d",&quantity);
                    p[count1].food_num+=quantity;
                    p[count1].cost+=(quantity*790);
                }
                printf("Do you want to order anything else?(y/n)\n");
                scanf("%s",&option);
                if(option=='y'||option=='Y')
                {
                    goto label;
                    
                }
                break;
            }
            case 14:
            {
                printf("How much plate of Grilled Chicken(1.quarter  2.half  3.full):");
                int i;
                scanf("%d",&i);
                if(i==1)
                {
                    printf("Quater plate of GRILLED CHICKEN\n");
                    printf("Please Enter the quantity:");
                    scanf("%d",&quantity);
                    p[count1].food_num+=quantity;
                    p[count1].cost+=(quantity*70);
                }
                else if(i==2)
                {
                    printf("Half plate of GRILLED CHICKEN\n");
                    printf("Please Enter the quantity:");
                    scanf("%d",&quantity);
                    p[count1].food_num+=quantity;
                    p[count1].cost+=(quantity*140);
                }
                else if(i==3)
                {
                    printf("Full plate of GRILLED CHICKEN\n");
                    printf("Please Enter the quantity:");
                    scanf("%d",&quantity);
                    p[count1].food_num+=quantity;
                    p[count1].cost+=(quantity*250);
                }
                printf("Do you want to order anything else?(y/n)\n");
                scanf("%s",&option);
                if(option=='y'||option=='Y')
                {
                    goto label;
                    
                }
                break;
            }
            case 15:
            {
                printf("How much plate of Noodles(1.half  2.full):");
                int i;
                scanf("%d,&i");
                if(i==1)
                {
                    printf("Half plate of NOODLES\n");
                    printf("Please Enter the quantity:");
                    scanf("%d",&quantity);
                    p[count1].food_num+=quantity;
                    p[count1].cost+=(quantity*130);
                }
                else if(i==2)
                {
                    printf("Full plate of NOODLES\n");
                    printf("Please Enter the quantity:");
                    scanf("%d",&quantity);
                    p[count1].food_num+=quantity;
                    p[count1].cost+=(quantity*260);
                }
                printf("Do you want to order anything else?(y/n)\n");
                scanf("%s",&option);
                if(option=='y'||option=='Y')
                {
                    goto label;
                    
                }
                break;
            }
            case 16:
            {
                printf("How much plate of Pasta(1.half  2.full):");
                int i;
                scanf("%d,&i");
                if(i==1)
                {
                    printf("Half plate of PASTA\n");
                    printf("Please Enter the quantity:");
                    scanf("%d",&quantity);
                    p[count1].food_num+=quantity;
                    p[count1].cost+=(quantity*120);
                }
                else if(i==2)
                {
                    printf("Full plate of PASTA\n");
                    printf("Please Enter the quantity:");
                    scanf("%d",&quantity);
                    p[count1].food_num+=quantity;
                    p[count1].cost+=(quantity*240);
                }
                printf("Do you want to order anything else?(y/n)\n");
                scanf("%s",&option);
                if(option=='y'||option=='Y')
                {
                    goto label;
                    
                }
                break;
            }
            case 17:
            {
                printf("250mg of OREO SHAKE\n");
                printf("Please Enter the quantity:");
                scanf("%d",&quantity);
                p[count1].food_num+=quantity;
                p[count1].cost+=(quantity*180);
                printf("Do you want to order anything else?(y/n)\n");
                scanf("%s",&option);
                if(option=='y'||option=='Y')
                {
                    goto label;
                    
                }
                break;
            }
            case 18:
            {
                printf("250mg of COLD COFFEE\n");
                printf("Please Enter the quantity:");
                scanf("%d",&quantity);
                p[count1].food_num+=quantity;
                p[count1].cost+=(quantity*65);
                printf("Do you want to order anything else?(y/n)\n");
                scanf("%s",&option);
                if(option=='y'||option=='Y')
                {
                    goto label;
                    
                }
                break;
            }
            case 19:
            {
                printf("250mg of CAPPUCCINO\n");
                printf("Please Enter the quantity:");
                scanf("%d",&quantity);
                p[count1].food_num+=quantity;
                p[count1].cost+=(quantity*70);
                printf("Do you want to order anything else?(y/n)\n");
                scanf("%s",&option);
                if(option=='y'||option=='Y')
                {
                    goto label;
                    
                }
                break;
            }
            case 20:
            {
                printf("Which amount of coke(1.250  2.500):");
                int i;
                scanf("%d",&i);
                if(i==1)
                {
                    printf("250mg of COKE\n");
                    printf("Please Enter the quantity:");
                    scanf("%d",&quantity);
                    p[count1].food_num+=quantity;
                    p[count1].cost+=(quantity*20);
                }
                else if(i==2)
                {
                    printf("500mg of COKE\n");
                    printf("Please Enter the quantity:");
                    scanf("%d",&quantity);
                    p[count1].food_num+=quantity;
                    p[count1].cost+=(quantity*30);
                }
                printf("Do you want to order anything else?(y/n)\n");
                scanf("%s",&option);
                if(option=='y'||option=='Y')
                {
                    goto label;
                    
                }
                break;
            }
            default:
            {
                printf("Invalid selection.Please select the correct item code\n");
                goto label;
            }
        }
    }
    printf("Number of Food ordered:%d\n",p[count1].food_num);
    printf("Thank you %s for your order.You bill is %d\n",p[count1].name,p[count1].cost);
    printf("please wait while we prepare food.\n");
    count1++;   
}
int serve()
{
    if(count1==0)
    {
        printf("Please order first\n");
        return;
    }

    else if(count2==count1)
    {
        printf("All are served\n");
        return;
    }
    printf("Order no. %d by %s is ready\n", p[count2].order_num, p[count2].name);
    printf("Enjoy your meal\n\n");
    count2++;
}
int display()
{
    printf("Total order taken: %d\n",count1);
    printf("Total number of order served %d\n",count2);
    printf("Number of Currently waiting to be served: %d\n",(count1-count2));
    printf("Currently preparing food for order no. %d\n\n", p[count2].order_num);
}
void main()
{
    int choice;
    printf("                welcome to Cafe Aruna          \n");
    while(choice!=4)
    {
        printf("1.Order\n");
        printf("2.Serve\n");
        printf("3.Display\n");
        printf("4.Exit the Program\n");
        scanf("%d",&choice);
        if(choice==1)
          order();
        else if(choice==2)
          serve();
        else if(choice==3)
          display();
    }
    if(choice==4)
      printf(" ");
}
