/*Lecture 3.1.1:  Jumbs in Loops | Program to print numbers from 1 to 100, and 
if any number is divisible by 3, so those number are not print on output */
#include <iostream>
using namespace std;

int main() {
    for (int i = 1; i < 100; i++) {
        //to check the number divisible by three or not add if condition here
        if(i % 3 == 0) {
          continue;
        }
        cout<<i<<endl;
    }
}



/* Output:
1
2
4
5
7
8
10
11
13
14
16
17
19
20
22
23
25
26
28
29
31
32
34
35
37
38
40
41
43
44
46
47
49
50
52
53
55
56
58
59
61
62
64
65
67
68
70
71
73
74
76
77
79
80
82
83
85
86
88
89
91
92
94
95
97
98

  */