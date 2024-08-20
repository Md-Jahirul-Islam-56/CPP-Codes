#include <bits/stdc++.h>
using namespace std;

class student
{
public:
    int total_size, used_size, *ptr;
    student(student *a, int t_size, int u_size)
    {

        // (*a).total_size =t_size;
        // (*a).used_size =u_size;
        // (*a).ptr =(int *)malloc(t_size * sizeof(int));

        a->total_size = t_size;
        a->used_size = u_size;
        a->ptr = (int *)malloc(total_size * sizeof(int));
    }


    void show(student *a);
    void set(student *a);
};

void student :: show(student *a)
{
    for (int i = 0; i < (a->used_size); i++)
    {
        cout << (a->ptr)[i] << " ";
    }
}

void student :: set(student *a)
{
    for (int i = 0; i < (a->used_size); i++)
    {
        cout<<"Enter "<<i<<"th element:"<<endl;
        cin>> (a->ptr)[i];
    }
}


int main()
{

    student marks(&marks, 10, 2);
    marks.set(&marks);
    marks.show(&marks);
   

    return 0;
}