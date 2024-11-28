#include<bits/stdc++.h>
using namespace std;
struct ListNode{
	int val;
	ListNode* next;
};
ListNode* reverseList(ListNode* head) {
        ListNode* cur = head;
        ListNode* newHead;
        // ListNode* tail;
        if(cur == nullptr){
            return cur;
        }
        ListNode* prev = nullptr;
        while(cur->next != nullptr){
            // cout<<cur->val<<endl;
            ListNode* tmp = cur->next;
            cur->next = prev;
            // tmp->next = prev;
            prev = cur;
            cur = tmp;            
        }
        cur->next = prev;
        newHead = cur;
        return newHead;
 }
int main()
{
	ListNode* node1 = new ListNode();
	node1->val = 10;
	ListNode* node2 = new ListNode();
	node2->val = 20;
	ListNode* node3 = new ListNode();
	node3->val = 30;
	node1->next = node2;
	node2->next = node3;
	node3->next = nullptr;
	cout<<"Before reversing"<<endl;
	ListNode* head = node1;
	while(head != nullptr){
		cout<<head->val<<' ';
		head = head->next;
	}
	cout<<endl;
	cout<<"After reversing"<<endl;
	ListNode* curHead = reverseList(node1);
	while(curHead != nullptr){
		cout<<curHead->val<<' ';
		curHead = curHead->next;
	}
}