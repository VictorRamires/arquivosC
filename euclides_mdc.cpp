//algoritmo de euclides

#include <iostream>

using namespace std;
int mdc(int a, int b){ 
	return (b==0)? a: mdc(b, a % b);
}

int main()
{
    cout << mdc(17,12);

    return 0;
}
