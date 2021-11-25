# Requirements

## Introduction

Phone book application is primarily meant for keeping the records of the persons. It is estimated that there are more than 600 million mobile phone users around the world – and the number is increasing. The success of mobile phones seems easy to explain: being available anytime and anywhere.
This application contains how to add, list, modify or edit, search and delete data to/from the file. Adding new records, listing them, modifying them and updating, search for contacts saved, and deleting the phonebook records are the basic functions which make up the main menu of this Phonebook application .
Personal information such as name, gender, father’s name, phone number, citizenship number, email and address are asked while adding a record into the Phonebook. These records can then be modified, listed, searched for and removed.

## Research

[Refer to this link](https://1000projects.org/phonebook-application-c-project-report.html) --refered site

## Cost  

The schedule determines when work elements (activities) are to be completed, milestones achieved, and when the project should be completed. 

The budget determines how much each work element should cost, the cost of each level of the work breakdown schedule (WBS), and how much the total project should cost.

## Feature

Show contact Details: You can see the list of phone numbers along with their names such as contact name, Email, DOB, Gender, Citizen no. etc. using this feature. This feature shows you the contact list. All the contacts are shown one by one in a list. Add contacts: This feature allows you to add a new contact to the contacts-list of the Phonebook application.

The operations we perform here are -
``` add contact()
      view contact()
      Search contact()
      remove contact()
      update contact()
      delete contact()
```
      
## Defining Our System

The main idea of the program is to increase the awareness of working with computer systems and utilize computer resources for better result orientation. The main target behind the creation of this package is to remove the pressure from the user to learn about computer & software. It helps to maintain an automatic communication between the computer and the user. 

This Program “Phonebook application” facility the user with different records can add and search easily by using Button tools & Search options. 

## SWOT ANALYSIS

The SWOT analysis is to identify its internal *strengths* and *weaknesses*, as well as its external *opportunities* and *threats*.

## Strengths- 

It becomes easy for the user to store complete information like Name, Phone no., Mail ID, Address, etc. about his contact.

Easy for the user to just search his required contact no. by just typing name of the contact.

## Weaknesses-

Sometimes it becomes difficult to store more contacts.

It becomes even difficult to store contacts with two or more contact numbers.

## Opportunities-

Fast speed data processing.

It simplify the task and reduce the paper work.

System is very user friendly.

## Threats-

Data Leakage via Malicious Apps.

Physical threats to mobile devices most commonly refer to the loss or theft of a device.

## 4W's and 1'H

## Who

Phonebook

## What

The success of mobile phones seems easy to explain: being available anytime and anywhere.

## When

When a person want a contact details of a particular person they will see by manually & it reduces lot of work.

## Where

We can see this in every person phonebook.

## How

By creating a contact details by using add, viewing data, searching, removing,updating etc.

## High level requirements

| ID | Description | Status |
| -------- | -------- | -------- |
| Email | Giving a respective emails of a person to thier contacts. | Future |
| DOB | We can add the person DOB in Phonebook. | Future |
| Address | There is a possibility to adding a addresse's into Phonebook. | Future |
| Gender | We can declare a person whether he/she male or female. | Future |
| Parents | We can give a person mother & father names. | Future |

## Low level requirements

| ID | Description | Status |
| -------- | -------- | -------- |
| Name | We can add a name of a respective person. | Implemented |
| Phone number | Add a Phone numbers of a persons. | Implemented |

## Design

## Behavioural Diagram

**-->** Behavioral diagrams visualize, specify, construct, and document the dynamic aspects of a system. The behavioral diagrams are categorized as follows: use case diagrams, Sequence diagrams, interaction diagrams, state–chart diagrams, and activity diagrams.<br>
--> In this behavioral diagram we are used the sequence diagram to show how the phone application is visualize, specify the structure.<br>
--> In this Diagram we are taking a records as Add, List, Modify, Search, Delete records to show how the phone application structure has visualize.<br>
``` NOTE: The diagram of behavioral is keep it in image file for reference.```

## Structural Diagram

--> Structural diagrams depict the elements of a system that are independent of time and that convey the concepts of a system and how they relate to each other. The elements in these diagrams resemble the nouns in a natural language, and the relationships that connect them are structural or semantic relationships.<br>
--> The structure phonebook application has different operations as Add Contact, View Contact, Search Contact, Update Contact, Delete Contact.<br>
``` NOTE: The diagram of Structural is keep it in image file for reference.```

## Implementation

## Folder Structure
Folder         | description
-------------- | ----------------------------------------------
`inc`          | All header files
`src`          | Main source code for calculator
`test`         | All source code and data for testing purposes
`unity`        | All unity files     
`build`        | Build output(not included in git)

## TEST PLAN

## Table no- High level test plan

| **Test ID** | **Description**                                              | **Exp I/P** | **Exp O/P** | **Actual Out** |**Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  H_01       | User needs to add a person contact details.| Entered into the Phonebook application. | Entered successfully | Entered successfully | Requirement based |
|  H_02       | User can create a person contact details as name, phone number, Mail Id, Address, DOB. | Select the contact/Create the contact and add their details like name, Phone number, Mail ID, Address, DOB|Created successfully. | Created successfully | Scenario based |
|  H_03       | User can update the person contact details. | Search contact name and update the details. | Updated successfully | Updated successfully | Boundary based |

## Table no- Low level test plan

| **Test ID** | **Description**                                              | **Exp IN** | **Exp OUT** | **Actual Out** |  **Type Of Test**  |    
|-------------|--------------------------------------------------------------|------------|-------------|----------------|------------------|
|  L_01       | User can create contact name and phone number. | Entered the name and phone number. | Created successfully | Created successfully | Requirement based |
|  L_02       | User can edit the person contact details | Enter updated phone number or name of a contact. | Updated successfully | Updated successfully | Scenario based |
|  L_03       | User can remove the contact details of a person. | Entered into the person contact & delete. | Deleted successfully | Deleted successfully | Boundary based |

## M1_Application_Phonebook

[![CI](https://github.com/PenkiSaisree/M1_Application_Phonebook/actions/workflows/main.yml/badge.svg)](https://github.com/PenkiSaisree/M1_Application_Phonebook/actions/workflows/main.yml)

[![Unit_testing](https://github.com/PenkiSaisree/M1_Application_Phonebook/actions/workflows/Unit_testing.yml/badge.svg)](https://github.com/PenkiSaisree/M1_Application_Phonebook/actions/workflows/Unit_testing.yml)

[![Static code Cppcheck](https://github.com/PenkiSaisree/M1_Application_Phonebook/actions/workflows/cppcheck.yml/badge.svg)](https://github.com/PenkiSaisree/M1_Application_Phonebook/actions/workflows/cppcheck.yml)

[![Linux OS Build](https://github.com/PenkiSaisree/M1_Application_Phonebook/actions/workflows/Build_linux.yml/badge.svg)](https://github.com/PenkiSaisree/M1_Application_Phonebook/actions/workflows/Build_linux.yml)

[![Git Inspector](https://github.com/PenkiSaisree/M1_Application_Phonebook/actions/workflows/gitinspector.yml/badge.svg)](https://github.com/PenkiSaisree/M1_Application_Phonebook/actions/workflows/gitinspector.yml)

[![Windows C/C++ CI](https://github.com/PenkiSaisree/M1_Application_Phonebook/actions/workflows/windows_c-cpp.yml/badge.svg)](https://github.com/PenkiSaisree/M1_Application_Phonebook/actions/workflows/windows_c-cpp.yml)

## Conclusion

Here the language used is C language and this application is used to search, delete, modify and some functions which is used to remember our family and friends details more easily.
