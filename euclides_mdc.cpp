//algoritmo de euclides

#include <iostream>

using namespace std;
int mdc(int a, int b){ 
	return (b==0)? a: mdc(b, a % b);
}

int main()
{
    int a,b; cin >> a,b;
    cout << mdc(a,b);

    return 0;
}
