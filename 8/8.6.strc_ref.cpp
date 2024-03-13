#include <iostream>

struct free_throws
{
    std::string name;
    int made;
    int attempts;
    float percent;
};
void set_pc(free_throws &ft);
void display(const free_throws &ft);
free_throws &accumulate(free_throws &target, const free_throws &source); // 返回值是一个引用

int main()
{
    using namespace std;
    free_throws one = {"Ifelsa Branch", 13, 14};
    free_throws two = {"Andor Knott", 10, 16};
    free_throws three = {"minnie max", 7, 9};
    free_throws four = {"whily Looper", 5, 9};
    free_throws five = {"Long Long", 6, 14};
    free_throws team = {"Throwgods", 0, 0};
    free_throws dup;

    set_pc(one);
    display(one);
    accumulate(team, one);
    display(team);
    display(accumulate(team,two));
    display(accumulate(accumulate(team,three),four));
    display(team);
    dup = accumulate(team,five);
    display(team);
    display(dup);
    set_pc(four);
    accumulate(dup,five) =four;
    display(dup);
    return 0;
}

void set_pc(free_throws &ft)
{
    if (ft.attempts)
    {
        ft.percent = float(ft.made) / float(ft.attempts) * 100.0f;
    }
    else
    {
        ft.percent = 0;
    }
}
void display(const free_throws &ft)
{
    using std::cout;
    cout << "name : " << ft.name << "\n";
    cout << " made : " << ft.made << "\t";
    cout << " attempts : " << ft.attempts << "\t";
    cout << " percent : " << ft.percent << "\n";
}

free_throws &accumulate(free_throws &target, const free_throws &source) // 返回值是一个引用
{
    target.attempts += source.attempts;
    target.made += source.made;
    set_pc(target);
    return target;
}