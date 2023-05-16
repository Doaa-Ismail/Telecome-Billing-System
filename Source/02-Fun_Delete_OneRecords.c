/**********************************************************************************************************************************************/
/*** Files Responsible to Implematation Function that Will Used in Application.                                                        		***/
/**********************************************************************************************************************************************/
/*** Implematation Fun_Delete_OneRecords() that Responsible Delete One Data of User.											     		***/
/*** With User Information : Name, Phone Number and Amount of payment. 																		***/
/*** That Asking User to Enter His Phone Number to Search it at Database file to be Deleted. 												***/
/*** That Once User Enter His valid/exist Phone Number to will be Deleted From Our Database. 							 					***/
/**********************************************************************************************************************************************/


/*
	Start Implemation Fun_Delete_OneRecords():
	1- Accessing Files (ablity to read - write - append) operations by Using External Function fopen 
		fopen allows you to open any file and edit or read or write on this file
		1.1- For Read Operation from File use 'rb' Parameter at Function fopen 
		1.2- For Write/Over Write Operation at File use 'wb+' Parameter at Function fopen
		1.3- For Write/Append Operation at File Add New line for example use 'ab+' Parameter at Function fopen
	2- Using FILE Function to Define ptr Database_File and temp_File Variables.
	3- Asking User to Enter his Phone Number 
		3.1- Check on his Phone Number if Exist/Found or No 
	4- Once Find Phone Number will be deleted his Data from Database file by help Temp file
*/

void Fun_Delete_OneRecords()
{
	FILE *Database_File,*temp_File;										// Use Function Files to Define file of Database and Temp file to be able doing Read-Write-Append functions on File
	u16 Check_flag=0;													// Define 'Check_flag' Variable as Unsigned Short Int Type.
	u8 Input_phonenumber[20];											// Define Array of Char Type to User Input as Unsigned Char Data Type.
	if((temp_File=fopen("Database/temp.ojs","w+"))==NULL)				// Check on Temp file is Found or No, If No: Creating Temp file by Using fopen Function. 
		exit(0);												
	if((Database_File=fopen("Database/file.ojs","rb"))==NULL)			// Check on Database_File is Found or No, If No: Back to Home Page. 
		exit(0);														// Back to Home Page
	system("cls");														// Clear Window
	printf("Please Enter the Phone Number to be deleted from the Database: ");	// Print out Information for User Interface Asking him to Enter Phone Number to Delete it.
	fflush(stdin);																// Functin fflush used to clear the stream/buffer. 
	scanf("%[^\n]",Input_phonenumber);											// Get From User Input 'Phone Number' and Assign it into Input_phonenumber Array of Char Type.
	while(fread(&New_Subscriber,sizeof(New_Subscriber),1,Database_File)==1)		// Check and looping on Database File at Colume One that at 'New_Subscriber.PhoneNumber' is == User Input or No.
	{
		if(strcmp(New_Subscriber.PhoneNumber,Input_phonenumber)==0){ 	// If New_Subscriber.PhoneNumber is the same User Input Phone Number that Find at Database.
			Check_flag=0;												// Set Flag False. 
			continue;													// Continue, Looping and Searching on User Input.  
		}
		else{															// If New_Subscriber.PhoneNumber is not the same User Input Phone Number: Make Copy from Database file to Temp File.
			Check_flag=1;												// Set Flag True. 
			fwrite(&New_Subscriber,sizeof(New_Subscriber),1,temp_File);	// Write Data at Temp file. to avoid any mistakes may be ouccer at Original File of Database.
		}
	}
	if(Check_flag==1)													// Check on Flag if == 1 >> Meaning the User Input Not found at Database File.
	{   
		system("cls");													// Clear Window.
		printf("Phone number \"%s\" Not found at Our Database",Input_phonenumber);	// Print out Information for User Interface that his Input Not Valid
		remove("Database/file.ojs");									// Remove and Rename Tempfile to Database file. 
		rename("Database/temp.ojs","Database/file.ojs");				// Remove and Rename Tempfile to Database file.
		getch();														// Function Used to pauses the Output Console until a key is pressed.
		fclose(Database_File);											// Close Database_File File by Function fclose.
		fclose(temp_File);												// Close temp_File File by Function fclose.
	}
	remove("Database/file.ojs");										// Remove and Rename Tempfile to Database file.
	rename("Database/temp.ojs","Database/file.ojs");					// Remove and Rename Tempfile to Database file.
	system("cls");														// Clear Window.
	printf("The Number %s Successfully Deleted!!!!",Input_phonenumber);	// Print out Information for User Interface that his Data Deleted from Database File.
	fclose(Database_File);												// Close Database_File File by Function fclose.
	fclose(temp_File);													// Close temp_File File by Function fclose.
	getch();															// Function Used to pauses the Output Console until a key is pressed.
}
// End 'Fun_Delete_OneRecords' Function.