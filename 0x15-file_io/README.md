File I/O Processing 
In C we do the following
1. Creation of a new file
2. Opening 
3. Reading 
4. Writing data in the file
5. Closing a file

Functions for use
fopen() - opens a file
fclose() - closes an opened file
getc() - reads a character from file
putc() - writes a character to file
getw() - gets an integer"
putw() - writes an integer to a file
fprintf() - prints formatted output into a file
fscanf() - reads formatted input from a file
fgets() - read string of characters from a file
fputs() - writes string of characters to  a file
feof() - detects end of file marker in a single file
Steps for Processing a File
Declare a file pointer variable
open the file using fopen()
Process file with suitable function
Close the file with fclose()
