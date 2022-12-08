# Simple Shell Unix
<img src="C:\Users\admin\Downloads\simple_shell1.PNG">

**A linux command interpreter built entirely in C.**

# Simple Shell

This project is an implementation of the shell created as the final project for the C code sprint at **Holberton School**.
It is a simple UNIX shell program built in C. Supported built-in commands are listed below, otherwise this shell is capable of searching for and executing programs on the PATH.

## Table of contents :

 - [Description]
 - [Installation]
 - [Usage]
 - [Example]
 - [Contributors]
 - [Acknowledgements]
# Description >> e-mail:
This is a shell written in [C](https://en.wikipedia.org/wiki/C_(programming_language)).
It is based on [the Thompson Shell](https://en.wikipedia.org/wiki/Thompson_shell).

# Installation :
Simply clone the repo below and compile!
```
https://github.com/nadaMAoui/holbertonschool-simple_shell.

```
## Environment :
Created and tested with **Ubuntu 14.04 LTS**

Compiled with **GCC 4.8.4** with flags:**-Wall -Werror -Wextra -pedantic -std=gnu89**
```
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c
```
## Basic usage:
- First, [fork this repository](https://docs.github.com/en/github/getting-started-with-github/fork-a-repo).
- Then [clone it to your local machine](https://docs.github.com/en/github/creating-cloning-and-archiving-repositories/cloning-a-repository).
- Create an executable by running the following command:
- `gcc -Wall -Werror -Wextra -pedantic *.c -o hsh`
- From there, type in the following command and press your enter button.
- `./hsh`
- Final step: ENJOY IT!

# Test Compilation

<p> Created and tested with Ubuntu 14.04 LTS

Compiled with GCC 4.8.4 with flags: -Wall -Werror -Wextra -pedantic -std=gnu89</p>

```
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh
```

# Testing :

### Your shell should work like this in interactive mode:

```
$ ./hsh
($) /bin/ls
hsh main.c shell.c
($)
($) exit
$
```
### But also in non-interactive mode:

```
$ echo "/bin/ls" | ./hsh
hsh main.c shell.c test_ls_2
$
$ cat test_ls_2
/bin/ls
/bin/ls
$
$ cat test_ls_2 | ./hsh
hsh main.c shell.c test_ls_2
hsh main.c shell.c test_ls_2
$
```

## Usage examples:
```
sonia@DESKTOP-B460SRL:~/holbertonschool-simple_shell$ ./hsh
$
```
<img src =""/>

```
sonia@DESKTOP-B460SRL:~/holbertonschool-simple_shell$ ./hsh
$ /bin/ls

```
<img src="C:\Users\admin\Downloads\simple_shell1.PNG">

```
sonia@DESKTOP-B460SRL:~/holbertonschool-simple_shell$ ./hsh
$ /bin/ls - l
```
<img src="C:\Users\admin\Downloads\simple_shell1.PNG">

```
sonia@DESKTOP-B460SRL:~/holbertonschool-simple_shell$ ./hsh
$ pwd
```
<img src="C:\Users\admin\Downloads\simple_shell1.PNG">

# Project Status:

Checked using Valgrind. No known memory leaks or bugs.

Currently there are no plans to continue working on the simple shell after completion of the project.

## Authors :
[**Nada Maaoui**](https://github.com/nadaMAoui).
[**Salma Snoussi**](https://github.com/Salma5806).
[**Sonia Ben Saâd**](https://github.com/Soniabensaad).