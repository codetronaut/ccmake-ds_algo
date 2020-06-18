# include <stdio.h>
#include <stdlib.h>
#include "libraries/libr.h"

int input() 
{ 
    int number; 
    scanf("%d", &number); 
    return (number); 
} 
void exit(int return_code);

int main(void)
{
    float result; int inner_choice;
   
    int choice, num; 
    
    do{
    printf("\nChoose Options for Programmes in C in following Topic...\n\n ");
    printf("Press 1 for Anagram \n"); 
    printf("Press 2 for Stacks\n"); 
    printf("Press 3 for Queues\n"); 
    
    printf("Graphics\n"); 
    //https://stackoverflow.com/questions/57442902/undefined-reference-to-graphics-h-functions-in-ubuntu-19-04-in-clion-ide

    printf("Press 21 for Bresenham  Line Drawing Algortihm \n"); 

    printf("\nLinked Lists\n");
    printf("Press 4 for Single Linked List\n"); 
    printf("Press 5 for Double Linked List\n"); 
    printf("Press 6 for Infix to Postfix\n");     
    printf("Press 7 for Infix to Prefix\n"); 
    
    printf("\nTrees\n");
    printf("Press 8 for Binary Search Tree(Non Recursive)\n"); 
    printf("Press 9 for Binary Search Tree(Recursive)\n"); 
    printf("Press 10 for Threaded Binary Tree(TBT)\n"); 
    printf("Press 11 for AVL Tree\n"); 
    printf("Press 12 for Breadth First Search(BFS)\n"); 
    printf("Press 13 for Depth First Search(DFS)\n"); 
    
    printf("\nMethod of Searches\n");
    printf("Press 14 for Linear Search\n"); 
    printf("Press 15 for Binary Search\n"); 
    printf("\nTypes of Sorting Operation\n");
    printf("Press 16 for Selection Sort\n"); 
    printf("Press 17 for Bubble Sort\n"); 
    printf("Press 18 for Quick Sort\n"); 
    printf("Press 19 for Insertion Sort\n"); 
    printf("Press 20 for Shell Sort\n");
    printf("Press 0 for exit...");
    


    printf("Enter your choice:\n"); 
    choice = input(); 
    
    switch (choice) { 
    case 1: { 
        printf("Anagram\n"); 
        //anagram();
        break; 
    } 
    case 2: { 
        printf("Stacks\n"); 
        //stack_n();
        break; 
    } 
    case 3: { 
        printf("Queues");
        printf("For Normal Queue press 1\n");
        printf("For Circular Queue press 2\n"); 
        scanf("%d",&inner_choice);
        if(inner_choice == 1)
        {
            //circular_queue();
        }
        else if(inner_choice == 2)
        {
            //general_queue();
        }
        else
        {
            printf("Enter valid option...");
            break;
        }
        
        
        break; 
    } 
    case 4: { 
        printf("Single Linked List\n"); 
        //SLL();
        break; 
    } 
    case 5: { 
        printf("Double Linked List\n"); 
        //DLL();
        break; 
    } 
    case 6: { 
        printf("Infix to Postfix\n"); 
        //in_to_post();
        break; 
    }     
    case 7: { 
        printf("Infix to Prefix\n"); 
        //in_to_pre();
        break; 
    }
    case 8:{
        printf("Binary Search Tree(Non Recursive)\n"); 
        //BST_NR();
        break;
    }    
    case 9: { 
        printf("Binary Search Tree(Recursive)\n"); 
        binary_search_with_recur();    
        break; 
    } 
    case 10: { 
        printf("Threaded Binary Tree(TBT)\n"); 
        TBT();
        break; 
    } 
    case 11: { 
        printf("AVL Tree\n"); 
        AVL();
        break; 
    }              
    case 12: { 
        printf("Breadth First Search(BFS)\n"); 

        break; 
    } 
    case 13: { 
        printf("Depth First Search(DFS)\n"); 

        break; 
    } 
    case 14: { 
        printf("Linear Search\n"); 

        break; 
    }     
    case 15: { 
        printf("Binary Search\n"); 

        break; 
    }
    case 16:{
        
        printf("Selection Sort\n"); 
        selection_sort();
        break;
    }    
    case 17: { 
        printf("Bubble Sort\n"); 
        bubble_sort();
        break; 
    } 
    case 18: { 
        printf("Quick Sort\n"); 
        quick_sort();

        break; 
    } 
    case 19: { 
        printf("Insertion Sort\n"); 
        insertion_sort();
        break; 
    }   
    case 20: { 
        printf("Shell Sort\n"); 
       // ShellSort();
        break; 
    }      
//     case 21: { 
//         printf("Bresenham  Line Drawing Algortihm\n"); 
//        bresenhem();
//         break; 
//     }      
    case 0: { 
        printf("Exiting...\n"); 
        exit(0);
       // ShellSort();
        break; 
    }      
    default: 
        printf("wrong Input\n"); 
        break;
    }
    }while(choice !=5 );
    printf("BYE!");
    return 0; 
    
 }
    
    
    
    
    
    
    
    
