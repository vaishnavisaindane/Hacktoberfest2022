#include <iostream>
using namespace std;
# define MAX 3
class food_order{
 public:
 string Cust_name[MAX];
 string Cust_order[MAX];
 int front= -1, rear= -1;
 
 void insert_rear_circular();
 void delete_front_circular();
 void display_circular();
 
 void insert_rear_linear();
 void delete_front_linear();
 void display_linear();
 
};
void food_order::insert_rear_linear(){
 string name, order;
 cout<<"\nCustomer Name: ";
 cin>>name;
 cout<<"Order of custommer: ";
 cin>>order;
 
 if((front==0 && rear==MAX-1) || (rear== front-1 && front!=0 )){
 cout<<"Queue is Full!! ";
 }
 else if(front==-1 && rear== -1){
 
 front=front+1;
 rear=rear+1;
 Cust_name[front] =name;
 Cust_order[front]=order;
 
 }
 else 
 {
 rear=rear+1;
 Cust_name[rear] =name;
 Cust_order[rear]=order;
 
 
 }
}
void food_order::delete_front_linear(){
 
 if(front==-1 && rear== -1){
 cout<<"Queue is Empty!! ";
 }
 else{
 front= front+1;
 }
 
 
}
void food_order::display_linear(){
 if(front==-1 && rear== -1)
 {
 cout<<"Queue is Empty!! ";
 }
 else if (rear >= front)
 {
 cout<<"\n\n***** Orders*****\n";
 for (int i = front; i <= rear; i++)
 {
 cout<<"\n"<<i<<") "<<Cust_name[i]<<" => "<<Cust_order[i];
 }
 cout<<"\n****************\n\n";
 }
 
}
void food_order::insert_rear_circular(){
 string name, order;
 cout<<"\nCustomer Name: ";
 cin>>name;
 cout<<"Order of custommer: ";
 cin>>order;
 
 if((front==0 && rear==MAX-1) || (rear== front-1 && front!=0 )){
 cout<<"Queue is Full!! ";
 }
 else if(front==-1 && rear== -1){
 
 front=front+1;
 rear=rear+1;
 Cust_name[front] =name;
 Cust_order[front]=order;
 
 }
 else if((front != 0 && front!=-1) && rear==MAX-1){
 rear=0;
 Cust_name[rear] =name;
 Cust_order[rear]=order;
 
 }
 else 
 {
 rear=rear+1;
 Cust_name[rear] =name;
 Cust_order[rear]=order;
 
 
 }
}
void food_order::delete_front_circular(){
 
 if(front==-1 && rear== -1){
 cout<<"Queue is Empty!! ";
 }
 else if(front == MAX-1){
 front=0;
 }
 else{
 front= front+1;
 }
 
 
}
void food_order::display_circular(){
 if(front==-1 && rear== -1)
 {
 cout<<"Queue is Empty!! ";
 }
 else if (rear >= front)
 {
 cout<<"\n\n***** Orders*****\n";
 for (int i = front; i <= rear; i++)
 {
 cout<<"\n"<<i<<") "<<Cust_name[i]<<" => "<<Cust_order[i];
 }
 cout<<"\n****************\n\n";
 }
 else
 {
 cout<<"\n\n***** Orders*****\n";
 for (int i = front; i < MAX ; i++)
 {
 cout<<"\n"<<i<<") "<<Cust_name[i]<<" => "<<Cust_order[i];
 }
 for (int i = 0; i <= rear; i++)
 {
 cout<<"\n"<<i<<") "<<Cust_name[i]<<" => "<<Cust_order[i];
 }
 cout<<"\n****************\n\n";
 }
}
int main()
{
 food_order obj1, obj2;
 
 
 while(1){
 
 cout<<"\n\n*********** Queue using Array ***********\n\n";
 cout<<"1 Using Linear Queue : \n";
 cout<<"2 Using Circular Queue :\n";
 cout<<"3 exit\n\n";
 cout<<"****************************\n\n";
 
 int choise,choise1;
 cout<<"\n Enter Your Choise:";
 cin>>choise1;
 switch(choise1){
 
 case 1:
 while(1){
 
 cout<<"\n\n------------ Linear Queue Menu ------------\n";
 cout<<"1 Give order (Insertion): \n";
 cout<<"2 Serve Order (Deletion):\n";
 cout<<"3 Display:\n";
 cout<<"4 exit\n\n";
 cout<<"------------------------------------\n";
 
 int choise;
 cout<<"\n Enter Your Choise:";
 cin>>choise;
 if(choise == 1){
 obj1.insert_rear_linear();
 // break;
 }
 else if(choise== 2) { 
 obj1.delete_front_linear();
 // break;
 }
 else if(choise == 3){
 obj1.display_linear();
 // break;
 }
 else if(choise == 4){ 
 break;
 }
 else{
 cout<<"\nPlease Enter Valid Choise\n";
 }
 }
 
 
 break;
 
 case 2:
 
 while(1){
 
 cout<<"\n\n------------ Circular Queue Menu ------------\n";
 cout<<"1 Give order (Insertion): \n";
 cout<<"2 Serve Order (Deletion):\n";
 cout<<"3 Display:\n";
 cout<<"4 exit\n\n";
 cout<<"------------------------------------\n";
 
 int choise;
 cout<<"\n Enter Your Choise:";
 cin>>choise;
 if(choise == 1){
 obj2.insert_rear_circular();
 // break;
 }
 else if(choise== 2) { 
 obj2.delete_front_circular();
 // break;
 }
 else if(choise == 3){
 obj2.display_circular();
 // break;
 }
 else if(choise == 4){ 
 break;
 }
 else{
 cout<<"\nPlease Enter Valid Choise\n";
 }
 }
 
 
 break;
 
 case 3:
 exit(0);
 break;
 
 default:
 cout<<"\nPlease Enter Valid Choise\n";
 }
 }
 return 0;
}
