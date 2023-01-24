# Students-Databse-Project

**Overview**

This project is a simple database program that allows users to add, delete, and read entries for students. The program is written in C and includes three files: **STD.h** , **SDB.h** , and **SDB.c**.

**STD.h** defines several standard data types, such as **uint8** , **Int8** , **uint16** , and **int16**. It also defines the **bool** type and sets **false** and **true** as its possible values.

**SDB.h** defines a struct named **SimpleDb** which has 8 fields, each representing a student's ID, year, course ID and grade. It also has various functions that can be performed on this struct, like adding an entry, deleting an entry, reading an entry and so on.

**SDB.c** contains the implementation of the functions declared in **SDB.h**. It has a maximum number of students defined as 10, and a variable **num\_students** to keep track of the number of students currently in the database. The functions include adding an entry, deleting an entry, reading an entry, checking if the database is full, getting the number of entries, and checking if a specific ID already exists in the database.

**Usage**

To use this program, include the header files **STD.h** and **SDB.h** in your source code and link **SDB.c** during compilation. Then, you can call the various functions declared in **SDB.h** to add, delete, and read entries in the database.

For example, to add an entry to the database, call **SDB\_AddEntry()**. To delete an entry, call **SDB\_DeleteEntry(id)** with the appropriate student ID. To read an entry, call **SDB\_ReadEntry(id)** with the appropriate student ID.

This project is a simple one, for more complex projects you can use already available databases like MySQL, SQLite, MongoDb etc.
