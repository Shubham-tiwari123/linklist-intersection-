#ifndef INTERSECTION_H_INCLUDED
#define INTERSECTION_H_INCLUDED
#include "linklist.h"
class IntersectionLinklist:public Linklist{
public:
    int intersection(IntersectionLinklist ,IntersectionLinklist);
};
int IntersectionLinklist::intersection(IntersectionLinklist l1 , IntersectionLinklist l2){
    int flag = 0;
    temp1 = l1.start;
    temp2 = l2.start;
    while(temp1!=NULL){
        temp2 = l2.start;
        while(temp2!=NULL){
            if(temp1->next == temp2->next && temp2->next == NULL){
                cout<<"\nno intersection";
                flag = 1;
                break;
            }
            if(temp1->next == temp2->next){
                cout<<"\nintersection";
                flag = 2;
                break;
            }
            temp2 = temp2->next;
        }
        if(flag == 1)
            break;
        if(flag == 2)
            break;
        temp1=temp1->next;
    }

    return 0;
}
#endif // INTERSECTION_H_INCLUDED
