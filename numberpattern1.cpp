#include<iostream>
using namespace std;


int main(){

       /*  Read input as specified in the question.
	* Print output as specified in the question.
	*/
    int n;
    cin>>n;
    int i=1;
    while(i<=n){
        int k=i;
        for(int j=1;j<=i;j++){
            cout<<k;
            k++;
        }
        cout<<endl;
        i++;
    }
    return 0;
  
}