#include <iostream>
#include "linklist.h"
#include "intersection.h"
using namespace std;
int main()
{
    IntersectionLinklist l,l1,l2;
    l.add_node(2);
    l.add_node(3);
    l.add_node(4);
    l.add_node(5);
    l.add_node(6);
    cout<<"First list:-\n";
    l.display_node();
    l1.add_node(4);
    l1.add_node(5);
    l1.add_node(6);
    l1.newnode->next = l.start->next->next->next;
    cout<<"\nSecond list:-\n";
    l1.display_node();
    l2.intersection(l,l1);
}
