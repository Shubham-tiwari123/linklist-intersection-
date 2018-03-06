#ifndef LINKLIST_H_INCLUDED
#define LINKLIST_H_INCLUDED
using namespace std;
class Linklist{
public:
    struct node{
        int data;
        node *next;
    };
    node *start,*temp,*newnode,*temp1,*temp2;
    int num,num1;

    int add_node(int);
    void display_node();
    Linklist(){
        start = NULL;
    }
};
int Linklist::add_node(int num){

    newnode = new node;
    newnode->data =num;
    newnode->next = NULL;
    if(start == NULL)
        start = newnode;
    else{
        temp= start;
        while(temp->next!=NULL)
            temp = temp->next;
        temp->next = newnode;
    }
    return 0;
}
void Linklist::display_node(){
    temp = start;
    cout<<endl;
    while(temp!=NULL){
        cout<<"\t"<<temp->data;
        temp=temp->next;
    }
}

#endif // LINKLIST_H_INCLUDED
