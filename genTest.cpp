#include <bits/stdc++.h>
using namespace std;

int main()
{
    // // Test case 1
    // string s1 = "cczazcc";
    // int repeatLimit1 = 3;
    // Solution sol1;
    // string result1 = sol1.repeatLimitedString(s1, repeatLimit1);
    // cout << "Result 1: " << result1 << endl;

    // // Test case 2
    // string s2 = "cccccbbbbaaa";
    // int repeatLimit2 = 2;
    // Solution sol2;
    // string result2 = sol2.repeatLimitedString(s2, repeatLimit2);
    // cout << "Result 2: " << result2 << endl;

    // // Test case 3
    // string s3 = "zzzzzzzz";
    // int repeatLimit3 = 3;
    // Solution sol3;
    // string result3 = sol3.repeatLimitedString(s3, repeatLimit3);
    // cout << "Result 3: " << result3 << endl;

    // // Test case 4
    // string s4 = "abcabcabc";
    // int repeatLimit4 = 1;
    // Solution sol4;
    // string result4 = sol4.repeatLimitedString(s4, repeatLimit4);
    // cout << "Result 4: " << result4 << endl;

    // // Test case 5
    // string s5 = "aabbcc";
    // int repeatLimit5 = 2;
    // Solution sol5;
    // string result5 = sol5.repeatLimitedString(s5, repeatLimit5);
    // cout << "Result 5: " << result5 << endl;

    return 0;
}

/*
There is a school that has classes of students and each class will be having a final exam. You are given a 2D integer array classes, where classes[i] = [passi, totali]. You know beforehand that in the ith class, there are totali total students, but only passi number of students will pass the exam.

You are also given an integer extraStudents. There are another extraStudents brilliant students that are guaranteed to pass the exam of any class they are assigned to. You want to assign each of the extraStudents students to a class in a way that maximizes the average pass ratio across all the classes.

The pass ratio of a class is equal to the number of students of the class that will pass the exam divided by the total number of students of the class. The average pass ratio is the sum of pass ratios of all the classes divided by the number of the classes.

Return the maximum possible average pass ratio after assigning the extraStudents students. Answers within 10-5 of the actual answer will be accepted.

*/