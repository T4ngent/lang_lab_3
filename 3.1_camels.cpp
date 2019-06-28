#include <stdio.h>
#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
	int N;
	string s[] = "В караване было ";
	string s1[]= "В караване был ";
	string v1[]= " верблюд";
	string v2[]= " верблюда";
	string v3[]= " верблюдов";
	cin >> N;
if (N%10==1 & N !=11)
{
	cout << s1 << N << v1 <<endl;
}
if (N%10==2 || N%10==3 || N%10==4 & N !=12,13,14)
{
	cout << s << N << v2 <<endl;
}
if (N%5==0 || N%10==6 || N%10==7 || N%10==8 || N%10==9 || N ==11,12,13,14)
{
	cout << s << N << v3 <<endl;
}
return 0;
}