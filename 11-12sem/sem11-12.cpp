/*
// Explore random

#include <iostream>
#include <string>
#include <random>
using namespace std;


class Hero {
public:
  

    Hero(string x, int y, int z)
    {
        name = x;
        health = y;
        strength = z;   
    }

    
    int& strike_by(Hero hero2)
    {
        return health -= rand() % hero2.strength;
    }

    string name;
    int health;
    int strength;

};





int main()
{
    Hero Elf("Josh", 100, 18);
    Hero Orc("Lord", 120, 12);
    cout << "Elf " << Elf.name << " have " << Elf.health << " HP and " << Elf.strength << " strength" << endl;
    cout << "Orc " << Orc.name << " have " << Orc.health << " HP and " << Orc.strength << " strength" << endl;
    while ((Elf.health > 0) & (Orc.health > 0))
    {
       Elf.strike_by(Orc);
       cout << "HP Elf " << Elf.health << endl;
       Orc.strike_by(Elf);
       cout << "HP Orc " << Orc.health << endl;
    }
    if (Elf.health < 0)
        cout << "Elf is dead" << endl;
    else
        cout << "Orc is dead" << endl;
}

*/


#include <iostream>
#include <vector>
#include <iterator>
#include <algorithm>
#include <random>

using namespace std;

int main() {

    vector <int> vector1;
    vector1.reserve(10);
    for (int i = 0;i < 10; i++)
        vector1.push_back(i);

    
    for (vector<int>::const_iterator it = vector1.begin(); it != vector1.end(); ++it) {
        cout << *it << ' ';
    }
    cout << endl;
    int x, y, z;
    cout << "Add numbers: ";
    cin >> x >> y >> z;
    vector1.push_back(x);
    vector1.push_back(y);
    vector1.push_back(z);
    cout << "Add some numbers" << endl;
    for (vector<int>::const_iterator it = vector1.begin(); it != vector1.end(); ++it) {
        cout << *it << ' ';
    }
    cout << endl;
    //RANDOM SHUFFLE
    cout << "Random shuffle" << endl;
    random_shuffle(vector1.begin(), vector1.end());
    for (vector<int>::const_iterator it = vector1.begin(); it != vector1.end(); ++it) {
        cout << *it << ' ';
    }
    cout << endl;
    //DELETE DUBLICATES

    cout << "Delete the dublicates" << endl;
    sort(vector1.begin(), vector1.end());
    vector1.erase(unique(vector1.begin(), vector1.end()), vector1.end());
    for (vector<int>::const_iterator it = vector1.begin(); it != vector1.end(); ++it) {
        cout << *it << ' ';
    }
    cout << endl;
    //Counting odd numbers
    int counter = 0;
    for (vector<int>::const_iterator it = vector1.begin(); it != vector1.end(); ++it) {
        if ((*it % 2) == 1)
            counter++;
    }
    cout << "Odd numbers: " << counter << endl;
    //MIN and MAX
    sort(vector1.begin(), vector1.end());
    vector<int>::const_iterator it1 = vector1.begin();
    cout << "MIN: " << *it1 << endl;
    cout << "MAX: " << *it1 + size(vector1) - 1 << endl;
    //Finding a prime number
    cout << "Prime numbers: ";
    for (vector<int>::const_iterator it = vector1.begin(); it != vector1.end(); ++it) {
        bool check = true;
        for (int i = 2; i < sqrt(size(vector1)); i++)
        {
            if (*it % i == 0)
                check = false;
            if ((*it == 2) || (*it == 3))
                check = true;
        }
        if (check == true)
            cout << *it << " ";
    }
        //Squaring
    vector<int>::iterator it = vector1.begin();
    while (it != vector1.end())    
    {
        *it = (*it) * (*it);
        it++;
    }
    cout << endl << "Squaring: ";
    for (vector<int>::iterator it = vector1.begin(); it != vector1.end(); ++it) {
        cout << *it << ' ';
    }
    

    //RANDOM + NEW 
    
    cout << endl << "Random: ";
    vector<long long int> vector2;
    vector2.reserve(10);
    for (int i = 0; i < 10; i++)
        vector2.push_back(rand());
    for (vector<long long int>::iterator it = vector2.begin(); it != vector2.end(); ++it) {
        cout << *it << ' ';
    }

    cout << endl;

    //SUM
    
    int sum = 0;
    for (vector<long long int>::iterator it = vector2.begin(); it != vector2.end(); ++it) {
        sum += *it;
    }

    cout  << "SUM: " << sum << endl;

    // Change the start to 1
    cout << "Some changes: ";
    for (vector<long long int>::iterator it = vector2.begin(); it != vector2.end() - size(vector2) + 4; ++it) {
        *it = 1;
    }
    for (vector<long long int>::iterator it = vector2.begin(); it != vector2.end(); ++it) {
        cout << *it << ' ';
    }

    cout << endl;

    //The difference between the vectors
    vector<long long int>::iterator it2 = vector2.begin();
    vector<long long int> vector3;
    vector3.reserve(10);
    for (int i = 0; i < 10; i++)
        vector3.push_back(0);
    vector<long long int>::iterator it3 = vector3.begin();
    for (vector<int>::iterator it = vector1.begin(); it != vector1.end(); ++it) {
        *it3 = (*it) - (*it2);  
        it++;
        it2++;
        it3++;
    }
    cout << "The difference between the vectors: ";
    for (vector<long long int>::iterator it = vector3.begin(); it != vector3.end(); ++it) {
        cout << *it << ' ';
    }
    cout << endl;
    //Assign zero to negative elements
    cout << "Assign zero to negative elements: ";
    for (vector<long long int>::iterator it = vector3.begin(); it != vector3.end(); ++it) {
        if ((*it) < 0)
            *it = 0;
        cout << *it << ' ';
    }
    cout << endl;
    //Delete zeros
    vector<int> vector32;
    for (vector<long long int>::iterator it = vector3.begin(); it != vector3.end(); ++it) {
        if ((*it) != 0)
            vector32.push_back(*it);
        //cout << *it << ' ';
    }

    cout << "Delete zeros: ";
    for (vector<int>::iterator it = vector32.begin(); it != vector32.end(); ++it) {
        cout << *it << ' ';
    }
    cout << endl;
    //Revers
    reverse(vector32.begin(),vector32.end());
    cout << "Reverse: ";
    for (vector<int>::iterator it = vector32.begin(); it != vector32.end(); ++it) {
        cout << *it << ' ';
    }
    cout << endl;
    //Top-3 max lol :)
    cout << "Top-3 max: ";
    nth_element(vector32.begin(), vector32.end() - 3, vector32.end());
    copy(vector32.end() - 3, vector32.end(), ostream_iterator<int>(std::cout, " "));
    cout << endl;

    //Sort and merge
    cout << "Sort and merge: ";
    sort(vector1.begin(),vector1.end());
    sort(vector2.begin(), vector2.end());
    vector<int> vector_merge;
    merge(vector1.begin(), vector1.end(), vector2.begin(), vector2.end(), back_inserter(vector_merge));
    for (vector<int>::iterator it = vector_merge.begin(); it != vector_merge.end(); ++it) {
        cout << *it << ' ';
    }
    cout << endl;

};


