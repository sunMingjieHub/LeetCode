/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        /*分别将两指针指向两条单链表的头节点，依次相加，将和值除以10得新链表中节点的值
        ，再对10取余将其加到下一个节点上，得到新链表返回即可*/

        ListNode *p1,*p2,*p3 ;//p1,p2指向l1,l2，p3指向新链表
        int tval ,temp ,ltemp,tp1,tp2;// tval 保存新链表中应存的值,temp保存当前三者的和,ltemp上次的进位
        p1 =l1;
        p2 = l2;
        temp = p1->val+p2->val;
        tval= temp%10;
        ListNode l3(tval);
        p3 = &l3;
        ltemp = temp/10;   
        tp1=tp2=0;
        int count = 0;
        while(p1->next != NULL || p2->next != NULL){//两个链表都不为空时
            count++;
            if(p1->next!=NULL){
                p1=p1->next;
                tp1 = p1->val;//暂存l1链表中的值
            }else tp1 = 0;
            if(p2->next!=NULL){
                p2 = p2->next;
                tp2 = p2->val;//暂存l2链表中的值
            }else tp2 = 0;
            temp = tp1+tp2+ltemp;
            tval= temp%10;
            cout<<"tval  "<<tval<<endl;
            ltemp = temp/10;   
            cout<<"ltemp  "<<ltemp<<endl;
            ListNode tel(tval);
            cout<<tel.val<<"--  ";
            p3->next = &tel;
            p3 = p3->next;
            cout<<p3->val<<endl;
          
        }
        cout<<count<<endl;
        return &l3;
        
    }
    
    
    
};/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        /*分别将两指针指向两条单链表的头节点，依次相加，将和值除以10得新链表中节点的值
        ，再对10取余将其加到下一个节点上，得到新链表返回即可*/

        ListNode *p1,*p2,*p3,*l3 ;//p1,p2指向l1,l2，p3指向新链表
        int tval ,temp ,ltemp,tp1,tp2;// tval 保存新链表中应存的值,temp保存当前三者的和,ltemp上次的进位
        p1 =l1;
        p2 = l2;
        temp = p1->val+p2->val;
        tval= temp%10;
        l3 = new ListNode(tval);
        p3 = l3;
        ltemp = temp/10;   
        tp1=tp2=0;
        while(p1->next != NULL || p2->next != NULL){//两个链表都不为空时
            if(p1->next!=NULL){
                p1=p1->next;
                tp1 = p1->val;//暂存l1链表中的值
            }else tp1 = 0;
            if(p2->next!=NULL){
                p2 = p2->next;
                tp2 = p2->val;//暂存l2链表中的值
            }else tp2 = 0;
            if(ltemp>0)
            temp = tp1+tp2+ltemp;
            else temp = tp1+tp2;
            tval= temp%10;
            ltemp = temp/10;   
            p3->next = new ListNode(tval);
            p3= p3->next;      
        }
        if(ltemp!=0) p3->next=new ListNode(ltemp);
        
        return l3;
        
    }
    
    
    
};