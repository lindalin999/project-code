#include<iostream> 
using namespace std;
int main(){
        int month,dmonth;  			//�������A�I�������� 
        int year,dyear;				//����~���A�I�������~ 
        int i,j,k=0;			//k���������h�� 
        char n[3][8];			//�������X 
        char t3[3],t5[5];		//��������X 

        cout<<"�п�J����Y���(eg�G2022/9-10�п�J'2022 9')"<<endl; 
            cin>>year>>month;
            dmonth=month+6;				//����������Y��������6�Ӥ몺5�� 
            dyear=year+(dmonth/12);			
            dmonth=dmonth%12;
   
        cout<<"�п�J�������X(�@���̦h��J3��)�G"<<endl;
        cin>>n[0]>>n[1]>>n[2];				//�ϥΤG���}�C�A�`�٨B�J 

		cout<<"�п�J�o����3�X�G"<<endl;	 
        while(cin>>t3){						//while�j��G�ϥΪ̥i���ƿ�J�I�� 
            for(i=0;i<=2;i++){
                    if(t3[0]==n[i][5] and t3[1]==n[i][6] and t3[2]==n[i][7]){
                            k=1;							//��T�X�ҲŦX���ܨ�k=1 
                    cout<<"�п�J�o���e5�X�G"<<endl;
                    cin>>t5;
                    for(j=4;j>=0;j--){						//�q�Ĥ���ƶ}�l��� 
                            if(t5[j]==n[i][j]) k=k+1;		//�C�ŦX�@��ơAk�N+1�I		
                            else break;						//�Y��藍�šA�j��Y���� 
                    }
                    
                    if(k==6) cout<<"�Y��20�U���I�I"<<endl<<"�I�������G"<<year<<"/"<<month<<"/5"<<endl;
                    else if(k==5) cout<<"�G��4�U���I�I"<<endl<<"�I�������G"<<year<<"/"<<month<<"/5"<<endl; 
                    else if(k==4) cout<<"�T��1�U���I�I"<<endl<<"�I�������G"<<year<<"/"<<month<<"/5"<<endl; 
                    else if(k==3) cout<<"�|��4000���I�I"<<endl<<"�I�������G"<<year<<"/"<<month<<"/5"<<endl; 
                    else if(k==2) cout<<"����1000���I�I"<<endl<<"�I�������G"<<year<<"/"<<month<<"/5"<<endl;
                    else if(k==1) cout<<"����200���I�I"<<endl<<"�I�������G"<<year<<"/"<<month<<"/5"<<endl;
                        }
                    }
                if(k==0) cout<<"�S���A�U���٦����|�I"<<endl;
                cout<<endl;
            }
        return 0;
}



