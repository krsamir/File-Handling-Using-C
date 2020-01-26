# File-Handling-Using-C
A file represents a sequence of bytes on the disk where a group of related data is stored. File is
created for permanent storage of data. It is a ready made structure. 
<br>In C language, we use a structure pointer of file type to declare a file.
<br>FILE *fp;<br>
C provides a number of functions that helps to perform basic file operations. Following are the functions<br>
Function &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;description<br>
### `fopen()`&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;: create a new file or open a existing file<br>
### `fclose()`&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;: closes a file<br>
### `getc()`&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;: reads a character from a file<br>
### `putc()` &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;: writes a character to a file<br>
### `fscanf()`&nbsp;&nbsp;&nbsp;&nbsp;: reads a set of data from a file<br>
### `fprintf()`&nbsp;&nbsp;: writes a set of data to a file<br>
### `getw()`&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;: reads a integer from a file<br>
### `putw()`&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;: writes a integer to a file<br>
### `fseek()`&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;: set the position to desire point<br>
### `ftell()`&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;: gives current position in the file<br>
### `rewind()`&nbsp;&nbsp;&nbsp;: set the position to the beginning point<br>


***

Opening a File or Creating a File<br>
The **fopen()** function is used to create a new file or to open an existing file.<br>
### General Syntax:<br>
***fp = FILE *fopen(const char *filename, const char *mode);<br>**
Here, *fp is the FILE pointer (FILE *fp), which will hold the reference to the opened(or created) file.<br>

**filename** is the name of the file to be opened and **mode** specifies the purpose of opening the file.
Mode can be of following types,<br>
<br>
**Mode** &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; **Description**<br><br>
### `r` &nbsp;&nbsp;opens a text file in reading mode<br>
### `w` &nbsp;&nbsp;opens or create a text file in writing mode.<br>
### `a` &nbsp;&nbsp;opens a text file in append mode<br>
### `r+` &nbsp;opens a text file in both reading and writing mode<br>
### `w+` &nbsp;opens a text file in both reading and writing mode<br>
### `a+` &nbsp;opens a text file in both reading and writing mode<br>
### `rb` &nbsp;opens a binary file in reading mode<br>
### `wb` &nbsp;opens or create a binary file in writing mode<br>
### `ab` &nbsp;opens a binary file in append mode<br>
### `rb+` opens a binary file in both reading and writing mode<br>
### `wb+` opens a binary file in both reading and writing mode<br>
### `ab+` opens a binary file in both reading and writing mode<br>
