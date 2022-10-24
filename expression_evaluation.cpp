#include<iostream>
#include<conio.h>
#include<ctype.h>
#include <stack> 
#define SIZE 50
using namespace std;
class stack_expressions{
public:
 char s[SIZE];
 int top=-1;
void infix_to_postfix();
string postfix_to_prefix(string post_exp);
void postfix_evaluation();
 void push(char elem);
 char pop();
 int pr(char elem);
 bool isOperator(char x) 
 { 
 switch (x) { 
 case '+': 
 case '-': 
 case '/': 
 case '*': 
 return true; 
 } 
 return false; 
 }
};
 void stack_expressions::push(char elem)
 { 
 s[++top]=elem;
 }
 
 char stack_expressions::pop()
 { 
 return(s[top--]);
 }
 
 int stack_expressions::pr(char elem)
 { 
 int a;
 switch(elem)
 {
 
 case '#': return 0;
 case '(': return 1;
 case '+': return 2;
 case '-': return 2;
 case '*':return 3;
 case '/': return 3;
 default : return 10;
 }
 
 }
 
void stack_expressions::infix_to_postfix()
{
 char infx[50],pofx[50],ch,elem;
 int i=0,k=0;
 cout<<"\n\nEnter the Infix Expression ? ";
 cin>>infx;
 push('#');
 while( (ch=infx[i++]) != '\0')
 {
 if( ch == '(')
 {
 push(ch);
 }
 else if(isalnum(ch))
 {
 pofx[k++]=ch;
 }
 else if( ch == ')')
 {
 while( s[top] != '(')
 pofx[k++]=pop();
 elem=pop(); 
 }
 else
 { 
 while( pr(s[top]) >= pr(ch) )
 pofx[k++]=pop();
 push(ch);
 }
 }
 
 while( s[top] != '#') 
 pofx[k++]=pop();
 pofx[k]='\0'; 
 
 cout<<"\n-----------------------------------";
 cout<<"\n\nInfix Expn: "<<infx<<"\nPostfix Expn: "<<pofx;
 cout<<"\n-----------------------------------\n\n";
}
string stack_expressions::postfix_to_prefix(string post_exp){
 stack<string> s; 
 
 int length = post_exp.size(); 
 
 
 for (int i = 0; i < length; i++) { 
 
 if (isOperator(post_exp[i])) { 
 
 string op1 = s.top();
 s.pop(); 
 string op2 = s.top(); 
 s.pop(); 
 string temp = post_exp[i] + op2 + op1; 
 s.push(temp); 
 } 
 
 else { 
 s.push(string(1, post_exp[i])); 
 } 
 } 
 
 return s.top(); 
}
void stack_expressions::postfix_evaluation(){
 char exp[20];
 char *e;
 int n1,n2,n3,num;
 
 cout<<"\nEnter the expression :: ";
 cin>>exp;
 e = exp;
 while(*e != '\0')
 {
 if(isdigit(*e))
 {
 num = *e - 48;
 push(num);
 }
 else
 {
 n1 = pop();
 n2 = pop();
 switch(*e)
 {
 case '+':
 
 n3 = n1 + n2;
 break;
 
 case '-':
 
 n3 = n2 - n1;
 break;
 
 case '*':
 
 n3 = n1 * n2;
 break;
 
 case '/':
 
 n3 = n2 / n1;
 break;
 
 case '^':
 {
 int i=n1,sq=1;
 while(i>0)
 {
 sq=sq*n2;
 i--;
 }
 n3 = sq;
 break;
 }
 default:
 cout<<"\n\nInvalid Expression!!\nCan not be evaluate!!!";
 exit(0);
 }
 push(n3);
 }
 e++;
 }
 // cout<<"\nThe result of expression: " <<exp<<" = "<<pop();
 cout<<"\n-----------------------------------";
 printf("\nThe result of expression %s = %d\n",exp,pop());
 cout<<"\n-----------------------------------\n\n";
}
int main()
{
 stack_expressions obj1;
 while(1){
 
 cout<<"\n\n*********** Menu ***********\n\n";
 cout<<"1 infix to postfix: \n";
 cout<<"2 postfix to prefix:\n";
 cout<<"3 postfix Evaluation:\n";
 cout<<"4 exit\n\n";
 cout<<"****************************\n\n";
 
 int choise;
 cout<<"\n Enter Your Choise:";
 cin>>choise;
 switch(choise){
 
 case 1:
 obj1.infix_to_postfix();
 break;
 
 case 2:
 char pof_inf[50];
 cout<<"\n\nEnter the Postfix Expression ? ";
 cin>>pof_inf;
 cout<<"\n-----------------------------------";
 cout << "\nPrefix : " << obj1.postfix_to_prefix(pof_inf);
 cout<<"\n-----------------------------------\n\n";
 break;
 
 
 case 3:
 obj1.postfix_evaluation();
 break;
 
 case 4:
 exit(0);
 break;
 
 default:
 cout<<"\nPlease Enter Valid Choise\n";
 }
 
 }
 getch();
}
