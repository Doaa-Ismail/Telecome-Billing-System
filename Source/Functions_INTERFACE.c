/***************************************************************************************************************************************/
/*** File Responsible to Include Libraries & Declearation Functions that will be used in APP                                         ***/
/***************************************************************************************************************************************/
/*** 0- Fun_GetUser_Request() that Responsible Get User Request Like Add/List/Modify/Delete/Search/Payment Operation                 ***/
/***************************************************************************************************************************************/

/***************************************************************************************************************************************/
/*** 1- Fun_Add_NewRecords() that Responsible to Add New Record into Database with Name, Phone Number and Amount to be paid          ***/
/***************************************************************************************************************************************/

/***************************************************************************************************************************************/
/*** 2- Fun_List_AllRecords() that Responsible to List All Records From Database to Display Name,Phone Number and Amount to be paid  ***/
/***************************************************************************************************************************************/

/***************************************************************************************************************************************/
/*** 3- Fun_Modify_OneRecords() that Responsible to Modify Record into Database by Phone Number to Update User Data.                 ***/
/***************************************************************************************************************************************/

/***************************************************************************************************************************************/
/*** 4- Fun_Delete_OneRecords() that Responsible to Delete Record from Database by Phone Number of User.                             ***/
/***************************************************************************************************************************************/

/***************************************************************************************************************************************/
/*** 5- Fun_Search_Records() that Responsible to Search on Record data from Database by Phone Number of User.                        ***/
/***************************************************************************************************************************************/

/***************************************************************************************************************************************/
/*** 6- Fun_Payment_MountRecord() that Responsible to Payment than Calculate and Updated User data in Database.                      ***/
/***************************************************************************************************************************************/

/***************************************************************************************************************************************/
//Include From Folder LIB file Includes.h that Response to include Some Generaic C Functions. 
#include"../LIB/Includes.h"
//Include From Folder LIB file Types.h that Response to Definition Custome Data Types like int, char,..etc. 
#include"../LIB/Types.h"
//Include From Folder LIB file Data_REG.h that Response to Definition Struction (New_Subscriber) that allow User to assign His Phone Number, Name, Amount Payment.
#include"../LIB/Data_REG.h"
//Include From Folder LIB file Functions_INTERFACE.h that Response to Include My Custome Modules/Functions like Add/List/Modify/Delete/Search/Payment. 
#include"../LIB/Functions_INTERFACE.h"

/***************************************************************************************************************************************/
// Include Function '00-Fun_GetUser_Request.c' that Response to Get from User his Request: Add/Modify/List/Delete/Pay/Search. 
#include"00-Fun_GetUser_Request.c"
// Include Function '01-Fun_Add_NewRecords.c' that Response to Add New Record or Data for New Client and Saving it into Database.
#include"01-Fun_Add_NewRecords.c"
// Include Function '02-Fun_Delete_OneRecords.c' that Response to Delete User Record/ Data from Database.
#include"02-Fun_Delete_OneRecords.c"
// Include Function '03-Fun_List_AllRecords.c' that Response to List/Display All Users Record/Data from Database.
#include"03-Fun_List_AllRecords.c"
// Include Function '04-Fun_Modify_OneRecords.c' that Response to Modify/Update User Record/Data and Saving New into Database.
#include"04-Fun_Modify_OneRecords.c"
// Include Function '05-Fun_Paymenrt_MountRecord.c' that Response to Allow User Pay Credit and Update Amount Data and Saving into Database.
#include"05-Fun_Paymenrt_MountRecord.c"
// Include Function '06-Fun_Search_Records.c' that Response to Search on Specific Data of User at Database.
#include"06-Fun_Search_Records.c"
/***************************************************************************************************************************************/