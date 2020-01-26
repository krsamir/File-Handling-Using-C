# File-Handling-Using-C
# File Handling
A file represents a sequence of bytes on the disk where a group of related data is stored. File is
created for permanent storage of data. It is a ready made structure. 
<br>In C language, we use a structure pointer of file type to declare a file.
<br>FILE *fp;<br>
C provides a number of functions that helps to perform basic file operations. Following are the functions<br>
Function description<br>
`fopen()`&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;: create a new file or open a existing file<br>
`fclose()`&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;: closes a file<br>
`getc()`&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;: reads a character from a file<br>
`putc()` &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;: writes a character to a file<br>
`fscanf()`&nbsp;&nbsp;&nbsp;&nbsp;: reads a set of data from a file<br>
`fprintf()`&nbsp;&nbsp;: writes a set of data to a file<br>
`getw()`&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;: reads a integer from a file<br>
`putw()`&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;: writes a integer to a file<br>
`fseek()`&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;: set the position to desire point<br>
`ftell()`&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;: gives current position in the file<br>
`rewind()`&nbsp;&nbsp;&nbsp;: set the position to the beginning point<br>
