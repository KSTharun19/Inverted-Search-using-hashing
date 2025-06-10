#include "inverted_search.h"

void display_database (Wlist *head[])
{
    //Printing the database
    printf("\n-----------------------------------------------------------------------------\n");
    printf("[%-5s] [%-10s] %-9s %-6s : %-20s %s\n", "Index", "Word", "FileCount", "File/s", "File Name", "Word Count");
    printf("\n-----------------------------------------------------------------------------\n");
    
    for (int i = 0 ; i < 27; i++)
    {
	Wlist* temp = head[i];
       
	//Traversing through the list till last node of Wlist
        while (temp != NULL)
        {
            printf("[%-5d] [%-10s] %-9d files  : ", i+1, temp->word, temp->file_count);
            Ltable* Thead = temp->Tlink;

	    //Traverse through link table
            while (Thead != NULL)
            {
                printf("%-20s %d\t",Thead->file_name, Thead->word_count);
                Thead = Thead->table_link;
            }
            printf("\n");           
	        //Moving temp to next node
            temp = temp->link;
        }
    }
    printf("\n-----------------------------------------------------------------------------\n");
}



