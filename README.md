# **The Questions**

This repo contains my solutions to last 6 USACO bronze questions as of 2022. They can be found [here](https://docs.google.com/document/d/1un0gmHXfZR5qisCwEaG8w7GgJr2KDHqTfa-aIxpuX4I/edit?usp=sharing). 


# **My Solutions**


## Question 1
Question 1 has a pretty straightforward O(N) solution. Since we know Bessie sings her alphabets in order, we know that:

- If any letter in the hum comes later in the alphabet than the letter right before it, both can be part of the same repetition
- Otherwise it cannot be part of the same repetition as Bessie would have to be on another repetition to sing it

We can use these key observations to find the minimum repititions by iterating through the hum and seeing if the ith letter comes later in the alphabet than the (i-1)th letter. If so we can incrememnt the number of minumum repetitions.

<img src="https://user-images.githubusercontent.com/33711947/152671795-359d4021-d3b5-4fc9-b580-52bc54d485a5.png"  width="400" />

To check if a letter comes after in the alphabet we can assign each letter an id with respect to its position in the alphabets. We could use a hashmap but an even better way to do this would be to make an array storing the position of each letter in the alphabet with the index being its position in the ASCII alphabet sytem. For example, `array[0]` would store the position of A in the cow alphabets.

<img src="https://user-images.githubusercontent.com/33711947/152670829-945be179-ee03-4471-aceb-9b4bab5fb204.png"  width="400" />

Implementing this in code we can create the pos array using the fact that in c++ taking the `int()` of a character returns its ASCII code. For example, `int('a'-97)` is 0 and `int('b'-97)` is 1.

```
int pos[26];    //holds position of each alphabet in cow alphabets (eg. if cow alphabets were dcab, then pos[0] = 2 representing that a (pos[0]) is in position 2 in cow alphabets)
  string calphs; cin >> calphs;
  for (int i = 0; i < calphs.length(); i++)
    pos[int(calphs[i]-97)] = i;             //fill up pos array with ascii magic
```

we can then easily traverse the hum using a variable `cur` as the pointer to the (i-1)th letter's position and a variable `res` for storing the answer like so...
```
string hum; cin >> hum;
  for (auto &i : hum) {                     //traverse hum
    if (pos[int(i-97)] <= cur) res++;       //if we break ascending order, add one to the number of minimum repetitions
    cur = pos[int(i-97)];                   //update cur
  }

  cout << res;       //return answer
```


# Question 2

We can solve Question 2 efficiently by splitting our input up into distinct cases. If we consider `e` as the number of even id cows, `o` as the number of odd id cows, and `n` as the total number of cows, we have 3 base cases:

`o==e`
- In this case, we can always lineup groups of one cow, alternating between even and odd. our answer is simply n

`e>o`
- In this case, we can see that no matter what we do, we cannot make an odd out of multiple e's in one group as the sum of even numbers will always be even. We can instead keep aside the extra e's and think of this as `o==e`. This is because we can always get rid of those extra e's by putting them into already even groups without changing the outcome. 

`e<o`
- One way to go about this case is to convert all pairs of odds into an e (as the sum of 2 odds is always even) until we have the case `o==e`. However sometimes we won't be able to get to this case. For example if we have 4 odds, after converting one pair of odds  we get 2 odds and one even. It is impossible to get to `o==e` with two odds and an even but we can get to the case of `e>o` by converting the second pair as well. We could go back to the `e>o` case and solve but another method to tackle this case is to algorithmically check when this will happen (i.e. when we will get a case like 4 odds) and subtract 2 because we know we can convert 4 odds into an even
