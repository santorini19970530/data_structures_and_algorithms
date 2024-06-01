# Linear Search

## Appearances

- ADS1 topic 4

- ADS1 topic 7

* ADS2 topic 1

## PseudoCode

- Iterative Approach

```
function LinearSearch(v, item)

for (1 <= i <= LENGTH[v]) do

  if v[i] = item then

      return i

  end if

end for

end function

```

- Recursive Approach

```
function Search(v, l, item)

    n <- LENGTH[v]

    if l > n then

        return FALSE

    else if v[l] = item then

        return TRUE

    end if

    return Search(v, l+1, item)

end function

function LinearSearch(v, item)

    return Search(v, 1, item)

end function

```

## Code Examples

- [Linear Search C++ code (array index approach)](linear_search/linear_search.cpp)

## Leetcode Questions

| Number |                                   Question Link                                   |                   Solution                    |
| :----: | :-------------------------------------------------------------------------------: | :-------------------------------------------: |
|  3110  | [Score of a String](https://leetcode.com/problems/score-of-a-string/description/) | [Solution](../leetcode/3110/3110_question.md) |
