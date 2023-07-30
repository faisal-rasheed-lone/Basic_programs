#include<iostream>
#include<stdlib.h>
using namespace std;
int cost[10][10],i,j,k,n,queue[10],front,rare,v,tovisit[10],visited[10];
int main()
{
    int m;
    cout<<"enter no of vertices "<<endl;
    cin>>n;

    cout<<"enter no. of edges ";
    cin>>m;

    cout<<"edges"<<endl;
    for(k=1;k<=m;k++)
    {
        cin>>i>>j;
        cost[i][j]=1;

    }

    cout<<"enter initial vertex to traverse from"<<endl;
    cin>>v;

    cout<<"visited vertices ";
    cout<<v<<" ";

    visited[v]=1;

    k=1;
    while(k<n)
    {
      for(j=1;j<n;j++)
      {
        if(cost[v][j]!=0  && visited[j]!=1 && tovisit[j]!=1)
        {
          tovisit[j]=1;
          queue[rare++]=j;
        }

      }

      v=queue[front++];
      cout<<v<<" ";
      k++;
      tovisit[v]=0;
      visited[v]=1;



    }

    return 0;

}
