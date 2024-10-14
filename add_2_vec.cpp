#include <iostream>
#include <vector>
using namespace std;
vector<int> addVectors(const vector<int>& vec1, const vector<int>& vec2) {
    if (vec1.size() != vec2.size()) {
        throw invalid_argument("Vectors must be of the same length");
    }

    vector<int> result(vec1.size());
    for (size_t i = 0; i < vec1.size(); ++i) {
        result[i] = vec1[i] + vec2[i];
    }
    return result;
}

int main() {
    vector<int> vec1 = {1, 2, 3};
    vector<int> vec2 = {4, 5, 6};

    try {
        vector<int> result = addVectors(vec1, vec2);
        cout << "Resultant vector: ";
        for (int value : result) {
            cout << value << " ";
        }
        cout << endl;
    } catch (const invalid_argument& e) {
        cerr << e.what() << endl;
    }

    return 0;
}