#include <iostream>
#include <ctime>
using namespace std;

typedef char* charPointer;

int cstrlen(const charPointer& s)
{
	//returns the number of printable characters in s
	int length = sizeof(s) / sizeof(s[0]);
	return length;
}

int countChars(const charPointer& s, const char& ch)
{
	//returns the number of times the character ch is found in s
	int count = 0;
	for(int i = 0; i < sizeof(s); i++)
	{
		if(ch == s[i])
			count += 1;
	}
	return count;
}

int findChar(const charPointer& s, const char& ch, const int& startIndex = 0, const int& lastIndexTemp = -1)
{
	/*
	returns the smallest index where the character ch is found in s starting from 
	startIndex (inclusive) upto lastIndex (exclusive). The default argument value 
	for startIndex is 0. The default argument value for lastIndexTemp is -1 in which 
	case cstrlen(s) must be used instead of -1.
	For example,
		findChar("test", 't', 1, 4) must return 3. Here startIndex = 1, lastIndex = 4
		findChar("test", 't', 3) must return 3. Here startIndex = 3, lastIndex = 4
		findChar("test", 't', 1, 3) must return -1. Here startIndex = 1, lastIndex = 3
		findChar("test", 't') must return 0. Here startIndex = 0, lastIndex = 4
	If ch is not found in s in the given interval, the the function must return -1
	This function must first validate both the startIndex and lastIndex.
	That is, if lastIndex > cstrlen(s) or startIndex < 0 it must return -1
	*/
}

charPointer getCopy(const charPointer& s)
{
	/*
	returns a new cstring that is a copy of the cstring s.
	That is a new cstring with as big memory as the size of 
	the cstring s is created and then all the characters of 
	s including the null char are copied to it.
	*/
}

void rotateString(const charPointer& s, const int& r)
{
	/*
	Rotates the characters of s by r units
		If r > 0, rotate the characters of s to the left
		If r < 0, rotate the characters of s to the right
		Please note the value of r can be any integer even larger than the length of s
		For example,
			"asmara" rotated to the left by 0 becomes "asmara"
			"asmara" rotated to the left by 1 becomes "smaraa"
			"asmara" rotated to the left by 2 becomes "maraas"
			"asmara" rotated to the left by 3 becomes "araasm"
			"asmara" rotated to the left by 4 becomes "raasma" 
			"asmara" rotated to the left by 5 becomes "aasmar" 
			"asmara" rotated to the left by 6 becomes "asmara" 
			"asmara" rotated to the left by 7 becomes "smaraa" 
			"asmara" rotated to the left by 8 becomes "maraas"

		similarly
			"asmara" rotated to the right by 0 becomes "asmara"
			"asmara" rotated to the right by 1 becomes "aasmar"
			"asmara" rotated to the right by 2 becomes "raasma"
			"asmara" rotated to the right by 3 becomes "araasm"
			"asmara" rotated to the right by 4 becomes "maraas" 
			"asmara" rotated to the right by 5 becomes "smaraa" 
			"asmara" rotated to the right by 6 becomes "asmara" 
			"asmara" rotated to the right by 7 becomes "aasmar" 
			"asmara" rotated to the right by 8 becomes "raasma" 

			and etc… 
	*/
}
void empty(charPointer& s)
{
	/*
	Empties the cstring s so that s is modified to an empty cstring.
	That is the memory allocated for s is deleted and a new memory is
	allocated so that s will have no printable characters but it will
	still have a null character at the end.
	*/
}
void append(charPointer& s, const char& ch)
{
	/*
	Appends the character ch to the cstring s.
		That is ch is added to the end of s making sure the resulting s is a valid cstring
		The parameter s is assumed to be a dynamic array (NOT a static array)
	This function is implemented for you by the instructor.
	*/
	int len = cstrlen(s);
	int newLen = len + 1;
	char *C = new char[newLen + 1];
	for (int i = 0; i < len; i++)
		C[i] = s[i];
	C[len] = ch;
	C[newLen] = '\0';
	delete[] s;
	s = C;
	return;
}

void append(charPointer& s1, const charPointer& s2)
{
	/*
	Appends all the characters of s2 to s1
		The parameter s1 is assumed to be a dynamic array (NOT a static array)
	Hint: Use the append(charPointer& s, const char& ch) function above.
	*/
}

