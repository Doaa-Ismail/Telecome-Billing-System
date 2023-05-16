/**********************************************************************************************************************************************/
/*** Files Responsible to Implematation Function that Will Used in Application                                                        		***/
/**********************************************************************************************************************************************/
/*** Implematation Fun_List_AllRecords() that Responsible List/Display All Data of Users From Database File.					    		***/
/*** With User Information : Name, Phone Number and Amount of payment. 																		***/
/*** That Allow to Diplay All Users Data at Console.  																						***/
/**********************************************************************************************************************************************/


/*
	Start Implemation Fun_List_AllRecords():
	1- Accessing Files (ablity to read - write - append) operations by Using External Function fopen 
		fopen allows you to open any file and edit or read or write on this file
		1.1- For Read Operation from File use 'rb' Parameter at Function fopen 
		1.2- For Write/Over Write Operation at File use 'wb+' Parameter at Function fopen
		1.3- For Write/Append Operation at File Add New line for example use 'ab+' Parameter at Function fopen
	2- Using FILE Function to Define ptr Database_File as Variable.
	3- List All Data From Database to Displayed at Console 
*/

void Fun_List_AllRecords()
{
	FILE *Database_File;										// Use Function Files to Define file of Database and Temp file to be able doing Read-Write-Append functions on File
	u16 i;														// Define iteration Variable 'i' with type Usigned Short Int. 
	if((Database_File=fopen("Database/file.ojs","rb"))==NULL)	// Check on Database_File is Found or No, If No: Back to Home Page.
		exit(0);												// Back to Home Page.
	system("cls");												// Clear Window.
	printf("Phone Number\t\tUser Name\t\t\tAmount of Payment\n");// Print out Information for User Interface that Header/Tiles at First Row.
	for(i=0;i<79;i++)											// Create Loop Start from 0 to 79.
		printf("-");											// Print out (-) Symbol as line. 
	while(fread(&New_Subscriber,sizeof(New_Subscriber),1,Database_File)==1)	// Check and looping on Database File to Fatch Data from Database.
	{
		// Print out Information for User Interface: Frist Colume: User.Phone Number, Second Colume: User.Name, Third Colume: User.Amount_Paid.
		printf("\n%-10s\t\t%-20s\t\tRs. %.2f /-",New_Subscriber.PhoneNumber,New_Subscriber.Name,New_Subscriber.Amount_Paid);	
	}
	printf("\n");												// Print out New Line.
	for(i=0;i<79;i++){											// Create Loop Start from 0 to 79
		printf("-");											// Print out (-) Symbol as line. 
	}
	fclose(Database_File);										// Close Database_File File by Function fclose.
	getch();													// Function Used to pauses the Output Console until a key is pressed.
}
// End 'Fun_List_AllRecords' Function.