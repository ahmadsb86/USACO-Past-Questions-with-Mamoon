# **THE QUESTIONS**

## **Question 1:**

A little known fact about cows is that they have their own version of the alphabet, the "cowphabet". It consists of the 26 letters 'a' through 'z', but when a cow speaks the alphabet, she lists these letters in a specific ordering that might be different from the order 'abcdefghijklmnopqrstuvwxyz' we are used to hearing.
To pass the time, Bessie the cow has been humming the cowphabet over and over again, and Farmer John is curious how many times she's hummed it.
Given a lowercase string of letters that Farmer John has heard Bessie say, compute the minimum number of times Bessie must have hummed the entire cowphabet in order for Farmer John to have heard the given string. Farmer John isn't always paying attention to what Bessie hums, and so he might have missed some of the letters that Bessie has hummed. The string you are told consists of just the letters that he remembers hearing.

**INPUT FORMAT (input arrives from the terminal / stdin):**
The first line of input contains the 26 lowercase letters 'a' through 'z' in the order they appear in the cowphabet. The next line contains the string of lowercase letters that Farmer John heard Bessie say. This string has length at least 
1
1 and at most 
1000
1000.

**OUTPUT FORMAT (print output to the terminal / stdout):**
Print the minimum number of times Bessie must have hummed the entire cowphabet.

**SAMPLE INPUT:**
abcdefghijklmnopqrstuvwxyz
mood

**SAMPLE OUTPUT:**
3

In this example, the cowphabet is ordered the same as the normal alphabet.
Bessie must have hummed the cowphabet at least three times. It is possible for Bessie to have only hummed the cowphabet three times, and for Farmer John to have heard the letters in uppercase as denoted below.
abcdefghijklMnOpqrstuvwxyz
abcdefghijklmnOpqrstuvwxyz
abcDefghijklmnopqrstuvwxyz

**SCORING:**
In test cases 2-5, the cowphabet is the same as the normal alphabet.
Test cases 6-10 satisfy no additional constraints.
Problem credits: Nick Wu


## **Question 2:**



Farmer John is yet again trying to take a photograph of his 
N cows ( 2≤N≤1000).
Each cow has an integer "breed ID" number in the range  1…100
Farmer John has a very peculiar idea in mind for his photo: he wants to partition all the cows into disjoint groups (in other words, place each cow in exactly one group) and then line up the groups so the sum of the breed IDs of the cows in the first group is even, the sum of the IDs in the second group is odd, and so on, alternating between even and odd.
What is the maximum possible number of groups Farmer John can form?

**INPUT FORMAT (input arrives from the terminal / stdin):**
The first line of input contains  N. The next line contains  N space-separated integers giving the breed IDs of the N cows.

**OUTPUT FORMAT (print output to the terminal / stdout):**
The maximum possible number of groups in Farmer John's photo. It can be shown that at least one feasible grouping exists.

**SAMPLE INPUT:**
7
1 3 5 7 9 11 13

**SAMPLE OUTPUT:**
3

In this example, one way to form the maximum number of three groups is as follows. Place 1 and 3 in the first group, 5, 7, and 9 in the second group, and 11 and 13 in the third group.
**SAMPLE INPUT:**
7
11 2 17 13 1 15 3


**SAMPLE OUTPUT:**
5

In this example, one way to form the maximum number of five groups is as follows. Place 2 in the first group, 11 in the second group, 13 and 1 in the third group, 15 in the fourth group, and 17 and 3 in the fifth group.
Problem credits: Nick Wu


## **Question 3:**



Farmer John has N cows (1≤N≤20) of heights a1…aN. His barn has N stalls with max height limits b1…bN (so for example, if b5=17, then a cow of height at most 17 can reside in stall 5). In how many distinct ways can Farmer John arrange his cows so that each cow is in a different stall, and so that the height limit is satisfied for every stall?

**INPUT FORMAT (input arrives from the terminal / stdin):**
The first line contains N. The second line contains N space-separated integers a1,a2,…,aN. The third line contains N space-separated integers b1,b2,…,bN. All heights and limits are in the range [1,109].

**OUTPUT FORMAT (print output to the terminal / stdout)	:**
The number of ways Farmer John can place each cow into a different stall such that the height limit is satisfied for every stall. Note that the large size of the output might require the use of a 64-bit integer, like a "long long" in C++.

**SAMPLE INPUT:**
4
1 2 3 4
2 4 3 4

**SAMPLE OUTPUT:**
8


In this example, we cannot place the third cow into the first stall since 3=a3>b1=2. Similarly, we cannot place the fourth cow into the first or third stalls. One way to satisfy the height limits is to assign cow 1 to stall 1, cow 2 to stall 2, cow 3 to stall 3, and cow 4 to stall 4.

**SCORING:**
Test cases 1-5 satisfy N≤8.
Test cases 6-12 satisfy no additional constraints.
Problem credits: Shreyas Thumathy


## **Question 4:**

Farmer John's cows are excited to learn that Chinese New Year was recently celebrated, ushering in the year of the Ox, always a bovine favorite.
As we know, the zodiac animals for Chinese calendar years follow a 12-year cycle: Ox, Tiger, Rabbit, Dragon, Snake, Horse, Goat, Monkey, Rooster, Dog, Pig, Rat, and then Ox again.
Bessie the cow is proud to say she was born in a year of the Ox, many years ago. Her friend Elsie wants to know how many years apart from Bessie she was born, and hopes you can help her deduce this by looking at relationships between the birth years of several cows on the farm.

