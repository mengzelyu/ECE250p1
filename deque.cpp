#include <iostream>
#include "deque.h"

queue::queue(){
    head = tail = NULL;
    size=0; 
}

queue::~queue(){
    delete head;
    delete tail;
    size=0;
}

void queue::enqueue_front(int i){
    if (head==NULL && tail==NULL){
        head=tail=new Node;
        head->num=i;
        head->next=NULL;
        head->pre=NULL;
    }else{
        Node *p =new Node;
        p->num=i;
        p->pre=NULL;
        p->next=head;
        head->pre=p;
        head=p;
    }
    ++size;
    std::cout << "success" << std::endl;
}

void queue::enqueue_back(int i){
    if (head==NULL && tail==NULL){
        head=tail=new Node;
        head->num=i;
        head->next=NULL;
        head->pre=NULL;
    }else{
        Node *p=new Node;
        p->next=NULL;
        p->pre=tail;
        p->num=i;
        tail->next=p;
        tail=p;
    }
    ++size;
    std::cout << "success" << std::endl;
}

void queue::dequeue_front(){
    if (head==NULL){
        throw "failure:list is empty";
    }else{
        Node *temp=head->next;
        delete head;
        head=temp;
        if(head!=NULL){
        	head->pre=NULL;
		}
        size--;
    }
    std::cout << "success:element removed form front" << std::endl;
}

void queue::dequeue_back(){
    if (head==NULL){
        throw "failure:list is empty";
    }else{
        Node *temp=tail->pre;
        delete tail;
        tail=temp;
        if(tail!=NULL){
        	tail->pre=NULL;
		}
        size--;
    }
    std::cout << "success:element removed from end" << std::endl;
}

void queue::clear(){
    if (head==NULL){
        throw "failure:list already empty";
    }else{
        Node *temp=head;
        while(temp!= NULL){
        	Node *next=temp->next;
        	delete temp;
        	temp=next;
		}
		head=tail=NULL;
    }
    std::cout << "success:list is emptied" << std::endl;
}

void queue::front(int i){
    if (head->num==i){
        std::cout << "success:front is equal" << std::endl;
    }else {
        throw "failure:front is not equal";
    }
}

void queue::back(int i){
    if (tail->num==i){
        std::cout << "success:end is equal" << std::endl;
    }else{
        throw "failure:end is not equal";
    }
}

void queue::empty(){
    if(head==NULL){
        std::cout << "success:list is empty" << std::endl;
    }else{
        throw "failure:list is not empty";
    }
}

void queue::sizeoflist(){
    if(size>0){
        std::cout << "size is: " << size << std::endl;
    }else{
        throw "failure:list is empty";
    }
}

void queue::print(){
    Node *p=head;
    while (p!=NULL){
        std::cout << p->num;
        if  (p->next!=NULL){
        	std::cout <<" ";
		}
        p=p->next;
    }
    std::cout << std::endl;
    p=tail;
    while (p!= NULL){
        std::cout << p->num;
        if  (p->pre!=NULL){
        	std::cout <<" ";
		}
        p=p->pre;
    }
    std::cout << std::endl;
    
}
