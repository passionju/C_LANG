/*前置處理區*/
#include <stdio.h> //引用函式庫，就是一堆別人已經寫好的功能
#include <stdlib.h>
#define homework "第一次作業" //定義字串

/*全域變數宣告區*/
char *student;              //宣告字元指標變數
char content[] = " 我是朱培熏，來自嘉義大學，興趣是吸收各種遊戲製作背景以及動漫細節，也喜歡打桌球玩遊戲，我認為人最重要的便是自我省思的能力，而這同樣也實行在我自己身上，因此我常思考自己行為哪裡可以改善，因而不斷使自己進步，而未來由於自己對遊戲感興趣因此希望能進入遊戲產業。 \n";  //宣告字元陣列(未宣告大小)並給值
char reason[301] = "我會選擇資管系是因為現在社會需要多才能的人越來越多了，而資管不僅僅能學習到資訊領域的東西，也還有管理學群的會計、經濟等等，我認為資管會是個出入廣泛的科系";  //宣告字元陣列(有宣告大小)並給值

/*程式起始執行區*/
int main(int argc, char *argv[])
{
  /*函數區域變數宣告區*/
  int year = 101;            //宣告整數變數並給值
  float ver = 1.1;           //宣告浮點數變數並給值

  /*程式執行內容*/
  if (argc == 4)
  {
    student = argv[1];    //指標變數指向該字串起始位置
    year = atoi(argv[2]); //字串轉整數
    ver = atof(argv[3]);  //字串轉浮點數
  }
  else
  {
    fprintf(stderr, "Number of parameters is incorrect\n");
    //stderr 與 stdout 稍有不同
    exit(1);  //結束程式將正數1值傳回給作業系統
  }
  printf("我是嘉大資管第%-5d級\t", year);
  printf("%s %s\t版本 {%04.3f}\n\n", student, homework, ver);
  printf("\\自我介紹\\\n%s\n", content);
  printf("\"讀資管系的目的\"\n%s\n",reason);
}
