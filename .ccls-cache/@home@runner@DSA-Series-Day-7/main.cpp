#include <iostream>
using namespace std;

int main() {
// SWITCH CASE
  
  // int num = 2;
  
  // switch(num) {
  //   case 1: cout << "First" << endl;
  //   break;
    
  //   case 2: cout << "Second" << endl;
  //   break;

  //   default: cout << "It is a default case" << endl;
  // }

  /*************calculator*****************************/ 
// int a, b;
//   cout << "Enter the value of a: "; 
//   cin >> a;
//   cout << "Enter the value of b: "; 
//   cin >> b;
//   cout << "Select any operation" << endl;
//   cout << "1.Add" << endl;
//   cout << "2.Subtract" << endl;
//   cout << "3.Multiply" << endl;
//   cout << "4.Divide" << endl;
// cout << "Type the operation number: ";
//   int op;
    
//   cin >> op;
//   switch(op) {
//     case 1: cout << "The sum is: " << (a + b);
//     break;
//     case 2: cout << "The difference is: " << (a - b);
//     break;
//     case 3: cout << "The product is: " << (a * b);
//     break;
//     case 4: cout << "The division is: " << (a / b);
//     break;
//     default: cout << "Please input correct operation number";
//   }


  /****************************AMOUNT*********************/
   int amount;
  cin>>amount;
  int Rs100 , Rs50 , Rs20 , Rs10, Rs1;

  switch(1)
  {
      case 1: Rs100=amount/100;
              amount=amount%100;
              cout<<"No of 100 Rupee ="<<Rs100<<endl;
              
         
      case 2: Rs50=amount/50;
              amount=amount%50;
              cout<<"No of 50 Rupee ="<<Rs50<<endl;
              

      case 3: Rs20=amount/20;
              amount=amount%20;
              cout<<"No of 20 Rupee ="<<Rs20<<endl;
      
      case 4: Rs10=amount/10;
              amount=amount%10;
              cout<<"No of 10 Rupee ="<<Rs10<<endl;
               

      case 5: Rs1=amount/1;
              amount=amount%1;
              cout<<"No of 1 Rupee ="<<Rs1<<endl; 
          
           }
  
  return 0;
}

/****CONTINUTE KEYWORD ONLY WORKS IN LOOPS(FOR LOOP WHILE, DO-WHILE). IF SWITCH STATEMENT IS WITHIN ANY OF THESE LOOPS THEN CONTINUE KEYWORD CAN BE USED*****/

/*#include <iostream>
using namespace std;

int main() {
    int num = 2;
    for (int i = 1; i <= 3; i++) {
        switch(num) {
            case 1:
                cout << "First" << endl;
                continue;
            case 2:
                cout << "Second" << endl;
                break;
            default:
                cout << "It is a default case" << endl;
        }
        cout << "End of iteration " << i << endl;
    }
    return 0;
}
*/