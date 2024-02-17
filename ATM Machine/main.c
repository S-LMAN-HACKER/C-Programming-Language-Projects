/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int choice,accountbalance=1000,repeat,deposit=0,mini[10],i=0,withdraw;
    
    for(;;){
        printf("1 for Deposit \n2 for Withdraw \n3 for Balance Enquiry \n4 for Mini Statement \nPlease Select your Options: ");
        scanf("%d",&choice);
    
        switch(choice){
            case 1:
            printf("How many ruppees do you want to deposit: ");
            scanf("%d",&deposit);
            accountbalance=deposit+accountbalance;
            
            mini[i]=deposit;
            i++;
            break;
            
            case 2:
            printf("Enter amount: ");
            scanf("%d",&withdraw);
            accountbalance=accountbalance-withdraw;
            
            mini[i]=(withdraw*-1);
            break;
            
            case 3:
            printf("%d\n",accountbalance);
            break;
            
            case 4:
            for(i=0;i<10;i++){
                printf("%d\n",mini[i]);

            }
        
        }
    
    
        printf("\nDo you want to continue? Yes=1 No=2 \nPlease Enter your choice: ");
        scanf("%d",&repeat);
    
        if(repeat==2){
            
            break;
    }
    }
    return 0;
}
