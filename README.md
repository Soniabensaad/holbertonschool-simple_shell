# Simple Shell Unix
<img src="https://user-images.githubusercontent.com/113900693/206433139-9aae8e85-6f66-40b4-8bca-719aeac8b33e.png"/>

**A linux command interpreter built entirely in C.**

# Simple Shell

This project is an implementation of the shell created as the final project for the C code sprint at **Holberton School**.
It is a simple UNIX shell program built in C. Supported built-in commands are listed below, otherwise this shell is capable of searching for and executing programs on the PATH.

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
nada@DESKTOP-EEV93SA:~/holbertonschool-simple_shell_new$ ./hsh
$ 
```
<img src ="https://user-images.githubusercontent.com/113900693/206433600-ca9f8c3e-5f4b-4ce5-8c34-c98195b95555.png)"/>

```
nada@DESKTOP-EEV93SA:~/holbertonschool-simple_shell_new$ ./hsh
$ /bin/ls

```
<img src="https://user-images.githubusercontent.com/113900693/206433795-80ecb1a4-1318-4fcc-9008-565b5a32351e.png"/>

```
nada@DESKTOP-EEV93SA:~/holbertonschool-simple_shell_new$ /bin/ls -l
```
<img src="https://user-images.githubusercontent.com/113900693/206434017-cca952a9-5617-4ce2-816d-2bb1aceaa823.png"/>

```
nada@DESKTOP-EEV93SA:~/holbertonschool-simple_shell_new$ pwd
```
<img src="https://user-images.githubusercontent.com/113900693/206434138-c31ef00a-cb6f-4604-879e-7e2a1583b0f3.png"/>

# Project Status:

Checked using Valgrind. No known memory leaks or bugs.

Currently there are no plans to continue working on the simple shell after completion of the project.

## Authors :
[**Nada Maaoui**](https://github.com/nadaMAoui).
[**Salma Snoussi**](https://github.com/Salma5806).
[**Sonia Ben Saâd**](https://github.com/Soniabensaad).