bool removeChar(charPointer& s, const char& ch)
{
	/*
	Removes the first character found in the cstring s that is equal to ch.
	If a character is found and removed then the function returns true.
	If no character is found that is equal to ch then the function does nothing
	and returns false.
		The parameter s is assumed to be a dynamic array (NOT a static array)
	This function is implemented for you by the instructor.
	*/
	int len = cstrlen(s);
	int index = findChar(s, ch);
	if (index == -1)
		return false;
	else
	{
		int newLen = len - 1;
		char *C = new char[newLen + 1];
		int k = 0;
		for (int i = 0; i < index; i++)
			C[k++] = s[i];
		for (int i = index+1; i < len; i++)
			C[k++] = s[i];
		C[k] = '\0';
		delete[] s;
		s = C;
		return true;
	}
}
void removeCharAll(charPointer& s, const char& ch)
{
	/*
	Removes all the occurrences of the character ch from the cstring s
		The parameter s is assumed to be a dynamic array (NOT a static array)
	Hint: Use the removeChar(charPointer &s, const char ch) function above.
	*/
}

bool isEqual(const charPointer& s1, const charPointer& s2)
{
	/*
	returns true if the cstring s1 is equal to the cstring s2
		Definition: Two c-strings s1 and s2 are equal if they have the same length
		and characters of s1 and s2 at corresponding indexes are the same.
	*/
}

bool isAnagram(const charPointer& s1, const charPointer& s2)
{
	/*
	returns true if s1 and s2 contain same distinct characters appearing same number of 
	times in both s1 and s2; otherwise returns false
		That is, this function returns true if s1 and s2 are permutations (re-arrangements) of each other.
		For example "TEST" and "STET" are anagrams but "CPMT" and "CMPTM" are not anagrams
	*/
}

charPointer zigzagMerge(const charPointer& s1, const charPointer& s2)
{
	/*
	Creates and returns a new cstring by merging (combining) s1 and s2 in zigzag form. 
		That is 
			first character of the new cstring is the first character of s1
			second character of the new cstring is the first character of s2
			third character of the new cstring is the second character of s1
			fourth character of the new cstring is the second character of s2
			fifth character of the new cstring is the third character of s1
			sixth character of the new cstring is the third character of s2
			etc
		When either s1 or s2 reaches to its end, the remaining characters of the other are 
		appended to the new cstring
		For example, the zigzagMerge of "abc" and "defgh" will be "adbecfgh"
	*/
}

charPointer getSubString(const charPointer& s, const int& startIndex, const int& len)
{
	/*
	returns a substring of s consisting of len characters starting from startIndex.
		If s has fewer characters starting from the startIndex upto its last character, 
		then this function must return a substring consisting of only the available 
		characters starting from the startIndex upto its last character in which case, 
		the returned substring will have less than len characters.
	*/
}

bool isSubString(const charPointer& s1, const charPointer& s2)
{
	/*
	returns true is s1 is a substring of s2 otherwise returns false
		Definition: s1 is a substring of s2 if s1 is found in s2. 
		That is all characters of s1 are found TOGETHER in s2 in the SAME ORDER as they appear in s1
		Example "set" is a substring of "massachussettes" But "ets" is not substring of "massachussettes"
	Hint: Use the getSubString(const charPointer& s, const int& startIndex, const int& len) function above.
	*/
}

int countWords(const charPointer& s)
{
	/*
	Given a cstring that contains some words separated by spaces, this function
	returns the number of words in the cstring.
		Here, a word means some characters with no any space in between.
		Example: If the cstring parameter is "What    a     nice           problem ". 
		Then you see that there are FOUR words in this cstring, namely
		     1. What      2. a       3. nice      4. problem
		Your function then must return 4

		For simplicity,
		1. Assume that there are no spaces at the beginning or at the end of the cstring
		2. But a word can be separated from another word by one or more spaces
		3. Assume there is no any tab in the cstring
		4. Assume there is no any punctuation mark in the cstring.
	*/
}

