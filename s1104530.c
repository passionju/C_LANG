/*�e�m�B�z��*/
#include <stdio.h> //�ޥΨ禡�w�A�N�O�@��O�H�w�g�g�n���\��
#include <stdlib.h>
#define homework "�Ĥ@���@�~" //�w�q�r��

/*�����ܼƫŧi��*/
char *student;              //�ŧi�r�������ܼ�
char content[] = " �ڬO�������A�Ӧ۹Ÿq�j�ǡA����O�l���U�عC���s�@�I���H�ΰʺ��Ӹ`�A�]���w����y���C���A�ڻ{���H�̭��n���K�O�ۧڬ٫䪺��O�A�ӳo�P�ˤ]���b�ڦۤv���W�A�]���ڱ`��Ҧۤv�欰���̥i�H�ﵽ�A�]�Ӥ��_�Ϧۤv�i�B�A�ӥ��ӥѩ�ۤv��C���P����]���Ʊ��i�J�C�����~�C \n";  //�ŧi�r���}�C(���ŧi�j�p)�õ���
char reason[301] = "�ڷ|��ܸ�ިt�O�]���{�b���|�ݭn�h�~�઺�H�V�ӶV�h�F�A�Ӹ�ޤ��ȶȯ�ǲߨ��T��쪺�F��A�]�٦��޲z�Ǹs���|�p�B�g�ٵ����A�ڻ{����޷|�O�ӥX�J�s�x����t";  //�ŧi�r���}�C(���ŧi�j�p)�õ���

/*�{���_�l�����*/
int main(int argc, char *argv[])
{
  /*��ưϰ��ܼƫŧi��*/
  int year = 101;            //�ŧi����ܼƨõ���
  float ver = 1.1;           //�ŧi�B�I���ܼƨõ���

  /*�{�����椺�e*/
  if (argc == 4)
  {
    student = argv[1];    //�����ܼƫ��V�Ӧr��_�l��m
    year = atoi(argv[2]); //�r������
    ver = atof(argv[3]);  //�r����B�I��
  }
  else
  {
    fprintf(stderr, "Number of parameters is incorrect\n");
    //stderr �P stdout �y�����P
    exit(1);  //�����{���N����1�ȶǦ^���@�~�t��
  }
  printf("�ڬO�Ťj��޲�%-5d��\t", year);
  printf("%s %s\t���� {%04.3f}\n\n", student, homework, ver);
  printf("\\�ۧڤ���\\\n%s\n", content);
  printf("\"Ū��ިt���ت�\"\n%s\n",reason);
}
