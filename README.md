# File-Handling-Using-C
A file represents a sequence of bytes on the disk where a group of related data is stored. 
File is created for permanent storage of data. It is a ready made structure. 
<br>In C language, we use a structure pointer of file type to declare a file.
<br>`FILE *fp;`<br>
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

### Opening a File or Creating a File<br>
The **fopen()** function is used to create a new file or to open an existing file.<br>
### General Syntax:<br>
** *fp = FILE *fopen(const char *filename, const char *mode);**<br>
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


***
### Closing a File <br>
The `fclose()` function is used to close an already opened file.<br>
**General Syntax :**<br>
int fclose( FILE *fp);<br>
Here fclose() function closes the file and returns zero on success, or EOF if there is an error in closing the file. 
This EOF is a constant defined in the header file stdio.h.

***
### Input/Output operation on File<br>
In the above table we have discussed about various file I/O functions to perform reading and writing
on file. <br>`getc()` and `putc()` are the simplest functions which can be used to read and write
individual characters to a file.<br>

**Code :**<br>
int main()<br>
{<br>
FILE *fp;<br>
char ch;<br>
fp = fopen("one.txt", "w");<br>
printf("Enter data...");<br>
while( (ch = getchar()) != EOF) {<br>
putc(ch, fp);<br>
}<br>
fclose(fp);<br>
fp = fopen("one.txt", "r");<br>
while( (ch = getc(fp)! = EOF)<br>
printf("%c",ch);<br>
// closing the file pointer<br>
fclose(fp);<br>
return 0;<br>
}<br>

***
### Reading and Writing to File using fprintf() and fscanf()<br><br>
#include<stdio.h><br>
struct emp<br>
{<br>
char name[10];<br>
int age;<br>
};<br>
void main()<br>
{<br>
struct emp e;<br>
FILE *p,*q;<br>
p = fopen("one.txt", "a");<br>
q = fopen("one.txt", "r");<br>
printf("Enter Name and Age:");<br>
scanf("%s %d", e.name, &e.age);<br>
fprintf(p,"%s %d", e.name, e.age);<br>
fclose(p);<br>
do<br>
{<br>
fscanf(q,"%s %d", e.name, e.age);<br>
printf("%s %d", e.name, e.age);<br>
}<br>
while(!feof(q));<br>
}<br><br>
In this program, we have created two FILE pointers and both are refering to the same file but in different modes.<br>
`fprintf()` function directly writes into the file, while `fscanf()` reads from the file, which can then be printed on 
the console using standard `printf()` function.


***
**Difference between Append and Write Mode**<br>
Write (w) mode and Append (a) mode, while opening a file are almost the same. Both are used to write in a file. 
In both the modes, new file is created if it doesn't exists already.<br><br>

The only difference they have is, when you `open` a file in the `write` mode, the file is reset, resulting<br>
in deletion of any data already present in the file. While in `append` mode this will not happen.<br>
Append mode is used to append or add data to the existing data of file(if any). Hence, when you<br>
open a file in Append(a) mode, the cursor is positioned at the end of the present data in the file.<br>

***
### Reading and Writing in a Binary File<br>
A Binary file is similar to a text file, but it contains only large numerical data. The Opening modes are mentioned 
in the table for opening modes above.<br><br>

`fread()` and `fwrite()` functions are used to read and write is a `binary file`.<br><br>

fwrite(`data-element-to-be-written`, `size_of_elements`, `number_of_elements`,`pointer-to-file`);<br>
fread() is also used in the same way, with the same arguments like fwrite() function.<br>
Below mentioned is a simple example of writing into a binary file<br><br>

const char *mytext = "The quick brown fox jumps over the lazy dog";<br>
FILE *bfp= fopen("test.txt", "wb");<br>
if (bfp)<br>
{<br>
fwrite(mytext, sizeof(char), strlen(mytext), bfp);<br>
fclose(bfp);<br>
}<br>

***
### `fseek()`, `ftell()` and `rewind()` functions<br>
* `fseek()`: It is used to move the reading control to different positions using fseek function.
* `ftell()`: It tells the byte location of current position of cursor in file pointer.
* `rewind()`: It moves the control to beginning of the file.
