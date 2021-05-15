/*
    Problem: Waiter
    Source: https://www.hackerrank.com/challenges/waiter/problem
    Code by: Edgar A. Ramírez Fuentes
*/

// Function to generate N prime numbers using  
// Sieve of Eratosthenes 
void SieveOfEratosthenes(vector<int>& primes)  {  
    // Create a boolean array "IsPrime[0..MAX_SIZE]" and  
    // initialize all entries it as true. A value in  
    // IsPrime[i] will finally be false if i is  
    // Not a IsPrime, else true.  
    bool IsPrime[MAX_SIZE];  
    memset(IsPrime, true, sizeof(IsPrime));  
    
    for (int p = 2; p * p < MAX_SIZE; p++)  
    {  
        // If IsPrime[p] is not changed, then it is a prime  
        if (IsPrime[p] == true)  
        {  
            // Update all multiples of p greater than or   
            // equal to the square of it  
            // numbers which are multiple of p and are  
            // less than p^2 are already been marked.   
            for (int i = p * p; i <  MAX_SIZE; i += p)  
                IsPrime[i] = false;  
        }  
    }  
    
    // Store all prime numbers  
    for (int p = 2; p < MAX_SIZE; p++)  {
        if (IsPrime[p])  { primes.push_back(p); }
    }          
} 

vector<int> fillVector(vector<int> number, vector<stack<int>>& b) {
    vector<int> ans;
    for(auto i : b) {
        if(i.empty()) continue;
        while(!i.empty()) {
            ans.push_back(i.top());
            i.pop();
        }
    }
    for(int i = number.size() - 1; i > -1; i--) {
        ans.push_back(number[i]);
    }
    return ans;
}

vector<int> waiter(vector<int> number, int q) {
    vector<int> primes; 
    stack<int> a;
    stack<int> b;
    vector<int> ans;
    vector < stack<int> > plates;
    // Rellena la pila A con el contenido del array number.
    SieveOfEratosthenes(primes);
    for(int i=0; i<q;i++) {
        plates.push_back(b);
        if(!number.size()) return fillVector(number, plates);
        for(auto i : number) {
            a.push(i);
        }
        number = {};
        while(!a.empty()) {
            if(!(a.top() % primes[i])) {
                plates[i].push(a.top()); 
            }else{
                number.push_back(a.top());
            }
            a.pop();
        }
    }
    return fillVector(number, plates); 
}