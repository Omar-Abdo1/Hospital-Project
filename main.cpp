#include <bits/stdc++.h>
#define ll long long
using namespace std;
string Data[25][10];
bool arr [25][10];
void Add(){

int sp;
bool statue;
string name;
cout<<"************* Note : Specializations Are From 1 To 20 ************* \n";
cout<<"Enter Specialization , Name , Statue : ";
cin>>sp>>name>>statue;
if(sp>20){
    cout<<"There Are No Specialization More Than 20 We Hope So : )\n";
    return ;
}
int c=0;
for(int j=1;j<=5;++j){
    if(Data[sp][j]=="Seat")c++;
}
if(c==0){
    cout<<"Sorry There Are No Seat For More Patient Maybe Soon : ) \n";
    return ;
}

if(statue){
string x=Data[sp][1];
bool ok=arr[sp][1];
Data[sp][1]=name;
arr[sp][1]=statue;

for(int j=2;j<=5;++j){
   string temp=Data[sp][j];
   bool qq=arr[sp][j];
   Data[sp][j]=x;
   arr[sp][j]=ok;
   x=temp;
   ok=qq;
}

}
else
{

for(int j=1;j<=5;++j){
    if(Data[sp][j]=="Seat"){
        Data[sp][j]=name;
        arr[sp][j]=statue;
        break;
    }
}

}

}

void Print(){

int sp;
cout<<"Enter Specialization : ";
cin>>sp;
if(sp>20){
    cout<<"There Are No Specialization More Than 20 We Hope So : )\n";
    return ;
}
int c=0;
for(int j=1;j<=5;++j){
    if(Data[sp][j]!="Seat")c++;
}
if(!c){
    cout<<"There Are No Patients In This Specialization \n";
    return ;
}
cout<<"There Are "<<c<<" Patients In This Specialization : \n";

for(int j=1;j<=5;++j){
    if(Data[sp][j]!="Seat"){
        string s=arr[sp][j] ? "Urgent" : "Regular" ;
        cout<<Data[sp][j]<<" "<<s;
        cout<<"\n";
    }
}



}

void Get_Next(){
int sp;
cout<<"Enter Specialization : ";
cin>>sp;
if(sp>20){
    cout<<"There Are No Specialization More Than 20 We Hope So : )\n";
    return ;
}
int c=0;
for(int j=1;j<=5;++j){
    if(Data[sp][j]!="Seat")c++;
}
if(!c){
    cout<<"There Are No More Patients In This Specialization You Can Have Rest Dr. \n";
    return ;
}

cout<<Data[sp][1]<<" Please Go With Dr. \n";
Data[sp][1]="Seat";
arr[sp][1]=0;

for(int j=2;j<=6;++j){
Data[sp][j-1]=Data[sp][j];
arr[sp][j-1]=arr[sp][j];
}

}

void Makeit(){

for(int i=1;i<=23;++i){
    for(int j=1;j<=9;++j){
        Data[i][j]="Seat";
    }
}

for(int i=1;i<=23;++i){
    for(int j=1;j<=9;++j){
        arr[i][j]=0;
    }
}


}



void Hospital_System(){

bool is1=1;
while(1){
        if(is1)
cout<<"\t\t\t\t\t\t\t\t\t Welcome To Our Hospital  \n",is1=0;
cout<<"Enter Your Choice : \n";
cout<<"1) Add New Patient\n";
cout<<"2) Print All Patients \n";
cout<<"3) Get Next Patient \n";
cout<<"4) Exit\n";
int choice;
cin>>choice;
if(choice==1){
Add();
}
else if(choice==2){
Print();
}
else if(choice==3){
Get_Next();
}
else{
    break;
}
cout<<"\t\t\t**************************************\n";

}

}

int main()
{
    Makeit();
Hospital_System();
return 0;
}
