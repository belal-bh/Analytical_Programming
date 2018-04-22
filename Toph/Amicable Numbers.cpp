// C++ Program to print prime factors and their
// powers using Sieve Of Eratosthenes
#include<bits/stdc++.h>
using namespace std;

#define MAX_size  1000        //10000001 required
vector<int> s(MAX_size,1);

long SOF(long p, long k){
    long x=1;
    for(long i=1; i<=k+1; i++)x*=p; // something went wrong wit pow(p,k+1) function ,so loop
    return (x-1)/(p-1);
}

// Using SieveOfEratosthenes to find smallest prime
// factor of all the numbers.
// For example, if N is 10,
// s[2] = s[4] = s[6] = s[10] = 2
// s[3] = s[9] = 3
// s[5] = 5
// s[7] = 7
void sieveOfEratosthenes(long N ) //, vector<long>& s
{
    // Create a boolean array "prime[0..n]" and
    // initialize all entries in it as false.
    vector <bool> prime(N+1, false);

    // Initializing smallest factor equal to 2
    // for all the even numbers
    for (long i=2; i<=N; i+=2)
        s[i] = 2;

    // For odd numbers less then equal to n
    for (long i=3; i<=N; i+=2)
    {
        if (prime[i] == false)
        {
            // s(i) for a prime is the number itself
            s[i] = i;

            // For all multiples of current prime number
            for (long j=i; j*i<=N; j+=2)
            {
                if (prime[i*j] == false)
                {
                    prime[i*j] = true;

                    // i is the smallest prime factor for
                    // number "i*j".
                    s[i*j] = i;
                }
            }
        }
    }
}

// Function to generate prime factors and its power
long generatePrimeFactors(long N )  //, vector<long>& s
{
    long profac = N;
    long sum=1;


    // s[i] is going to store smallest prime factor
    // of i.
    //int s[N+1];

    // Filling values in s[] using sieve
    //sieveOfEratosthenes(N, s);

    //printf("Factor Power\n");

    long curr = s[N];  // Current prime factor of N
    long cnt = 1;   // Power of current prime factor

    // Printing prime factors and their powers
    while (N > 1)
    {
        N /= s[N];

        // N is now N/s[N].  If new N als has smallest
        // prime factor as curr, increment power
        if (curr == s[N])
        {
            cnt++;
            continue;
        }

        //printf("%d\t%d\n", curr, cnt);

        // Sum of factor
        sum=sum * SOF(curr,cnt); // sum of factors

        //printf("%d\n", sum);

        // Update current prime factor as s[N] and
        // initializing count as 1.
        curr = s[N];
        cnt = 1;
    }
    return sum - profac; // sum of the proper divisors
}

//Driver Program
int main()
{
    //cout<<s.max_size()<<endl;
    long T,A,B;
    cin>>T;
    //vector<long> s(MAX_size,1);
    sieveOfEratosthenes(MAX_size);
    for(int i=0; i<MAX_size; i++){
        cout<<"spf of "<<i<<" = "<<s[i]<<endl;
    }
    for(long t=1; t<=T; t++){
        cin>>A>>B;
        //cout<<"A="<<A<<" B="<<B<<endl;

        if(A==0){
            A++;
        }

        printf("Case %d:\n",t);
        for(long i=A; i<=B; i++){
            for(long j=i+1; j<=B; j++){
                if(generatePrimeFactors(i)==j && generatePrimeFactors(j)==i){
                    cout<<i<<" "<<j<<endl;
                }
            }
        }
    }
    return 0;
}
