-- Keep a log of any SQL queries you execute as you solve the mystery.

-- 1st crack at the mystery
-- Find out what table's is in the DB
.table

-- Check the schema of the crime_scene_reports table
.schema crime_scene_reports

-- Retrive the description col in the crime_scene_reports table that match the crime conditions
-- Theft of the CS50 duck took place at 10:15am at the Humphrey Street bakery. Interviews were conducted each of their interview transcripts mentions the bakery.
SELECT description FROM crime_scene_reports WHERE month = 7 AND day = 28 AND street = 'Humphrey Street';

-- Find out what table's is in the DB
.table

-- Check the schema of the bakery_security_logs table since the bakery were metioned by the witnesses
.schema bakery_security_logs

-- Retrive the data from bakery_security_logs, where the condition's match to get a sense of who exited at 10 hrs
SELECT minute, activity, license_plate FROM bakery_security_logs WHERE month = 7 AND day = 28 AND hour = 10 AND activity = "exit";

-- Since I have a sense of who exited at 10 hrs I will use the plates to Identify People and get there info
SELECT * FROM people WHERE license_plate IN (SELECT license_plate FROM bakery_security_logs WHERE month = 7 AND day = 28 AND hour = 10 AND activity = "exit");

-- Check the schema's of the DB to get a sense of how I can use the info from the above query
.schema

-- Then I used the passport_number to get all the info of passenger who was Identified to exit the bakery at 10hr
SELECT * FROM passengers WHERE passport_number IN (SELECT passport_number FROM people WHERE license_plate IN (SELECT license_plate FROM bakery_security_logs WHERE month = 7 AND day = 28 AND hour = 10 AND activity = "exit"));

-- Next I use the origin_airport_id to get all the info from airports to check what is 50ville origin_airport_id to eliminate the info I am not interested in
SELECT * FROM airports WHERE id IN (SELECT origin_airport_id FROM flights WHERE id IN (SELECT flight_id FROM passengers WHERE passport_number IN (SELECT passport_number FROM people WHERE license_plate IN (SELECT license_plate FROM bakery_security_logs WHERE month = 7 AND day = 28 AND hour = 10 AND activity = "exit"))) ORDER BY day);

-- Next I used the flight_id to get the all info from the flights table order by day and only taking info that is linke to 50ville origin_airport_id
SELECT * FROM flights WHERE id IN (SELECT flight_id FROM passengers WHERE passport_number IN (SELECT passport_number FROM people WHERE license_plate IN (SELECT license_plate FROM bakery_security_logs WHERE month = 7 AND day = 28 AND hour = 10 AND activity = "exit"))) AND origin_airport_id = 8 ORDER BY day;

-- Next I select the passport_number to prepare my shortlist of suspects.
SELECT passport_number FROM passengers WHERE passport_number IN (SELECT passport_number FROM people WHERE license_plate IN (SELECT license_plate FROM bakery_security_logs WHERE month = 7 AND day = 28 AND hour = 10 AND activity = "exit")) AND flight_id IN (11, 18, 36, 54);

-- Next I use the passport_number to get the info of my suspects that left 50ville
SELECT * FROM people WHERE passport_number IN (SELECT passport_number FROM passengers WHERE passport_number IN (SELECT passport_number FROM people WHERE license_plate IN (SELECT license_plate FROM bakery_security_logs WHERE month = 7 AND day = 28 AND hour = 10 AND activity = "exit")) AND flight_id IN (11, 18, 36, 54));

-- Tables to use next atm_transactions, bank_accounts, phone_calls
-- Get all the info from bank_accounts to get the account_number of all the suspects
SELECT * FROM bank_accounts WHERE person_id IN (SELECT id FROM people WHERE passport_number IN (SELECT passport_number FROM passengers WHERE passport_number IN (SELECT passport_number FROM people WHERE license_plate IN (SELECT license_plate FROM bakery_security_logs WHERE month = 7 AND day = 28 AND hour = 10 AND activity = "exit")) AND flight_id IN (11, 18, 36, 54)));

-- Get all the info to see the transaction of the suspects
SELECT * FROM atm_transactions WHERE account_number IN (SELECT account_number FROM bank_accounts WHERE person_id IN (SELECT id FROM people WHERE passport_number IN (SELECT passport_number FROM passengers WHERE passport_number IN (SELECT passport_number FROM people WHERE license_plate IN (SELECT license_plate FROM bakery_security_logs WHERE month = 7 AND day = 28 AND hour = 10 AND activity = "exit")) AND flight_id IN (11, 18, 36, 54))));

