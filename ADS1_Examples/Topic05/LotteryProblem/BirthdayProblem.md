Here you'll find a JavaScript file called birthdays.js.

1. Download it.

Make sure you watch the accompanying video setting up this Lottery Problem programming activity with some background.

DO NOT CHANGE THE NAMES OF THE FUNCTIONS

2. Your goal is to complete the functions called find(birthdays) and findSorted(birthdays).

The first function will not use any sorting, but the second function will use the functions implementing the Bubble Sort algorithm.

The functions find(birthdays) and findSorted(birthdays) should return an array storing the ids of the participants.

So each element of the returned array should store a string representing the player's id.

3. To test your function, run the code using the terminal (or command line interface) as outlined in the Introduction to Node.js notes from Reading 5.3.4.

Use the console.log function to print the output of the functions to the terminal.

There is a little bit of testing code in the JavaScript function to help.

4. When finished, submit your JavaScript file and it will be auto-graded.

---

## 4.4.1

- Organising a lottery for a club of 1589 people

- Unique birthday wins the cash prize

Due to the pigeonhol principle, more than one person will share the same birthday

People enter the lottery by submitting their birthday to organiser along with an individual number of their ticket

These people will retain that number from their ticket

- Design an algorithm that will pick the winner, given a list of tickets with birthdays

- if there are multiple people not sharing their birthday, the prize is divided

- if there is no one sharing their birthday, no one wins

## 5.0.1

need a formal linear search, vector and dynamic arrays

- there are many search tickets, containing ticket number and their birthday

- need linear search every other element to count appearances

```
function FindBirthdays(v)
    new DynamicArray d(0)

    i <- 2
    while i <= LENGTH[v] do
        count <- 0

        j <- 2
        while j <= LENGTH[v] do
            if v[i] = v[j] then
                count <- count + 1
            end if
            j <- j + 2
        end while

        if count = 1 then
            n <- LENGTH[d] + 1
            d[n] <- v[i-1]
        end if

        i <- i + 2
    end while
end function

```

## 5.0.3

inserted the tickers into discernible pattern or order and then search it looing for unique entries

- if the tickers are sotred into date order, people born early in JAN or FEB appeared before the people later in the year, the search would be simplified

- we do not need to search the whole vector, but just the next person to see if they have the same birthday

- input: data structure

- output is another data structure

  - same value as the input, but all elements of the data structure are sorted according to the some order

## 5.4.3

- description of the node.js script and the problems
