#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        int gap=n-i;
        for(int j=1;j<=gap;j++){
            cout<<" ";
        }
        int n=i;
        for(int k=1;k<=i;k++){
            cout<<n;
            n++;
        }
        cout<<endl;
    }
    return 0;
  
}