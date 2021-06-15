//Resource Allocation Graph
//Name-Noel Varghese
//Reg No-19BCY10005
//Group Number-6
#include<iostream>
using namespace std;
int main()
{
int Resources[6][6],Process[5];
int resource=0,i,j,n,row,column,count=-1;
cout<<"I have implemented a 4x3 matrix for resource allocation"<<endl;
cout<<"4 processes and 3 columns of resources"<<endl;
cout<<"Process Sequence"<<endl;
cout<<"Enter the number of processes"<<endl;
cin>>n;
cout<<"Enter Process Numbers (0-4)"<<endl;
for(i=0;i<n;i++)
{
cin>>Process[i];//Process count is entered here.Preferably 4-5 processes can be considered
}
cout<<"Enter number of rows for resource array"<<endl;
cin>>row; //Program is designed to handle 4 rows
cout<<"Enter number of columns for resource array"<<endl;
cin>>column; //Program is designed to handle 3 columns
cout<<"Enter resources"<<endl;
for(i=0;i<row;i++)
{
for(j=0;j<column;j++)
{
cin>>Resources[i][j];            //Resources are allocated in a i x j matrix
}
}
cout<<"Process Show"<<endl;
for(i=0;i<n;i++)
{
cout<<"P"<<Process[i]<<endl;       //To display processes
}
cout<<"Resource Matrix  Process Number"<<endl;
cout<<"A "<<" B "<<"  C "<<endl;
for(i=0;i<1;i++)
{
for(j=0;j<1;j++)
{
cout<<Resources[0][0]<<"  "<<Resources[0][1]<<"  "<<Resources[0][2]<<"       <--   "<<Process[0]<<endl;
cout<<Resources[1][0]<<"  "<<Resources[1][1]<<"  "<<Resources[1][2]<<"       <--   "<<Process[1]<<endl;
cout<<Resources[2][0]<<"  "<<Resources[2][1]<<"  "<<Resources[2][2]<<"       <--   "<<Process[2]<<endl;
cout<<Resources[3][0]<<"  "<<Resources[3][1]<<"  "<<Resources[3][2]<<"       <--   "<<Process[3]<<endl;
}
}
cout<<"Check for Resource Competition/Possibility of Deadlock"<<endl;
cout<<"Please check resource matrix"<<endl;
cout<<"Enter a resource to check if collision happens"<<endl;
cin>>resource;
for(i=0;i<row;i++)
{
for(j=0;j<column;j++)
{
if(resource==Resources[i][j])
{
cout<<"Matches[row][column] "<<i<<" "<<j<<endl;
count=count+1;
}
}
}
cout<<"Counts of deadlock = "<<count<<endl;
return 0;
}
