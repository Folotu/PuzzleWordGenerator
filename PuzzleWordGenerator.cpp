#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>

using namespace std;

#define REP(i, n) for (int i = 1; i <= n; i++)

void getIndex()
{
	return ch - 'a';



}



void preProcess()
{
	cout << "prepocessing..." << endl;
	string word;
	ifstream word_file("lowercase.txt");

	while (word_file >> word)
	{
		int index = getIndex(word[0]);

		wordList[index].insert(word);

	}
	
	word_file.close();

	cout << "preprocessing done" << endl;

}

void reset()
{
	REP(i, 26) REP(j, 26) visit[i][j] = false;
}

void Depthfirst()
{


}

bool comp()
{


}


int main()
{
	




	return 0;
}