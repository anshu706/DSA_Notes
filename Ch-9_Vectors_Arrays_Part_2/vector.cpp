// VECTOR SYNTAX
/*
vector<int> vec;

vector<int vec = {1,2,3};

vector<int> vec(3,0);

#include <iostream>
#include <vector>

using namespace std;
int main()
{
    vector<int> vec = {'a', 'b', 'c', 'd', 'e'};

    for (char val : vec)
    {
        cout << val << endl;
    }

    return 0;
}
*/

/*  VECTOR FUNCTIONS
------------size-------------------------------

#include <iostream>
#include <vector>

using namespace std;
int main()
{
    vector<int> vec = {'a', 'b', 'c', 'd', 'e'};

    cout << "size" << vec.size() << endl;
    for (char val : vec)
    {
        cout << val << endl;
    }

    return 0;
}

---------------push_back-------------------------

#include <iostream>
#include <vector>

using namespace std;
int main()
{
    vector<int> vec;

    cout << "size" << vec.size() << endl;
    vec.push_back(25);
    vec.push_back(35);
    vec.push_back(45);
    cout << "after push back size" << vec.size() << endl;

    for (char val : vec)
    {
        cout << val << endl;
        }

        return 0;
        }


----------------------pop_back------------------
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec;

    vec.push_back(25);
    vec.push_back(35);
    vec.push_back(45);
    cout << "after push back size = " << vec.size() << endl;

    vec.pop_back();

    for (int val : vec)
    {
        cout << val << endl;
    }

    return 0;
}

-------------------front------------------------
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec;

    vec.push_back(25);
    vec.push_back(35);
    vec.push_back(45);
    cout << "after push back size = " << vec.size() << endl;

    vec.pop_back();

    cout << vec.front() << endl;

    return 0;
}

----------------------back----------------------
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec;

    vec.push_back(25);
    vec.push_back(35);
    vec.push_back(45);
    cout << "after push back size = " << vec.size() << endl;

    vec.pop_back();

    cout << vec.back() << endl;

    return 0;
}

----------------------at------------------------

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> vec;

    vec.push_back(25);
    vec.push_back(35);
    vec.push_back(45);
    cout << "after push back size = " << vec.size() << endl;

    vec.pop_back();

    cout << vec.at(0) << endl;

    return 0;
}
*/
