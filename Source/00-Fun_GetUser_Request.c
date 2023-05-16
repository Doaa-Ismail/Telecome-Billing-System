/**********************************************************************************************************************************************/
/*** Files Responsible to Implematation Function that Will Used in Application                                                        		***/
/**********************************************************************************************************************************************/
/*** Implematation Fun_GetUser_Request() that Responsible Get User Request Like Add/List/Modify/Delete/Search/Payment Operation      		***/
/*** With User Information : Name, Phone Number and Amount of payment 																		***/
/*** That Once User Write (A) Char >> Meaning User is Need to Add New Record and Saved it into Database 									***/
/*** That Once User Write (L) Char >> Meaning User is Need to List/Display All Clients Information/Records from Database  					***/
/*** That Once User Write (M) Char >> Meaning User is Need to Modify/Update his Record Depand on his Phone Number 							***/
/*** That Once User Write (P) Char >> Meaning User is Need to Pay amount and Calcuate his Credit after Payment Done  						***/
/*** That Once User Write (S) Char >> Meaning User is Need to Search on Specific Client Information at Database by Enter His Phone Number 	***/
/*** That Once User Write (D) Char >> Meaning User is Need to Delete Specific Client Information From Database by Enter His Phone Number 	***/
/**********************************************************************************************************************************************/


/*
 Start Implemation Fun_GetUser_Request:
 	1- Print out All Features that Can User Selected what he needs
 		1.1- Feature 'Add New User/Record.' by Write/input 'A' Char
		1.2- Feature 'List of All Records From Database.' by Write/input 'L' Char
		1.3- Feature 'Modify His Data/Record.' by Write/input 'M' Char
		1.4- Feature 'Payment amount of His Record.' by Write/input 'P' Char
		1.5- Feature 'Search Specific Uesr Record.' by Write/input 'S' Char
		1.6- Feature 'Delete User Record.' by Write/input 'D' Char
		1.7- Feature 'Exit System.' by Write/input 'E' char
	2- Switch Case is the bast Solution to cover all these cases 
*/

void Fun_GetUser_Request(){
        u8 choice;									// Define Variable 'choice' with Type Unsigned Char.
    	system("cls");								// Clear Window to Print Out Choices/Requests that User able to Select. 
		printf("\n Enter your Request: \n A : Add New User/Record.\n L : List of All Records From Database."); 	// Print out Information for User Interface to choise his request.
		printf("\n M : Modify His Data/Record.\n P : Payment amount of His Record.");						   	// Print out Information for User Interface to choise his request.
		printf("\n S : Search Specific Uesr Record.");														   	// Print out Information for User Interface to choise his request.
		printf("\n D : Delete User Record.\n E : Exit System. \n");											   	// Print out Information for User Interface to choise his request.
		choice=getche();							// Input Char from User and Assigned into choice variable.
		choice=toupper(choice);						// Convert it into Capital Char. 
		switch(choice)
		{
			case 'P':
				Fun_Payment_MountRecord();break; 	// Case 'P' to Cover 'Payment amount of His Record.' Request.
			case 'A':
				Fun_Add_NewRecords();break;			// Case 'A' to Cover 'Add New User/Record.' Request.
			case 'L':
				Fun_List_AllRecords();break;		// Case 'L' to Cover 'List of All Records From Database.' Request.
			case 'M':
				Fun_Modify_OneRecords();break;		// Case 'M' to Cover 'Modify His Data/Record.' Request.
			case 'S':
				Fun_Search_Records();break;			// Case 'S' to Cover 'Search Specific Uesr Record.' Request.
			case 'D':
				Fun_Delete_OneRecords();break;		// Case 'D' to Cover 'Delete User Record.' Request.
			case 'E':
				system("cls");						// Case 'E' to Cover 'Exit System.' Request.
				// Print out Information for User Interface that Program will be terminated.
				printf("\n\n\n**************************************************************");
				printf("\n\t\tTHANK YOU");			
				printf("\n\tFOR USING OUR SERVICE");
				printf("\n**************************************************************");
				Sleep(2000);						// Delay for allow User knowe that App will be terminted  
				exit(0);							// End Program
				break;								// Break While Loop.
			default:								// Default Case : Show Message to User to Select only one of these Cases 
				system("cls");						// Clear Window.
				// Print out Information for User Interface 
				printf("\n\n\n\t\t Incorrect Input Only (A,L,M,P,S,D)");	// Only accept these cases (P,A,L,M,S,D,E) charS. 
				printf("\n\t\t\tAny key to continue");						// After this will go back to home 
				getch();													// Function Used to pauses the Output Console until a key is pressed.
		}
}
// End 'Fun_GetUser_Request' Function.
