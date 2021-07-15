#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <map>
#include <algorithm>
using namespace std;


int main() {
    // https://www.hackerrank.com/challenges/cpp-maps/problem
    // Output the scores of each student of which there are a specified amount defined in the beginning
    // There is an initializing number 1, 2, or 3 before X and/or Y which represent person and score
    // The number 1 dictates that one should add person X and score Y into the map
    // The number 2 dictates that one should erase the marks of person X
    // The number 3 dictates that the score of person X should be printed out
    map<string, int> students;
    int student_list_length;
    cin >> student_list_length;
    
    for (int i = 0; i < student_list_length; i++)
    {
        int t_dict, t_score;
        string t_person;

        cin >> t_dict >> t_person;
        if (t_dict == 1)
        {
            cin >> t_score;
        }
        

        if (t_dict == 1)
        {
            map<string, int>::iterator itr=students.find(t_person);
            if (itr != students.end())
            {
                students.erase(t_person);
                students.insert(make_pair(t_person, t_score+itr->second));
            }
            else
            {
                students.insert(make_pair(t_person, t_score));
            }
        }

        if (t_dict == 2)
        {
            students.erase(t_person);
        }

        if (t_dict == 3)
        {
            // Do not use iterator to find the value for this challenge
            // The problem lies in the fact that the iterator returns a false integer
            // when the person has been erased from the map
            // map<string, int>::iterator itr=students.find(t_person);
            // if (itr->second < 0)
            // {
            //     cout << 0 << endl;
            // }
            // else
            // {
            //     cout << itr->second << endl;
            // }
            cout << students[t_person] << endl;
        }
        
        
    }
    
    return 0;
}

