/**********************************************************************************************************************************************/
/*** Files Responsible to Implematation Function that Will Used in Application.                                                        		***/
/**********************************************************************************************************************************************/
/*** Implematation Fun_Add_NewRecords() that Responsible Add New Data for New User.												     		***/
/*** With User Information : Name, Phone Number and Amount of payment. 																		***/
/*** That Asking User to Enter His Phone Number and His Name and Amount to be paid. 														***/
/*** That Once User Enter His Data/Information/Records to will be Saved at Our Database. 								 					***/
/**********************************************************************************************************************************************/


/*
	Start Implemation Fun_Add_NewRecords:
 	1- Generate File for Database for ablity to read - write - append operations by Using External Function fopen 
		fopen allows you to open any file and edit or read or write on this file
		1.1- For Read Operation from File use 'rb' Parameter at Function fopen 
		1.2- For Write/Over Write Operation at File use 'wb+' Parameter at Function fopen
		1.3- For Write/Append Operation at File Add New line for example use 'ab+' Parameter at Function fopen
	2- Dont Forgat to close file after finished your operations to avoid error Occure if want to open it again or to be crashed
*/

void Fun_Add_NewRecords()
{
	FILE *Database_File;								// Use Function Files to Define file of Database to be able doing Read-Write-Append functions on File
	u8 Test_Key;										// Define 'Test_Key' Variable with type Unsigned Char.
	Database_File=fopen("Database/file.ojs","ab+");		// Use Function fopen that Assign to Database file to Our variable with parameter 'ab+'
	if(Database_File==0)								// Check if File of Database Created or No
	{   Database_File=fopen("Database/file.ojs","wb+");	// If Not Found: Create it be Use 'wb+' as parameter that allow your computer to create file at this Pass
		system("cls");									// Clear Window
		printf("Please Wait while We configure your system");// Print out Information for User Interface 
		printf("/nPress any key to continue");			// Print out Information for User Interface 
		getch();										// Function Used to pauses the Output Console until a key is pressed.
	}
	while(1)
	{
		system("cls");									// Clear Window.
        printf("\n Please Enter Phone Number: ");		// Print out Information for User Interface Asking him to Enter Phone Number.
        scanf("%s",&New_Subscriber.PhoneNumber);		// Get From User Input 'PhoneNumber' and Assign it into Structure 'New_Subscriber'.
        printf("\n Please Enter Name: ");				// Print out Information for User Interface Asking him to Enter Name.
        fflush(stdin);									// Function fflush used to clear the stream/buffer. 
        scanf("%[^\n]",&New_Subscriber.Name);			// Get From User Input 'Name' and Assign it into Structure 'New_Subscriber'.
        printf("\n Please Enter Amount to Paid: ");		// Print out Information for User Interface Asking him to Enter Amount for Payment.
        scanf("%f",&New_Subscriber.Amount_Paid);		// Get From User Input 'Amount_Paid' and Assign it into Structure 'New_Subscriber'.
		fwrite(&New_Subscriber,sizeof(New_Subscriber),1,Database_File); // Use Function fwrite to Add these Input Data as 'struct' to File 'Database'
		fflush(stdin);									// Functin fflush used to clear the stream/buffer. 
		system("cls");									// Clear Window.
		printf("One Record Successfully Added");		// Print out Information for User Interface 
		printf("\nPlease Press Esc key to Exit this Operation or For Add Other Record Press Any Other Key ");
		Test_Key=getche();								// Get From User Input Key and Assign it into 'Test_Key' Variable.
		if(Test_Key==27)								// Check if 'Test_Key' = 27 Meaning Esc Key at ASCI Code.
			break;										// Break Add Option.
	}
	fclose(Database_File);								// Close Database_File File by Function fclose. 
}
// End 'Fun_Add_NewRecords' Function.