# Binary Search

## Appearances

- ADS1 topic 4

- ADS1 topic 7

## PseudoCode

- Iterative Approach

```
function BinarySearch(v, item)

    n <- LENGTH[v]

    R <- n

    L <- 1

    while R >= L do

        M <- floor( (L + R) / 2 )

        if v[M] = item then

            return TRUE

        else if v[M] > item then

            R <- M - 1

        else

            L <- M + 1

        end if

    end while

    return FALSE

end function

```

- Recursive Approach

```
function Search(v, item, L, R)

    if (L > R) then

        return FALSE

    end if

    M <- floor((L + R) / 2)

    if v[M] = item then

        return TRUE

    else if v[M] >item then

        R <- M -1

    else

        L <- M + 1

    end if

    return Search(v, item, L, R)

end function

function BinarySearch(v, item)

    n <- LENGTH[v]

    R <- n

    L <- 1

    return Search(v, item, L, R)

end function

```

## Code Examples

- [Binary Search C++ code (iterative approach)](binary_search/binary_search.cpp)

- [Binary Search C++ code (recursive approach)](binary_search/binary_search.cpp)

## Leetcode Questions

| Number |                         Question Link                         |                  Solution                   |
| :----: | :-----------------------------------------------------------: | :-----------------------------------------: |
|  704   | [Binary Search](https://leetcode.com/problems/binary-search/) | [Solution](../leetcode/704/704_question.md) |
