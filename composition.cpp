#include <iomanip>
#include<conio.h>
#include<string.h>
#include<time.h>
#include <windows.h> 
#include<iostream> 

using namespace std;

/*副函式：題庫*/
void question( ){
  cout<<"題目："<<endl;
  
	int ques;
  srand(time(NULL));
	ques=rand()%3+1;          //隨機從題庫中抽選
	if(ques==1){ 
		cout<<"冰箱可以很滿，可以很空，當你打開冰箱，通常想尋找什麼？又看見什麼？"<<endl;
		cout<<"假如有一座屬於你的新冰箱，你會有怎樣的想像？冰藏什麼會符合你所期待的美好生活？"<<endl;
		cout<<"請以「如果我有一座新冰箱」為題，撰文一篇，文長不限"<<endl;
	} 
	else if(ques==2){
		cout<<"玩具對你而言，較偏向「玩物喪志」或「玩物養志」？"<<endl;
		cout<<"請就你的成長經驗，說明你的看法。文長限 400 字以內（至多 19 行）"<<endl;
	}
	else if(ques==3){
		cout<<"若能從不同角度切入課本，進入知識的想像，或許可以讓課本帶領我們經歷驚奇的旅程"<<endl;
		cout<<"請以「當我打開課本」為題，寫一篇文章"<<endl;
		cout<<"，敘述任一學科課本對你的意義，書寫你探索課本內容、知識的經驗與體會"<<endl;
	}
	cout<<endl;
}

/*主函式*/
int main(int argc, char *argv[])
{
	int min,sec,i;
	cout<<"歡迎來到國寫練功坊！"<<endl; 
	cout<<"-系統會隨機生成一題國寫題目，並開始計時"<<endl;
	cout<<"-請輸入練習時間(單位：分鐘)，建議45~50分鐘"<<endl;
	cin>>min;                                                              //輸入作答時間(分鐘)
	sec=min*60;                                                            //轉換成秒，方便計時器精確顯示
	cout<<"-----"<<endl;
	cout<<"-按下鍵盤上的「s」，系統會直接生成題目，並開始計時，限時50分鐘"<<endl;
	cout<<endl;
  
	if(getch()=='s'){
	    question();
    	for(i=sec;i>=0;i--){                                               //timer
        	cout <<"剩餘時間："<<setw(3)<<i/60<<"："<<setw(2)<<i%60;        //換算sec顯示分秒，用setw()限制分、秒印出所占格數
        	cout << string(100,'\b');                                      //退格，以免重複印出 
        	Sleep(1000);            			                                 //延遲一秒--每個倒數時間間隔一秒 
    	}
    	cout<<"按任一鍵結束程式";
   		system("pause > nul");      
	}
	    return 0;
}
