 

#include "inverted_search.h"

int main(int argc, char *argv[])
{
    system("clear");
    
    //Validate CLA
    //If only one CLA is passed then throw an error
    if(argc == 1)
    {
	printf("Enter the valid number of arguments \n");
	printf("./SList.exe file1.txt file2.txt ..........\n");
	return 0;
    }
    //Create file list
    //Declare the file head 
    Flist *f_head = NULL;
  
    //validate the files
    file_validation_n_file_list(&f_head, argv);
    
    if(f_head == NULL)
    {
	printf("NO files are available in the file linked list\n");
	printf("Hence the process terminated\n");
	return 1;
    }

    //Prompt the user choice 

    int choice;
    char option;
    char word[WORD_SIZE];
    Wlist *head[27] = {NULL};

    do
    {
        printf("Select your choice among following options:\n1. Create Database\n2. Display Database\n3. Update Database\n4. Search\n5. Save Database\nEnter your Choice: ");
        scanf("%d", &choice);
	
        switch (choice)
        {
        
            //create    
            case 1:
 	            create_database(f_head, head); 	             
                break;        
            //display            
            case 2:
                display_database (head);
	            break;
            //update        
	        case 3:
	            update_database(head, &f_head);
	            break;
            //search        
             case 4:
 	            //clearing input buffer
	            printf("Enter the word you want to search: ");
	            scanf("%s",word);
	            search_database(head[tolower(word[0])%97],word);
	            break;
    	    //save database
    	    case 5:   
	            save_database(head);
	            break;        
	        default:
	            break;
	}
    printf("Do you want to continue (y/n): ");
	getchar();        
    scanf("%c",&option);
    } while (option == 'Y'|| option == 'y');
    
}


