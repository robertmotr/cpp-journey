#include<iostream> 
#include<vector> // for 2D vector 
#include<algorithm> // for sort() 
using namespace std; 

bool sortcol( const vector<int>& v1, 
			const vector<int>& v2 ) { 
return v1[1] > v2[1]; 
} 

int main() 
{ 
	vector< vector<int> > vect{{3, 5, 1}, 
								{4, 8, 6}, 
								{7, 2, 9}}; 

	// rows; 
	int m = vect.size(); 
    // cols
	int n = vect[0].size(); 
	cout << "The Matrix before sorting is:\n"; 
	for (int i=0; i<m; i++) 
	{ 
		for (int j=0; j<n ;j++) 
			cout << vect[i][j] << " "; 
		cout << endl; 
	}							 

	sort(vect.begin(), vect.end(), sortcol); 
	cout << "The Matrix after sorting is:\n"; 
	for (int i=0; i<m; i++) 
	{ 
		for (int j=0; j<n ;j++) 
			cout << vect[i][j] << " "; 
		cout << endl; 
	} 
	return 0; 
} 
