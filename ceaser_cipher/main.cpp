#include<iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	char text[50], ch;
	int i, key;
    cout<<"-------------------------------"<<endl;
	cout << "Enter plain text: " << endl;
	gets(text);		//For multi-word strings

	cout << "Enter key \n";
	cin >> key;
    cout<<"-------------------------------"<<endl;
	for(i=0; text[i]!='\0'; ++i)
	{
		ch = text[i];
		if(ch >= 'a' && ch <= 'z')
		{
			ch = ch + key;
			if(ch>=123)
			{
				ch= ch - 123 + 97;
			}
		text[i] = ch;
		}
		else if(ch >= 'A' && ch <= 'Z')
		{
			ch = ch + key;
			if(ch>90)
			{
				ch= ch - 90 + 65;
			}
			text[i] = ch;
		}
		else
		{
			cout << "Numbers and characters are not allowed.\n";
			exit(1);
		}
	}
    cout<<"----------------------------"<<endl;
    cout<< "Encrypted text = " << text << endl;
    cout<<"----------------------------"<<endl;
	//Decrypting the text
	for(i=0; text[i]!='\0'; ++i)
	{
		ch = text[i];
		if(ch >= 'a' && ch <= 'z')
		{
            ch = ch - key;
            if(ch<97)
            ch=ch+26;

            text[i]=ch;
		}

        else if(ch >= 'A' && ch <= 'Z')
		{
			ch = ch - key;
			if(ch<=65)
			{
                ch= ch+25;
			}
			text[i] = ch;
		}
	}
    cout<<"----------------------------"<<endl;
	cout<<" decrypted text = "<<text<<endl;
    cout<<"----------------------------"<<endl;
	return 0;
}
