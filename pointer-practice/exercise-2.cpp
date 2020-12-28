#include <vector>
#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>

using namespace std;

int main() {

    int times;
    cout << "Enter the amount of entries in the dataset" << endl;
    cin >> times;
    vector<int> dataset;
    int in;

    for(int i = 0; i < times; i++) {
        cout << "Input your dataset entry." << endl;
        cin >> in;
        dataset.push_back(in);
    }

    sort(dataset.begin(), dataset.end());
    int* maxptr = &dataset[0];
    cout << maxptr << endl;
    cout << dataset[0] << endl;
    return 0;
}