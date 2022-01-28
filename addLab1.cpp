#include <iostream>

const int GG = 1000;



int ms(int* l, int n) {
    int r;
    if (n == 0) {
        return(l[n]);
  }
    if (n >=1) {
        r = l[n] + ms(l,n - 1);
        return(r);
    }
    if (n < 0) {
        return(0);
    }
}


int main()
{
    int mas[GG];
    int N;
    std::cin >> N;
    for (int i = 0; i < N; i++) {
        std::cin >> mas[i];
    }
    
    std::cout << ms(mas, N-1)/N; 
}