int main()
{
	/*
	This main program is designed to test the functions you need to implement.
	You should NOT remove any line of code from this main program.
	But you may add more test code in the main program if you like.
	*/
	cout << "This program is designed to help you test your functions." << endl;
	srand(time(0));

	//Test cstrlen function
	cout << endl << "Testing cstrlen function";
	cout << endl << "------------------------" << endl;
	char s1[] = "irregular";
	cout << "The length of s1=\"" << s1 << "\" is " << cstrlen(s1) << endl;
	char emptyCstr[] = "";
	cout << "The length of \"\" is " << cstrlen(emptyCstr) << endl;

	//Test countChars functions
	cout << endl << "Testing countChars function";
	cout << endl << "---------------------------" << endl;
	char ch = 'r';
	int count = countChars(s1, ch);
	cout << "ch='" << ch << "' is found in s1=\"" << s1 << "\" " << count << " times." << endl; 

	//Test findChar functions
	cout << endl << "Testing findChar function";
	cout << endl << "-------------------------" << endl;
	int a = 2, b = cstrlen(s1);
	int index = findChar(s1, ch, a, b);
	cout << "ch='" << ch << "' is found in s1=\"" << s1 << "\" in the index interval [" << a << ", " << b << ") at index " << index << endl;
	a = 3;
	index = findChar(s1, ch, a);
	cout << "ch='" << ch << "' is found in s1=\"" << s1 << "\" in the index interval [" << a << ", " << b << ") at index " << index << endl;
	b = 8;
	index = findChar(s1, ch, a, b);
	cout << "ch='" << ch << "' is found in s1=\"" << s1 << "\" in the index interval [" << a << ", " << b << ") at index " << index << endl;
	index = findChar(s1, ch);
	cout << "ch='" << ch << "' is found in s1=\"" << s1 << "\" in the index interval [0, " << cstrlen(s1) << ") at index " << index << endl;

	//Test getCopy function
	cout << endl << "Testing getCopy function";
	cout << endl << "------------------------" << endl;
	char* s2 = getCopy(s1);
	cout << "A copy of \"irregular\" is s2=\"" << s2 << "\"" << endl;
	char* s3 = getCopy(s2);
	cout << "A copy of s2=\"" << s2 << "\" is s3=\"" << s3 << "\"" << endl;
	delete[] s2;
	s2 = new char('\0');
	cout << "s2 is modified to s2=\"" << s2 << "\" but s3 is still s3=\"" << s3 << "\"" << endl;
	delete[] s3;
	s3 = getCopy(s2);
	cout << "A copy of s2=\"" << s2 << "\" is s3=\"" << s3 << "\"" << endl;

	//Test rotateString function
	cout << endl << "Testing rotateString function";
	cout << endl << "-----------------------------" << endl;
	char s4[] = "asmara";
	for (int i = 0; i < 10; i++)
	{
		int r = rand() % 101 - 50;
		if (r > 0)
			cout << "s4=\"" << s4 << "\" rotated " << r << " times to the left becomes ";
		else
			cout << "s4=\"" << s4 << "\" rotated " << -r << " times to the right becomes ";
		rotateString(s4, r);
		cout << "\"" << s4 << "\"" << endl;
	}

	//Test empty function
	cout << endl << "Testing empty function";
	cout << endl << "----------------------" << endl;
	delete[] s2;
	s2 = getCopy(s1);
	cout << "Emptying s2=\"" << s2 << "\" gives s2=\"";
	empty(s2);
	cout << s2 << "\"" << endl;

	//Test append function
	cout << endl << "Testing append function";
	cout << endl << "----------------------" << endl;
	for (int i = 0; i < 20; i++)
	{
		ch = rand() % 26 + 97;
		cout << "Appending ch='" << ch << "' to s2=\"" << s2 << "\" gives s2=\"";
		append(s2, ch);	//This function is already implemented for you by the instructor
		cout << s2 << "\"" << endl;
	}

	//Test append function
	cout << endl << "Testing append function";
	cout << endl << "----------------------" << endl;
	cout << "Appending s2=\"" << s2 << "\" to s3=\"" << s3 << "\" gives s3=\"";
	append(s3, s2);
	cout << s3 << "\"" << endl;

	//Test removeChar function
	cout << endl << "Testing removeChar function";
	cout << endl << "---------------------------" << endl;
	for (int i = 0; i < 20; i++)
	{
		ch = rand() % 26 + 97;
		cout << "Removing ch='" << ch << "' from s2=\"" << s2 << "\" gives s2=\"";
		removeChar(s2, ch);	//This function is already implemented for you by the instructor
		cout << s2 << "\"" << endl;
	}

	//Test removeCharAll function
	cout << endl << "Testing removeCharAll function";
	cout << endl << "------------------------------" << endl;
	ch = rand() % 26 + 97;
	cout << "Removing all occurences of ch='" << ch << "' from s3=\"" << s3 << "\" (length = " << cstrlen(s3) << ") gives s3=\"";
	removeCharAll(s3, ch);
	cout << s3 << "\" (length = " << cstrlen(s3) << ")" << endl;

	//Test isEqual function
	cout << endl << "Testing isEqual function";
	cout << endl << "------------------------" << endl;
	if (isEqual(s2, s3))
		cout << "s2=\"" << s2 << "\" and s3=\"" << s3 << "\" are equal" << endl;
	else
		cout << "s2=\"" << s2 << "\" and s3=\"" << s3 << "\" are not equal" << endl;
	delete[] s3;
	s3 = getCopy(s2);
	if (isEqual(s2, s3))
		cout << "s2=\"" << s2 << "\" and s3=\"" << s3 << "\" are equal" << endl;
	else
		cout << "s2=\"" << s2 << "\" and s3=\"" << s3 << "\" are not equal" << endl;

	//Test isAnagram function
	cout << endl << "Testing isAnagram function";
	cout << endl << "--------------------------" << endl;

	if (isAnagram(s2, s3) == true)
		cout << "s2=\"" << s2 << "\" and s3=\"" << s3 << "\" are anagrams" << endl;
	else
		cout << "s2=\"" << s2 << "\" and s3=\"" << s3 << "\" are not anagrams" << endl;
	rotateString(s2, rand()%21-10);
	if (isAnagram(s2, s3) == true)
		cout << "s2=\"" << s2 << "\" and s3=\"" << s3 << "\" are anagrams" << endl;
	else
		cout << "s2=\"" << s2 << "\" and s3=\"" << s3 << "\" are not anagrams" << endl;
	removeChar(s2, s2[rand()%cstrlen(s2)]);
	if (isAnagram(s2, s3) == true)
		cout << "s2=\"" << s2 << "\" and s3=\"" << s3 << "\" are anagrams" << endl;
	else
		cout << "s2=\"" << s2 << "\" and s3=\"" << s3 << "\" are not anagrams" << endl;

	//Test zigzagMerge function
	cout << endl << "Testing zigzagMerge function";
	cout << endl << "----------------------------" << endl;
	empty(s2);
	for (int i = 0; i < 20; i++)
		if (rand() % 3 == 0)
			append(s2, rand() % 26 + 97);
	empty(s3);
	for (int i = 0; i < 20; i++)
		if (rand() % 3 == 0)
			append(s3, rand() % 26 + 65);
	char* s5 = zigzagMerge(s2, s3);
	cout << "The zigzag merge of s2=\"" << s2 << "\" and s3=\"" << s3 << "\" is s5=\"" << s5 << "\"" << endl;

	//Test getSubString function
	cout << endl << "Testing getSubString function";
	cout << endl << "-----------------------------" << endl;
	for (int i = 0; i < 5; i++)
	{
		int index = rand() % cstrlen(s1);
		int len = rand() % cstrlen(s1) + 1;
		cout << "A substring of s1=\"" << s1 << "\" starting from index " << index << " with " << len << " characters is ";
		cout << "\"" << getSubString(s1, index, len) << "\"" << endl;
	}

	//Test isSubString function
	cout << endl << "Testing isSubString function";
	cout << endl << "----------------------------" << endl;
	if (isSubString(s2, s2))
		cout << "s2=\"" << s2 << "\" is a substring of s2=\"" << s2 << "\"" << endl;
	else
		cout << "s2=\"" << s2 << "\" is not a substring of s2=\"" << s2 << "\"" << endl;
	if (isSubString(emptyCstr, s2))
		cout << "\"\" is a substring of s2=\"" << s2 << "\"" << endl;
	else
		cout << "\"\" is not a substring of s2=\"" << s2 << "\"" << endl;
	if (isSubString(s2, emptyCstr))
		cout << "s2=\"" << s2 << "\" is a substring of \"\"" << endl;
	else
		cout << "s2=\"" << s2 << "\" is not a substring of \"\"" << endl;
	empty(s3);
	for (int i = 0; i < cstrlen(s2); i++)
		append(s3, s2[rand()%cstrlen(s2)]);
	if (isSubString(s2, s3))
		cout << "s2=\"" << s2 << "\" is a substring of s3=\"" << s3 << "\"" << endl;
	else
		cout << "s2=\"" << s2 << "\" is not a substring of s3=\"" << s3 << "\"" << endl;

	//Test countWords function
	cout << endl << "Testing countWords function";
	cout << endl << "---------------------------" << endl;
	empty(s5);
	append(s5, 'A');
	for (int i = 0; i < 20; i++)
	{
		if (rand() % 5 == 0)
			append(s5, ' ');
		else
			append(s5, rand() % 26 + 97);
	}
	append(s5, 'Z');
	cout << "There are " << countWords(s5) << " words in s5=\"" << s5 << "\"" << endl;

	//Delete dynamic arrays
	cout << endl << "Deleting heap memories";
	cout << endl << "----------------------" << endl;
	cout << "Deleting s2."; delete[] s2; cout << " Done!" << endl;
	cout << "Deleting s3."; delete[] s3; cout << " Done!" << endl;
	cout << "Deleting s5."; delete[] s5; cout << " Done!" << endl;

	cout << endl;
	system("Pause");
	return 0;
}