**INPUT FORMAT (input arrives from the terminal / stdin):**
The first line of input contains an integer 
N ( 1≤N≤100). Each of the next N lines contains an 8-word phrase specifying the relationship between the birth years of two cows. It is of the form
"Mildred born in previous Dragon year from Bessie",
or
"Mildred born in next Dragon year from Bessie"
The last word is the name of a cow on the farm, which is either "Bessie" or a cow that has already been mentioned in a previous line of input.
The first word is the name of a cow on the farm who is not "Bessie" and who has not yet been mentioned in the input. All cow names have at most 10 characters that are in the range a..z or A..Z.
The 5th word is one of the 12 zodiac animals above.
The 4th word is either "previous" or "next". For example, if the phrase is "Mildred born in previous Dragon year from Bessie", then Mildred's year of birth was the Dragon year closest to and strictly before (not equal to) Bessie's birth year.

**OUTPUT FORMAT (print output to the terminal / stdout):**
Please output the number of years by which Bessie and Elsie's birth years differ. It is guaranteed that this number can be determined by the input given.

**SAMPLE INPUT:**
4
Mildred born in previous Dragon year from Bessie
Gretta born in previous Monkey year from Mildred
Elsie born in next Ox year from Gretta
Paulina born in next Dog year from Bessie

**SAMPLE OUTPUT:**
12

In the input above,
Elsie was born 12 years before Bessie.
Mildred was born 9 years before Bessie.
Gretta was born 17 years before Bessie.
Paulina was born 9 years after Bessie.
Problem credits: Brian Dean
 



## **Question 5:**



Farmer John's pasture can be regarded as a large 2D grid of square "cells" (picture a huge chessboard). Initially, the pasture is empty.
Farmer John will add N (1≤N≤105) cows to the pasture one by one. The ith cow will occupy a cell (xi,yi) that is distinct from the cells occupied by all other cows (0≤xi,yi≤1000).

A cow is said to be "comfortable" if it is horizontally or vertically adjacent to exactly three other cows. Farmer John is interested in counting the comfortable cows on his farm. For each i in the range 1…N, output the total number of comfortable cows after the ith cow is added to the pasture.

**INPUT FORMAT (input arrives from the terminal / stdin):**
The first line contains a single integer N. Each of the next N lines contains two space-separated integers, indicating the (x,y) coordinates of a cow's cell. It is guaranteed that all these cells are distinct.

**OUTPUT FORMAT (print output to the terminal / stdout):**
The ith line of output should contain the total number of comfortable cows after the first i cows are added to the pasture.

**SAMPLE INPUT:**
8
0 1
1 0
1 1
1 2
2 1
2 2
3 1
3 2

**SAMPLE OUTPUT:**
0
0
0
1
0
0
1
2

After the first four cows are added, the cow at (1,1) is comfortable.

After the first seven cows are added, the cow at (2,1) is comfortable.

After the first eight cows are added, the cows at (2,1) and (2,2) are comfortable.

**SCORING:**
Test cases 1-4 satisfy N≤400.
Test cases 5-12 satisfy no additional constraints.
Problem credits: Benjamin Qi



## **Question 6:**


The fence surrounding Farmer John's largest pasture has fallen into disrepair, and he has finally decided to replace it with a new fence.
Unfortunately, as Farmer John is laying out the new fence, a large bee ends up chasing him around the pasture, and as a result, the fence ends up following a rather irregular path. The fence can be described by a string of characters, each either "N" (north), "E" (east), "S" (south), or "W" (west). Each character describes a 1-meter run of the fence. For example, if the string is NESW, this means the fence starts by moving north for 1 meter, then east for 1 meter, then south for 1 meter, then west for 1 meter, returning to its starting point.
The fence ends at the position where it started, and this is the only point visited more than once by the path of the fence (and the starting point is only re-visited once, at the end). As a result, the fence does indeed enclose a single connected region of the grassy pasture, even though this region could have a rather strange shape.
Farmer John is curious if the path in which he laid the fence traveled clockwise (with the enclosed region on the right side of the fence as one walks along the path of the fence in the order specified by the string) or counter-clockwise (with the enclosed region on the left side of the fence).
INPUT FORMAT (input arrives from the terminal / stdin):
The first line of input contains an integer N (1≤N≤20). Each of the next N lines contains a string of length at least 4 and at most 100, describing a single fence path.

**OUTPUT FORMAT (print output to the terminal / stdout):**
For each of the 
N
N fence paths described in the input, output a line containing either "CW" (clockwise) or "CCW" (counterclockwise).

**SAMPLE INPUT:**
2
NESW
WSSSEENWNEESSENNNNWWWS

**SAMPLE OUTPUT:**
CW
CCW

The two fence paths with @ denoting the starting point:
*>*
^ v
@<*

  *<*<*<*
  v     ^
*<@     *
v       ^
* *>*>* *
v ^   v ^
* *<* * *
v   ^ v ^
*>*>* *>*

Problem credits: Brian Dean




# MY SOLUTIONS
inna lillahi wa inna ilayhi raji'un
