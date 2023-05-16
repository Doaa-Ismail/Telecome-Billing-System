/***************************************************************************************************************************************/
/*** File Responsible to Define Prototype Function that Will Used in Application                                                     ***/
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


#ifndef FUNCTIONS_INTERFACE_H_
#define FUNCTIONS_INTERFACE_H_

/*** Define Prototype Fun_GetUser_Request() that Responsible Get User Request Like Add/List/Modify/Delete/Search/Payment Operation                  ***/
void Fun_GetUser_Request();
/*** Define Prototype Fun_Add_NewRecords() that Responsible to Add New Record into Database with Name, Phone Number and Amount to be paid           ***/
void Fun_Add_NewRecords();
/*** Define Prototype Fun_List_AllRecords() that Responsible to List All Records From Database to Display Name, Phone Number and Amount to be paid  ***/
void Fun_List_AllRecords();
/*** Define Prototype Fun_Modify_OneRecords() that Responsible to Modify Record into Database by Phone Number to Update User Data.                  ***/
void Fun_Modify_OneRecords();
/*** Define Prototype Fun_Delete_OneRecords() that Responsible to Delete Record from Database by Phone Number of User.                              ***/
void Fun_Delete_OneRecords();
/*** Define Prototype Fun_Search_Records() that Responsible to Search on Record data from Database by Phone Number of User.                         ***/
void Fun_Search_Records();
/*** Define Prototype  Fun_Payment_MountRecord() that Responsible to Payment than Calculate and Updated User data in Database.                      ***/
void Fun_Payment_MountRecord();

// Include Responsible to Define Which Libraries & Declearation Functions that will be used in APP
#include"../Source/Functions_INTERFACE.c"

#endif /* FUNCTIONS_INTERFACE_H_ */
