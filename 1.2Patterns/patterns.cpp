#include<iostream>
using namespace std;


void pattern1(int n){
    for(int i =1 ; i<=n ;i++){
        for (int  j = 1; j <=n; j++)
        {
            cout<<"*";
        }
        cout<<endl;
        
    }
}
void pattern2(int n){
    for(int i =1 ; i<=n ;i++){
        for (int  j = 1; j <=i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
        
    }
}
void pattern3(int n){
    for(int i =1; i<=n; i++){
        
        for(int j=1 ; j<=i ;j++){
            cout<<j;         
        }
        cout<<endl;
    }
}
void pattern4(int n){
    for(int i =1; i<=n; i++){
        
        for(int j=1 ; j<=i ;j++){
            cout<<i;         
        }
        cout<<endl;
    }
}
void pattern5(int n){
    for(int i =1; i<=n; i++){
        
        for(int j=1 ; j<=n-i ;j++){
            cout<<"*";         
        }
        cout<<endl;
    }
}
void pattern6(int n){
    for(int i =1; i<=n; i++){
       for(int j=1; j<=n-i ;j++){
        cout<<j;
       } 
       cout<<endl;
    }
}
void pattern7(int n){

    for(int i = 0 ; i<n ;i++){
        //space
        for(int j= 0 ; j < n-i-1 ; j++){
            cout<<" ";
        }
        for(int j =0 ;j <2*i +1 ;j++){
            cout<<"*";

        }
        for(int j= 0 ; j < n-i-1 ; j++){
            cout<<" ";
        }
        cout<<endl;
    }
    
}
void pattern8(int n){

    for(int i = 0 ; i<n ;i++){
        //space
        for(int j= 0 ; j < i ; j++){
            cout<<" ";
        }
        for(int j =0 ;j <2*n-(2*i +1) ;j++){
            cout<<"*";

        }
        for(int j= 0 ; j < i; j++){
            cout<<" ";
        }
        cout<<endl;
    }
    
}
void pattern9(int n){
    for(int i = 0 ; i<n ;i++){
        //space
        for(int j= 0 ; j < n-i-1 ; j++){
            cout<<" ";
        }
        for(int j =0 ;j <2*i +1 ;j++){
            cout<<"*";

        }
        for(int j= 0 ; j < n-i-1 ; j++){
            cout<<" ";
        }
        cout<<endl;
    }

    for(int i = 0 ; i<n ;i++){
        //space
        for(int j= 0 ; j < i ; j++){
            cout<<" ";
        }
        for(int j =0 ;j <2*n-(2*i +1) ;j++){
            cout<<"*";

        }
        for(int j= 0 ; j < i; j++){
            cout<<" ";
        }
        cout<<endl;
    }
    
}
void pattern10(int n){

    for(int i = 1 ; i<=n ;i++){
        
        for(int j =0 ;j <i ;j++){
            cout<<"*";

        }
        
        
        
        cout<<endl;
    }
    for(int i = 1 ; i<=n ;i++){
        
        for(int j =0 ;j <n-i ;j++){
            cout<<"*";

        }
        
        
        cout<<endl;
    }
    
    
   
}
void pattern11(int n){
    for(int i =1 ;i <= n ;i++){
        for(int j = 1; j<=i ;j++){
            if((i+j)%2 == 0){
                cout<<"1";
            }
            else{
                cout<<"0";
            }
        }
    cout<<endl;
    }
}
void pattern12(int n){
    int space =2*(n-1);
    for(int i = 1; i<= n ;i++){
    //number
        for (int j =1; j<=i ; j++){
            cout<<j;
        }
        //space

        for(int j =1 ; j<= space ; j++){
            cout<<" ";
        }


        //numbers
        for(int j = i ; j>=1 ;j--){
            cout<<j;
        }
    cout<<endl;
    space -= 2  ;
    
    }

}
void pattern13(int n){
    int count = 1;
    for(int i = 1 ; i <= n ; i++){
        for(int j =1 ;j <=i ; j++){
            cout<<count <<" ";
        count++;
        }
        cout<<endl;
        
    }
    // count++;
}

void pattern14(int n){
    for(int i = 0; i<n ; i++ ){
        for(char ch ='A' ; ch <='A' + i ;ch++ ){
            cout<<ch<<" ";

        }
        cout<<endl;
    }
}
void pattern15(int n){
    for(int i = 0; i<n; i++ ){
        for(char ch ='A' ; ch <='A' + (n-i-1) ;ch++ ){
            cout<<ch<<" ";

        }
        cout<<endl;
    }
}
void pattern16(int n){
    for(int i = 0; i<n; i++ ){
        char ch = 'A'+i;
        for(int j =0 ;j<=i;j++ ){
            cout<<ch<<" ";

        }
        cout<<endl;
    }
}
void pattern17(int n){
    for(int i = 0; i<n; i++ ){
        char ch = 'A'+i;
        for(int j =0 ;j<=i;j++ ){
            cout<<ch<<" ";

        }
        cout<<endl;
    }
}



int main(){
    int n;
    cin>>n;
    pattern16(n);
    

    return 0;
}