//�ļ�������ҵһ__��Ϸ
//��������Ϸ
#include<cstdlib>
#include<ctime>
#include<iostream>
using namespace std;
int main()
{ 	int numA,numB,num1,num2,num3,result1,result2,result3;   //put the random numbers in "num".
	int i,totalnum,	winnum ;                                          //calculate the numbers.
	char answer,input1,input2,input3;                                         //the answer of whether play the game ,
																			//put the inputted numbers into "input".
	srand (time(NULL)) ;                                 
	
	totalnum=0 ;                                          //give the first numbers.
	winnum=0 ;
	
	while (true) {
		cout<<"��Ҫ����Ϸ��Y/N����" ;
		cin>>answer ;
		
		if (answer=='N') break ;                         //game over.
		
		if (answer=='Y') {                               
			num1=rand()*10/(RAND_MAX+1) ;                //form the random numbers. 
			
			do {                                         // confirm that the numbers are different.
				num2=rand()*10/(RAND_MAX+1) ;
			}while (num1==num2) ;
			
			do {
				num3=rand()*10/(RAND_MAX+1) ;
			}while ((num1==num3)||(num2==num3)) ;
		
			for (i=0;i<=7;++i) { 
				numA=0;
				numB=0;
		
				if(i==7) {
					cout<<"���ź�����û���ڹ涨�����ڲ¶ԡ�����"<<num1<<num2<<num3<<endl ;
					break; 
				}     
				
				char input1,input2,input3;
				cout<<"��������²������:" ;
						cin>>input1;
						cin>>input2;
						cin>>input3;
				
				while (true){        //confirm the inputted numbers are between 0~9.
	 				if (input1<'0'||input1>'9'||input2<'0'||input2>'9'||input3<'0'||input3>'9'){
	 					cout<<"������²�ķ�Χ��0-9������:" ;
						cin>>input1;
						cin>>input2;
						cin>>input3;
		            }
		 			else break;
	 			}
	  			
	  			result1=static_cast<int>(input1)-48; //change the characters into integers.
	  			result2=static_cast<int>(input2)-48;
	  			result3=static_cast<int>(input3)-48;
	  		
				if ((num1==result1)&&(num2==result2)&&(num3==result3))
					{
						cout<<"��ϲ����¶���" ;        //win the game.
						++winnum ;
						break ;
				    }
			
				numA=(num1==result1)+(num2==result2)+(num3==result3);
				numB=((num1==result2)&&(num1!=result1))+((num1==result3)&&(num1!=result1))+
						((num2==result1)&&(num2!=result2))+((num2==result3)&&(num2!=result2))+
						((num3==result1)&&(num3!=result3))+((num3==result2)&&(num3!=result3));
						
				cout<<numA<<'A'<<numB<<'B'<<endl ;
			}
		}
		
		++totalnum ;                                           //the times of the game.
		
	}
	cout<<"��һ������"<<totalnum<<"�֣�Ӯ��"<<winnum<<"�֣�����"<<totalnum-winnum<<"��" ;
	
	return 0 ;
}
				
				
			
			 
			
		
			
	
	