-- Next eliminate those who made deposit and focus on the others who had no deposit but who withdrawed money
SELECT * FROM atm_transactions WHERE account_number IN (SELECT account_number FROM bank_accounts WHERE person_id IN (SELECT id FROM people WHERE passport_number IN (SELECT passport_number FROM passengers WHERE passport_number IN (SELECT passport_number FROM people WHERE license_plate IN (SELECT license_plate FROM bakery_security_logs WHERE month = 7 AND day = 28 AND hour = 10 AND activity = "exit")) AND flight_id IN (11, 18, 36, 54)))) AND account_number NOT IN (28500762, 26013199);

-- Now that I have my suspect narrowed down to 2 people I will retrive their info to know who they are
SELECT * FROM people WHERE id IN (SELECT person_id FROM bank_accounts WHERE account_number IN (49610011, 76054385));

-- Now that I know who they are I just need to see who is the one making the most calls to ascertain who the master mind is behind it all
SELECT * FROM phone_calls WHERE caller IN (SELECT phone_number FROM people WHERE id IN (SELECT person_id FROM bank_accounts WHERE account_number IN (49610011, 76054385)));

-- Now that I know who the matser mind is , I need to get there passport_number to check where they escaped to
SELECT passport_number FROM people WHERE id IN (SELECT person_id FROM bank_accounts WHERE account_number = 49610011);

-- Finally I can determine where the master mind escaped to
SELECT * FROM airports WHERE id = (SELECT destination_airport_id INTEGER FROM flights WHERE id = (SELECT flight_id FROM passengers WHERE passport_number = (SELECT passport_number FROM people WHERE id IN (SELECT person_id FROM bank_accounts WHERE account_number = 49610011))));
-- 1st crack at the mystery


-- 2nd crack at the mystery
-- My finally answer doesn't solve the mystery so let me use the one table I neglected to get a better idea of where I went wrong
SELECT * FROM interviews WHERE year = 2023 AND month = 7 AND day = 28;

-- Below is the 3 pieces of info I should use to solve
-- Ruth - ten minutes of the theft, I saw the thief get into a car in the bakery parking lot and drive away
-- Eugene - I was walking by the ATM on Leggett Street and saw the thief there withdrawing some money
-- Raymond - they called someone who talked to them for less than a minute. In the call, I heard the thief say that they were planning to take the earliest flight out of Fiftyville tomorrow. The thief then asked the person on the other end of the phone to purchase the flight ticket.
-- With this info I can confirm that Bruce & Taylor fits Ruth & Eugene description so All that is left is to see which one of the 2 fits Raymond description

-- get the all the info from the phone_calls tab on the 28th to see who had a call less than 60sec to ascertain which one of the 2 is the master-mind
SELECT * FROM phone_calls WHERE caller IN (SELECT phone_number FROM people WHERE id IN (SELECT person_id FROM bank_accounts WHERE account_number IN (49610011, 76054385))) AND day = 28;

-- Since both of them had a call that is less that 60 sec , I will have to check which one of the receivers booked a flight the earliest next day flight
-- Let's get the names of these 2 numbers (375) 555-8161, (676) 555-6554
SELECT * FROM people WHERE phone_number IN ("(375) 555-8161", "(676) 555-6554");

-- Now that I who the 2 people is that was called I can start tracking who bought a ticket , strangely one has no passport_number
-- First let see if James has any transactions
SELECT * FROM atm_transactions WHERE account_number IN (SELECT account_number FROM bank_accounts WHERE person_id IN (SELECT id FROM people WHERE name = "James"));
-- Since James has no transactions , it should be Robin so lets confirm that below to check their transactions, There is a transactions on 29th which conclude who the helper was
SELECT * FROM atm_transactions WHERE account_number IN (SELECT account_number FROM bank_accounts WHERE person_id IN (SELECT id FROM people WHERE name = "Robin"));

-- Now let's see who called Robin to book the flight ,let's unvail the master of the theft
SELECT name FROM people WHERE phone_number = (SELECT caller FROM phone_calls WHERE receiver = (SELECT phone_number FROM people WHERE name = "Robin") AND day = 28);
-- since it Bruce we already know where he escaped to due to the first but incorrect results above
-- 2nd crack at the mystery
