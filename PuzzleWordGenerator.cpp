#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>
#include <set>


using namespace std;

#define REP(i, n) for (int i = 1; i <= n; i++)

set<string> wordList[26];
set<string> foundWords;
string inputArray[5][5];

bool visit[5][5];
int dx[] = { -1, -1, 0, 1, 1, 1, 0, -1 };
int dy[] = { 0, 1, 1, 1, 0, -1, -1, -1 };



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

void DepthfirstSearch(int i, int j, string word)
{
	visit[i][j] = true;
	int index = getIndex(word[0]);

	if (wordList[index].find(word) != wordList[index].end())
	{
		foundWords.insert(word);
	}

	if (foundWords.size() > 50)
	{
		return;
	}

	REP(index, 8)
	{
		int x = i + dx[index - 1];
		int y = j + dy[index - 1];

		if (x >= 1 && x <= 4 && y >= 1 && y <= 4 && visit[x][y] == false)
		{
			DepthfirstSearch(x, y, word + inputArray[x][y]);
		}
	}

	visit[i][j] = false;
}

bool comp(string a, string b)
{
	return a.size() > b.size();
}


int main()
{
	




	return 0;
}