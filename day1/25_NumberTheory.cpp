//Sieve of Eratosthenes: 

#include <bits/stdc++.h>
using namespace std;

vector<int> sieve(int n) {
    // boolean array to mark primes
    vector<bool> prime(n + 1, true);

    // 0 and 1 are not prime
    prime[0] = prime[1] = false;

    for (int p = 2; p * p <= n; p++) {
        if (prime[p] == true) {
            // mark multiples of p as non-prime
            for (int i = p * p; i <= n; i += p) {
                prime[i] = false;
            }
        }
    }

    // store all prime numbers
    vector<int> res;
    for (int p = 2; p <= n; p++) {
        if (prime[p]) {
            res.push_back(p);
        }
    }

    return res;
}

int main(){
    cout << "Enter the value of n to find all primes up to n: ";
    int n;
    cin>>n;

    vector<int> v = sieve(n);
    
    for(int i=0;i<v.size();i++){
        cout << "Prime number: " << v[i] << "\n";
    }

}


// Naive Method

/*
bool isPrimeNaive(long long n) {
    if (n <= 1) return false;

    for (long long i = 2; i < n; i++) {
        if (n % i == 0)
            return false;
    }

    return true;
}

*/