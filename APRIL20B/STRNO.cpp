//
// Created by Sagar Pawar on 11/04/20.
//

/**
 * Problem: STRNO
 * If we write a number in prime factorization form
 *  i.e. number = A1^p1 * A2^p2 * ... An^pn
 *  then number of factors = (p1+1) * (p2+1) * ... * (pn+1)
 *
 * Hence for exactly k prime factors value of n must be equal to k, for which pi must be >= 1
 *
 * Fun fact: One mistake I made during competition was I assumed pi>=1 is necessary and sufficient condition and ignored
 * cases like if x is prime number(i.e. which cannot be divided) but I was wrong and necessary and sufficient
 * condition is, number of factors must be able to write in at least k factors
 *
 * Algorithm:
 * 1. Find maximum number of elements in prime factorial form, say max_div_count
 * 2. If max_div_count >= k the yes number exists
 * 3. Else does not exists
 * 4. One exception is if k=1 then its always possible to write
 *
 * Time Complexity: O(√n)
 *
 * Learning:
 * 1. number of factors = (p1+1) * (p2+1) * ... * (pn+1)
 */
#include <bits/stdc++.h>

using namespace std;

int main(){
#ifndef ONLINE_JUDGE
    char* testFile = "/Users/sagarpawar/CLionProjects/ccdsap/APRIL20B/test/STRNO.txt";
    freopen(testFile, "r", stdin);
#endif

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        long x, k;
        cin >> x >> k;

        long count = 0;

        // To improve performance first find all factors of 2 first then keep jumping 2 steps
        while(x%2 == 0){
            count ++;
            x /= 2;
        }
        // Try all combinations till sqrt(x) because prime factor of a number can only exist till √n
        for (int i = 3; i <= sqrt(x); i+=2) {
            while (x % i == 0) {
                count++;
                x /= i;
            }
        }

        // This condition handles the exact divisiblity and k==1 condition
        if(x > 1) count++;

        cout << (k<=count) << "\n";


    }
}