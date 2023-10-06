# Lab 1: Population Growth

Determine how long it takes for a population to reach a particular size.

    $ ./population
    Start size: 100
    End size: 200
    Years: 9

# Background
Say we have a population of n llamas. Each year, n / 3 new llamas are born, and n / 4 llamas pass away.

For example, if we were to start with n = 1200 llamas, then in the first year, 1200 / 3 = 400 new llamas would be born and 1200 / 4 = 300 llamas would pass away. At the end of that year, we would have 1200 + 400 - 300 = 1300 llamas.

To try another example, if we were to start with n = 1000 llamas, at the end of the year, we would have 1000 / 3 = 333.33 new llamas. We can’t have a decimal portion of a llama, though, so we’ll truncate the decimal to get 333 new llamas born. 1000 / 4 = 250 llamas will pass away, so we’ll end up with a total of 1000 + 333 - 250 = 1083 llamas at the end of the year.

# Getting Started
Once complete, start by clicking inside your terminal window, then execute cd by itself. You should find that its “prompt” resembles the below.

$
Click inside of that terminal window and then type

mkdir population
followed by Enter in order to make a directory called population in your codespace. Take care not to overlook the space between mkdir and population or any other character for that matter!

Here on out, to execute (i.e., run) a command means to type it into a terminal window and then hit Enter. Commands are case-sensitive, so be sure not to type in uppercase when you mean lowercase or vice versa.

Now execute

cd population
to move yourself into (i.e., open) that directory. Your prompt should now resemble the below.

population/ $
Click inside of that terminal window and then type

wget https://cdn.cs50.net/2022/fall/labs/1/population.c
followed by Enter in order to download a template file called population.c in your codespace. Take care not to overlook the space between wget and the following URL, or any other character for that matter! If all was successful, you should execute

ls
and see a file named population.c. Executing code population.c should open the file where you will type your code for this lab. If not, retrace your steps and see if you can determine where you went wrong!