![image](imagen/holberton_mayab.png)
<h1>0x00. C - Hello, World</h1>
Release date February 3, 2022
</p>

## Table of Contents
* [Requirements](#Requirements)
    * Output
* [Tasks](#Tasks)
    * [0-Preprocessor](###Preprocessor)
    * 1-Preprocessor
    * 2-Preprocessor
    * 3-Preprocessor
    * 4-Preprocessor
    * 5-Preprocessor
    * 6-Preprocessor
    * 100-Preprocessor
    * 101-Preprocessor
* [Author](#author)

## Requirements
 * Allowed editors: `vi`, `vim`, `emacs`
 * All your files will be compiled on `Ubuntu 20.04 LTS`<a href="https://ubuntu.com/" target="_blank"> <img height="" src="https://img.shields.io/static/v1?label=&message=Ubuntu&color=E95420&logo=Ubuntu&logoColor=E95420&labelColor=2F333A" alt="Suite CRM"></a> using `gcc`, using the options `-Wall` `-Werror` `-Wextra` and `-pedantic`
 * All your files should end with a new line
 * A `README.md` file at the root of the repo, containing a description of the repository
 * A `README.md` file, at the root of the folder of this project, containing a description of the project
 * Your code should use the `Betty` style. It will be checked using [betty-style.pl](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl) and [betty-doc.pl](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl)
 * There should be no errors and no warnings during compilation
 * You are not allowed to use system

 ## Tasks
### 0.Preprocessor
File
Write a script that runs a C file through the preprocessor and save the result into another file.
* The C file name will be saved in the variable `$CFILE`
* The output should be saved in the file `c`

File ---> [0-Preprocessor](https://github.com/UCIX210)
```
julien@ubuntu:~/c/0x00$ cat main.c 
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
    return (0);
}
julien@ubuntu:~/c/0x00$ export CFILE=main.c
julien@ubuntu:~/c/0x00$ ./0-preprocessor 
julien@ubuntu:~/c/0x00$ tail c
# 942 "/usr/include/stdio.h" 3 4

# 2 "main.c" 2


# 3 "main.c"
int main(void)
{
 return (0);
}
julien@ubuntu:~/c/0x00$ 
```