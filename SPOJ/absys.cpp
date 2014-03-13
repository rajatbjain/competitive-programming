#include <iostream>
#include <cstdio>
#include <string>
#include <string.h>
using namespace std;

int main()
{
	int test;
	char a[200];
	cin >> test;
	int d=test;
	while(test--)
	{
	    if (test = d-1)
            cin.ignore();

		gets(a);
		int i=0, foundAt, A=0, B=0, C=0, indexA, indexB, length=strlen(a);
		bool flagplus=false, flagequal=false;

		while(a[i] != '\0')
		{
		    if (a[i] == '+')
                {indexA=i;}
            if (a[i] == '=')
                {indexB=i;}
			if(a[i] == 'm')
			{
				foundAt = i;
 			}
 			++i;
		}

		if (foundAt>indexB)
        {
            flagplus = flagequal = true;
        }
        else if (foundAt> indexA && foundAt < indexB)
        {
            flagplus=true; flagequal=false;
        }
        else
        {
            flagplus=false; flagequal = true;
        }

		if (flagplus == true)
		{
			int p = 0;
			while (p<indexA-1)
                {
                    A = (A*10)+(a[p]-'0');
                    p++;
                }
		}
		else
        {
            int p=indexB+2;
            while (p<length)
            {
                A = A*10 + (a[p]-'0');
                p++;
            }
        }
		if (flagequal == true)
		{
			int p=indexA+2;
			while (p<indexB-1)
			{
				B = (B*10)+(a[p]-'0');
				p++;
			}
		}
		else
        {
            int p=indexB+2;
            while (p<length)
            {
                B = B*10 + (a[p]-'0');
                p++;
            }
        }

		if (flagplus == true && flagequal == true)
            cout << A << " + " << B << " = " << A+B << endl;
        if (flagplus == true && flagequal == false)
            cout << A << " + " << B-A << " = " << B << endl;
        if (flagplus == false && flagequal == true)
            cout << A-B << " + " << B << " = " << A << endl;
    }

    if (test)
        cout << "\n";



}
