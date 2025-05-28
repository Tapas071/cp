#to get the last digit 

lastDigit = num%10;

# Reverse a number
1. get all the digits
2. store those digits 
3. form the reverse number from reverse

the Formula looks like 
one iteration 
revNum = ( revNum *10) + lastDigit

# check palidrome 

get the number  and check with the original number

# amstrong number 

if the summaation of cube of digits of a number is itself then it is calle a amstrong number

1. get all the digits 
2. get the summation 
3. check with the number

# divisor of a number

```cpp
for( int i =1; i<=sqrt(num); i++){
    if(num%i==0) {
    cout<<i<<" ";
    cout<<(num/i)<<" ";
    }
}

```
time complexity = O(sqrt(n))

# check for prime 

``` cpp 
for( int i =2; i<= sqrt(num); i++){
if(num%i==0) {
    cout<<"not Prime";
    break;
}
}
cout<<"prime";
```

# GCD ( greatest common factor) / HCF ( highest common factor)
There will be always one number as gcd (because 1 is always common)

```cpp
for( int i =1; i< min( num1, num2);i++){
if( num1%i and num2%i) gcd = i;
}

```
you can make it faster by reversing the loop

time complexity O(min( n1, n2))

## eucludian algorithm

gcd ( n1, n2) = gcd( n1%n2, n2) where ( n1 > n2)

time complexity = O(logfi(min(n1,n2))

# LCM
LCM(a, b) = (a * b) / GCD(a, b). 

# power exponentiation
```cpp
int pow(val, power){ 
if( power ==0)return val;
if ( power%2) ans = val * pow(val*val, power/2);
else ans = pow(val * val, power/2);
return ans;
}
```
# Sieve of Eratosthenes
```cpp
vector<int> computePrime ( int n ){
vector<bool> prime(n+1, true); // you should make it global so that you can computure once and use again and again 
    prime[1]=false;
    for( int i=2 ; i*i<=n; i++){
        if(prime[i]== true){
        for( int j =i*i;j<=n;j+=i)
        prime[j] = false;
        }
    }
    return prime;
}

```

Time complexity : O(nlog(logn)) + o(n) --> prime hermonic series


