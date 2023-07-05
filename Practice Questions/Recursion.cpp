/*

Problem Statement
Given a staircase of N steps and you can either climb 1 or 2 steps at a given time. The task is to return the count of distinct ways to climb to the top.
Note: The order of the steps taken matters.
 
Examples:
 
Input: N = 3
Output: 3
Explanation:
 
There are three distinct ways of climbing a staircase of 3 steps :
 
[1, 1, 1], [2, 1] and [1, 2].

 
Another axample
Input:  N = 2
Output: 2
Explanation:
 
There are two distinct ways of climbing a staircase of 3 steps :
 
[1, 1] and [2]

*/

#include<iostream>
using namespace std;

int totalSteps(int goal)
{
    if(goal==2)
    {
        return 2;
    }
    if(goal==1)
    {
        return 1;
    }

    return totalSteps(goal-1)+ totalSteps(goal-2);
}

int main()
{
    int input;
    cout<<"Enter the goal: ";
    cin>>input;

    cout<<"Total number of ways to reach the top is: ";
    cout<<totalSteps(input);


}