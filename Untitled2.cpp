#include<iostream> 
using namespace std;
int main(){
        int month,dmonth;  			//對獎月份，兌獎期限月 
        int year,dyear;				//對獎年份，兌獎期限年 
        int i,j,k=0;			//k對應中獎層級 
        char n[3][8];			//中獎號碼 
        char t3[3],t5[5];		//欲對獎號碼 

        cout<<"請輸入對獎頭月份(eg：2022/9-10請輸入'2022 9')"<<endl; 
            cin>>year>>month;
            dmonth=month+6;				//期限為對獎頭月份往後推6個月的5號 
            dyear=year+(dmonth/12);			
            dmonth=dmonth%12;
   
        cout<<"請輸入中獎號碼(一次最多輸入3組)："<<endl;
        cin>>n[0]>>n[1]>>n[2];				//使用二維陣列，節省步驟 

		cout<<"請輸入發票後3碼："<<endl;	 
        while(cin>>t3){						//while迴圈：使用者可重複輸入兌獎 
            for(i=0;i<=2;i++){
                    if(t3[0]==n[i][5] and t3[1]==n[i][6] and t3[2]==n[i][7]){
                            k=1;							//後三碼皆符合的話使k=1 
                    cout<<"請輸入發票前5碼："<<endl;
                    cin>>t5;
                    for(j=4;j>=0;j--){						//從第五位數開始比對 
                            if(t5[j]==n[i][j]) k=k+1;		//每符合一位數，k就+1點		
                            else break;						//若比對不符，迴圈即停止 
                    }
                    
                    if(k==6) cout<<"頭獎20萬元！！"<<endl<<"兌獎期限："<<year<<"/"<<month<<"/5"<<endl;
                    else if(k==5) cout<<"二獎4萬元！！"<<endl<<"兌獎期限："<<year<<"/"<<month<<"/5"<<endl; 
                    else if(k==4) cout<<"三獎1萬元！！"<<endl<<"兌獎期限："<<year<<"/"<<month<<"/5"<<endl; 
                    else if(k==3) cout<<"四獎4000元！！"<<endl<<"兌獎期限："<<year<<"/"<<month<<"/5"<<endl; 
                    else if(k==2) cout<<"五獎1000元！！"<<endl<<"兌獎期限："<<year<<"/"<<month<<"/5"<<endl;
                    else if(k==1) cout<<"六獎200元！！"<<endl<<"兌獎期限："<<year<<"/"<<month<<"/5"<<endl;
                        }
                    }
                if(k==0) cout<<"沒中，下次還有機會！"<<endl;
                cout<<endl;
            }
        return 0;
}



