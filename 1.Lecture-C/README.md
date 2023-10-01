# Lecture 1: Introduction to Programming with C

## Welcome!

- [Hello World](#Hello-World)
- [Functions](#Functions)
- [Variables](#Variables)
- [Conditionals](#Conditionals)
- [Loops](#Loops)
- [Linux and the Command Line](#Linux-and-the-Command-Line)
- [Mario](#Mario)
- [Comments](#Comments)
- [Abstraction](#Abstraction)
- [Operators and Types](#Operators-and-Types)
- [Summing Up](#expanding-your-imagination)

## Welcome!

- In our previous session, we learned about Scratch, a visual programming language.
- Indeed, all the essential programming concepts presented in Scratch will be utilized as you learn how to program any programming language.
- Recall that machines only understand binary. Where humans write source code, a list of instructions for the computer that is human readable, machines only understand what we can now call machine code. This machine code is a pattern of ones and zeros that produces a desired effect.
- It turns out that we can convert source code into machine code using a very special piece of software called a compiler. Today, we will be introducing you to a compiler that will allow you to convert source code in the programming language C into machine code.
- Today, in addition to learning about how to code, you will be learning about how to write good code.
- Code can be evaluated upon three axes. First, correctness refers to “does the code run as intended?” Second, design refers to “how well is the code designed?” Finally, style refers to “how aesthetically pleasing and consistent is the code?”

## Hello World

- The compiler that is utilized for this course is Visual Studio Code, affectionately referred to as , which can be accessed via that same url, or simply as *VS Code.*
- One of the most important reasons we utilize VS Code is that it has all the software required for the course already pre-loaded on it. This course and the instructions herein were designed with VS Code in mind. Best always to utilize VS Code for assignments in this course.
- You can open VS Code at [cs50.dev](https://cs50.dev/).
- The compiler can be divided into a number of regions:
![IDE](https://cs50.harvard.edu/x/2023/notes/1/cs50Week1Slide017.png)
<br>Notice that there is a file explorer on the left side where you can find your files. Further, notice that there is a region in the middle called a text editor where you can edit your program. Finally, there is a command line interface, known as a CLI, command line, or terminal window where we can send commands to the computer in the cloud.
- We can build your first program in C by typing code hello.c into the terminal window. Notice that we deliberately lowercased the entire filename and included the .c extension. Then, in the text editor that appears, write code as follows:<br>
            #include <stdio.h>

            int main(void)
            {
                printf("hello, world\n");
            }
    Note that every single character above serves a purpose. If you type it incorrectly, the program will not run.

- Clicking back in the terminal window, you can compile your code by executing make hello. Notice that we are omitting .c. make is a compiler that will look for our hello.c file and turn it into a program called hello. If executing this command results in no errors, you can proceed. If not, double-check your code to ensure it matches the above.
- Now, type ./hello and your program will execute saying hello, world.
- Now, open the file explorer on the left. You will notice that there is now both a file called hello.c and another file called hello. hello.c is able to be read by the compiler: It’s where your code is stored. hello is an executable file that you can run, but cannot be read by the compiler.
- Let’s look at our code more carefully:
            #include <stdio.h>

            int main(void)
            {
                printf("hello, world\n");
            }
    Notice that our code is highlighted using syntax highlighting.

## Functions

- In Scratch, we utilized the say block to display any text on the screen. Indeed, in C, we have a function called printf that does exactly this.
- Notice our code already invokes this function:

            printf("hello, world\n");
    Notice that the printf function is called. The argument passed to printf is ‘hello, world\n’. The statement of code is closed with a ;.

- A common error in C programming is the omission of a semicolon. Modify your code as follows:

            #include <stdio.h>

            int main(void)
            {
                printf("hello, world\n");
            }
    Notice the semicolon is now gone.

- In your terminal window, run make hello. You will now be met with numerous errors! Placing the semicolon back in the correct position and running make hello again, the errors go away.
- Notice also the special symbol \n in your code. Try removing those characters and making your program again by executing make hello. Typing ./hello in the terminal window, how did your program change?
- Restore your program to the following:

            #include <stdio.h>

            int main(void)
            {
                printf("hello, world\n");
            }
    Notice the semicolon and \n have been restored.

- The statement at the start of the code #include <stdio.h> is a very special command that tells the compile that you want to use the capabilities of library called stdio.h. This allows you, among many other things, to utilize the printf function. You can read about all the capabilities of this library on the [Manual Pages](https://manual.cs50.io/).
- It turns out that CS50 has its own library called cs50.h. Let’s use this library in your program.

## Variables

- Recall that in Scratch, we had the ability to ask the user “What’s your name?” and say “hello” with that name appended to it.
- In C, we can do the same. Modify your code as follows:

            #include <cs50.h>
            #include <stdio.h>

            int main(void)
            {
                string answer = get_string("What's your name? ");
                printf("hello, %s\n", answer);
            }
    Notice that #include <cs50.h> has been added to the top of your code. The get_string function is used to get a string from the user. Then, the variable answer is passed to the printf function. %s tells the printf function to prepare itself to receive a string.

- answer is a special holding place we call a variable. answer is of type string and can hold any string within it. There are many data types, such as int, bool, char, and many others.
- Running make hello again in the terminal window, you can run your program by typing ./hello. The program now asks for your name and then says hello with your name attached.