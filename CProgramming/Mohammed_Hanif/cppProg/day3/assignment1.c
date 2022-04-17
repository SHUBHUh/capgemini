/*using copy constructor
here
the class declartion is as follows
class word
{
    private:
        char *str;
};
word word1 (“This is a test declaration”);
word word2 = word1;
o/p
cout<<word2.getWord();
This is a test declaration*/

#include <iostream>
#include <cstring>

using namespace std;

class Word
{
	private:
		char *str = NULL;
		int size;
		//str = new char[20];
	public:
		Word()
		{
			cout<<"\nThis is default constructor";
		}

		Word(const char *cstr)
		{
			cout<<"\nObject is created with 1 parameter";
			str = new char[30];
			strcpy(str,cstr);
		}
		Word(const Word &obj)
		{
			cout<<"\nObject is created with copy constructor";
			size = obj.size;
			str = new char[30];
			strcpy(str,obj.str);

		}
		char *getWord()
		{
			cout<<str<<endl;
		}

};
int main()
{
	Word word1("\nthis is a test declaration");
	word1.getWord();
	Word word2 = word1;
	word2.getWord();
	return 0;
}