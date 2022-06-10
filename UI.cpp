using namespace std;

void UI::initMsg(){
    cout << "----------------------------------------\n\n\n" << endl;
    cout << "               black jack\n\n\n" << endl;
    cout << "----------------------------------------" << endl;
}

string UI::putName(){
    string TempName;
    cout << "이름을 입력하세요 : "
    cin >> TempName;
    cout << TempName << "님, 환영합니다."; << endl;

    return TempName;
}

void init(){
    UI UI;
    UI.initMsg();
}