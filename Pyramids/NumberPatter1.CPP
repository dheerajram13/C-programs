#include<iostream.h>
#include<conio.h>
void main(){
int i,n,j;
clrscr();
cout<<"Enter the size for pattern:";
cin>>n;
for(i=1;i<=n;i++){     //rows
for(j=1;j<=i;j++){
cout<<j;	       //pattern
}
cout<<"\n";            //line break
}
getch();
}