int is_prime(int n)
{
    int i;
    if (n <= 1)
        return 0;
    for (i = 2; i < n; i++)
    {
        if (n % i == 0)
            return 0;
    }
    return 1;
}

int fact(int n)
{
    int factorial = 1;
    for (int i = 1; i <= n; i++)
    {
        factorial *= i;
    }
    return factorial;
}

int max_element(double x[], int n)
{
    int max = x[0];
    for (int i = 1; i < n; i++)
    {
        if (x[i] > max)
            max = x[i];
    }
    return max;
}

int min_element(double x[],int n){

    int min=x[0];
    for (int i=0;i<n;i++){
        if (min<x[i]) min=x[i];
    }
    return min;
}

int is_even(int n){
    return (n%2==0);
}

int is_odd(int n){
    return (n%2!=0);
}

double addition(double x[], int n) { 
    double sum = 0;
    for (int i = 0; i < n; i++)
        sum += x[i];
    return sum; 
}
double subtraction(double x[], int n) { 
    if (n<=0) return 0;
    double sub = x[0]; 
    for (int i = 1; i < n; i++)
        sub -= x[i]; 
    return sub; 
}
double multiplication(double x[], int n) { 
    double multiply = 1; 
    for (int i = 0; i < n; i++)
        multiply *= x[i]; 
    return multiply; 
}
double division(double x[], int n) { 
    if (n<=0) return 0;
    double divide = x[0]; 
    for (int i = 1; i < n; i++)
        divide /= x[i]; 
    return divide; 
}