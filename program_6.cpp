#include<iostream>
#include<stack>
#include<queue>
using namespace std;

void menu(){
    cout<<"\n====STL====";
    cout<<"\n1.STACK";
    cout<<"\n2.QUEUE";
    cout<<"\n3.EXIT";
    cout<<"\n===========\n";
}

void menu_stack(){
    cout<<"\n====STACK====";
    cout<<"\n1.PUSH";
    cout<<"\n2.POP";
    cout<<"\n3.SHOW STACK";
    cout<<"\n4.GOTO MAIN MENU";
    cout<<"\n5.EXIT";
    cout<<"\n=============\n";
}

void menu_queue(){
    cout<<"\n====QUEUE====";
    cout<<"\n1.PUSH";
    cout<<"\n2.POP";
    cout<<"\n3.FRONT";
    cout<<"\n4.BACK";
    cout<<"\n5.SIZE";
    cout<<"\n6.SHOW QUEUE.";
    cout<<"\n7.GOTO MAIN MENU";
    cout<<"\n8.EXIT";
    cout<<"\n=============\n";
}



void show_stack(stack<int> &st){        //NOTE : only call show_stack function of stack once you have made the stack or the stack is empty , bcoz while printing the stack element it will pop all elements while doing so.
    if(st.empty())
        cout<<"\nSTACK : **EMPTY**";
    else{
        cout<<"\nSTACK : ";
        while(!st.empty()){
            cout<<st.top()<<" ";
            st.pop();
        }
    }
    cout<<endl;
}

void show_queue(queue<int> &q){
    if(q.size()==0)
        cout<<"\nQueue : **EMPTY**";
    else{
        cout<<"\nQueue : ";
        while(q.size() != 0){
            cout<<q.front()<<" ";
            q.pop();
        }
    }
    cout<<endl;
}

int main(){
    stack<int> st;          //stack stl declaration
    queue<int> q;           //queue stl declaration
    int choice;
    menu:
    menu();
    cout<<"Enter choice : ";
    cin>>choice;
    switch(choice){

    case 1:             //stack case
        stack:
        int stack_choice;
        menu_stack();
        cout<<"Enter choice : ";
        cin>>stack_choice;
        switch(stack_choice){
            case 1:             //push
                int temp;
                cout<<"Enter data to be entered : ";
                cin>>temp;
                st.push(temp);
                goto stack;
                break;
                
            case 2:             //pop
                if(st.empty())
                    cout<<"\n***EMPTY STACK! POP NOT POSSIBLE***\n";
                else
                    st.pop();
                goto stack;
                break;
            
            case 3:                 //show
                show_stack(st);
                goto stack;
                break;

            case 4:             //show menu
                goto menu;
                break;


            case 5:                 //exit
                cout<<"\n***PROGRAM TERMINATED.***";
                exit(1);

            default:
                cout<<"\nWRONG INPUT\n";
                exit(0);
                break;
        }
        break;



    case 2:         //queue
        queue:
        menu_queue();
        int queue_choice;
        cout<<"Enter choice : ";
        cin>>queue_choice;


        switch(queue_choice){
            case 1:         //queue push
                int temp;
                cout<<"Enter value to be pushed : ";
                cin>>temp;
                q.push(temp);
                goto queue;
                break;

            case 2:             //queue pop
                q.pop();
                goto queue;
                break;

            case 3:
                cout<<"\nFront element : "<<q.front()<<endl;        //queue front
                goto queue;
                break;

            case 4:
                cout<<"\nBack element : "<<q.back()<<endl;          //queue back
                goto queue;
                break;

            case 5:
                cout<<"\nSize of Queue : "<<q.size();       //queue size
                goto queue;
                break;

            case 6:                                             //print queue
                show_queue(q);
                goto queue;
                break;

            case 7:
                goto menu;             //redirect
                break;

            case 8:
                cout<<"\nPROGRAM TERMINATED\n";
                exit(1);
            
            default:
                cout<<"\n**WRONG INPUT**\n";
                exit(0);
                break;

        }

        break;


    default:
        cout<<"\n**WRONG INPUT**\n";
        exit(0);
        break;
    }
    return 0;
}