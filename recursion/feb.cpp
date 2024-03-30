#include<iostream>
#include<vector>


/**
 * Calculate the nth Fibonacci number recursively.
 *
 * @param n the index of the Fibonacci number to calculate
 *
 * @return the value of the nth Fibonacci number
 *
 * @throws No specific error is thrown
 */
void fabonacci(int n){

    if(n == 0 || n == 1){
        std::cout<<n<<std::endl;
    }
    else{
        fabonacci(n-1);
        fabonacci(n-2);
    }
}

/**
 * Checks if a given integer is prime.
 *
 * @param n The integer to be checked.
 *
 * @return True if the integer is prime, false otherwise.
 *
 * @throws None.
 */
bool isPrime(int n){
    if(n%2==0){
        return false;
    }
    else{
        return true;
    }
}

/**
 * Generates a vector of Fibonacci prime numbers up to a given limit.
 *
 * @param n The upper limit of the Fibonacci sequence.
 * @param primes A reference to a vector to store the generated prime numbers.
 *
 * @return void
 *
 * @throws None
 */
auto primes(int n, std::vector<int> &prime) -> void {
    if(n==0 || n==1){
        //std::cout<<n<<std::endl;
        prime.push_back(n);
        
    }
    else if(isPrime(n)){
        prime.push_back(n);
        primes(n-1, prime);
    } 
    else{
        primes(n-1, prime);
    }
}


int main(){

    //fabonacci(6);
    std::vector<int> primess;
    primes(100, primess); // Fix: pass address of primes vector

    // Print the prime numbers
    for (int prime : primess) {
        std::cout << prime << " ";
    }


    return 0;
}