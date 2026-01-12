#include <iostream>
using namespace std;


class Academic {
public:
    void showMarks() {
        cout << "Academic Marks: 85" << endl;
    }
};


class Sports {
public:
    void showSportsScore() {
        cout << "Sports Score: 90" << endl;
    }
};


class Result : public Academic, public Sports {
public:
    void showResult() {
        cout << "Overall Result: Passed" << endl;
    }
};

int main() {
    Result r;
    r.showMarks();      
    r.showSportsScore();  
    r.showResult();      
    return 0;
}
