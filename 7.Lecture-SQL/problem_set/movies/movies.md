# Movies

![IMDb Logo](https://cs50.harvard.edu/x/2024/psets/7/movies/imdb.png)

## Problem to Solve

Provided to you is a file called movies.db, a SQLite database that stores data from [IMDb](https://www.imdb.com/) about movies, the people who directed and starred in them, and their ratings. Write SQL queries to answer questions about this database of movies.

## Getting Started

For this problem, you’ll use a database provided to you by CS50’s staff.

#### Download the distribution code

Log into [cs50.dev](https://cs50.dev/), click on your terminal window, and execute cd by itself. You should find that your terminal window’s prompt resembles the below:

    $

Next execute

    wget https://cdn.cs50.net/2023/fall/psets/7/movies.zip

in order to download a ZIP called movies.zip into your codespace.

Then execute

    unzip movies.zip

to create a folder called movies. You no longer need the ZIP file, so you can execute

    rm movies.zip

and respond with “y” followed by Enter at the prompt to remove the ZIP file you downloaded.

Now type

    cd movies

followed by Enter to move yourself into (i.e., open) that directory. Your prompt should now resemble the below.

    movies/ $

Execute ls by itself, and you should see 13 .sql files, as well as movies.db.

If you run into any trouble, follow these same steps again and see if you can determine where you went wrong!

## Specification

For each of the following problems, you should write a single SQL query that outputs the results specified by each problem. Your response must take the form of a single SQL query, though you may nest other queries inside of your query. You should not assume anything about the ids of any particular movies or people: your queries should be accurate even if the id of any particular movie or person were different. Finally, each query should return only the data necessary to answer the question: if the problem only asks you to output the names of movies, for example, then your query should not also output each movie’s release year.

You’re welcome to check your queries’ results against IMDb itself, but realize that ratings on the website might differ from those in movies.db, as more votes might have been cast since we downloaded the data!

- In 1.sql, write a SQL query to list the titles of all movies released in 2008.
    
    - Your query should output a table with a single column for the title of each movie.

- In 2.sql, write a SQL query to determine the birth year of Emma Stone.
    
    - Your query should output a table with a single column and a single row (not counting the header) containing Emma Stone’s birth year.
    
    - You may assume that there is only one person in the database with the name Emma Stone.

- In 3.sql, write a SQL query to list the titles of all movies with a release date on or after 2018, in alphabetical order.
    
    - Your query should output a table with a single column for the title of each movie.
    
    - Movies released in 2018 should be included, as should movies with release dates in the future.

- In 4.sql, write a SQL query to determine the number of movies with an IMDb rating of 10.0.
    
    - Your query should output a table with a single column and a single row (not counting the header) containing the number of movies with a 10.0 rating.

- In 5.sql, write a SQL query to list the titles and release years of all Harry Potter movies, in chronological order.
    
    - Your query should output a table with two columns, one for the title of each movie and one for the release year of each movie.
    
    - You may assume that the title of all Harry Potter movies will begin with the words “Harry Potter”, and that if a movie title begins with the words “Harry Potter”, it is a Harry Potter movie.

- In 6.sql, write a SQL query to determine the average rating of all movies released in 2012.
    
    - Your query should output a table with a single column and a single row (not counting the header) containing the average rating.

- In 7.sql, write a SQL query to list all movies released in 2010 and their ratings, in descending order by rating. For movies with the same rating, order them alphabetically by title.
    
    - Your query should output a table with two columns, one for the title of each movie and one for the rating of each movie.
    
    - Movies that do not have ratings should not be included in the result.

- In 8.sql, write a SQL query to list the names of all people who starred in Toy Story.
    
    - Your query should output a table with a single column for the name of each person.
    
    - You may assume that there is only one movie in the database with the title Toy Story.

- In 9.sql, write a SQL query to list the names of all people who starred in a movie released in 2004, ordered by birth year.
    
    - Your query should output a table with a single column for the name of each person.
    
    - People with the same birth year may be listed in any order.
    
    - No need to worry about people who have no birth year listed, so long as those who do have a birth year are listed in order.
    
    - If a person appeared in more than one movie in 2004, they should only appear in your results once.

- In 10.sql, write a SQL query to list the names of all people who have directed a movie that received a rating of at least 9.0.
    
    - Your query should output a table with a single column for the name of each person.
    
    - If a person directed more than one movie that received a rating of at least 9.0, they should only appear in your results once.

- In 11.sql, write a SQL query to list the titles of the five highest rated movies (in order) that Chadwick Boseman starred in, starting with the highest rated.
    
    - Your query should output a table with a single column for the title of each movie.
    
    - You may assume that there is only one person in the database with the name Chadwick Boseman.

- In 12.sql, write a SQL query to list the titles of all movies in which both Bradley Cooper and Jennifer Lawrence starred.
    
    - Your query should output a table with a single column for the title of each movie.
    
    - You may assume that there is only one person in the database with the name Bradley Cooper.
    
    - You may assume that there is only one person in the database with the name Jennifer Lawrence.

- In 13.sql, write a SQL query to list the names of all people who starred in a movie in which Kevin Bacon also starred.
    
    - Your query should output a table with a single column for the name of each person.
    
    - There may be multiple people named Kevin Bacon in the database. Be sure to only select the Kevin Bacon born in 1958.
    
    - Kevin Bacon himself should not be included in the resulting list.

## Walkthrough

[Walkthrought](https://youtu.be/v5_A3giDlQs)

## Usage

To test your queries in VS Code, you can query the database by running

    $ cat filename.sql | sqlite3 movies.db

where filename.sql is the file containing your SQL query.

You can also run

    $ cat filename.sql | sqlite3 movies.db > output.txt

to redirect the output of the query to a text file called output.txt. (This can be useful for checking how many rows are returned by your query!)

## How to Test

While check50 is available for this problem, you’re encouraged to instead test your code on your own for each of the following. You can run sqlite3 movies.db to run additional queries on the database to ensure that your result is correct.

If you’re using the movies.db database provided in this problem set’s distribution, you should find that

- Executing 1.sql results in a table with 1 column and 10,276 rows.

- Executing 2.sql results in a table with 1 column and 1 row.

- Executing 3.sql results in a table with 1 column and 110,014 rows.

- Executing 4.sql results in a table with 1 column and 1 row.

- Executing 5.sql results in a table with 2 columns and 11 rows.

- Executing 6.sql results in a table with 1 column and 1 row.

- Executing 7.sql results in a table with 2 columns and 7,192 rows.

- Executing 8.sql results in a table with 1 column and 4 rows.

- Executing 9.sql results in a table with 1 column and 19,325 rows.

- Executing 10.sql results in a table with 1 column and 3,854 rows.

- Executing 11.sql results in a table with 1 column and 5 rows.

- Executing 12.sql results in a table with 1 column and 4 rows.

- Executing 13.sql results in a table with 1 column and 182 rows.

Note that row counts do not include header rows that only show column names.

If your query returns a number of rows that is slightly different from the expected output, be sure that you’re properly handling duplicates! For queries that ask for a list of names, no one person should be listed twice, but two different people who have the same name should each be listed.

Correctness

    check50 cs50/problems/2024/x/movies

How to Submit

    submit50 cs50/problems/2024/x/movies

## Acknowledgements

Information courtesy of IMDb ([imdb.com](https://www.imdb.com/)). Used with permission.