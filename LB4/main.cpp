#include <iostream>

int main()
{
    void __fastcall TForm1::Button1Click(TObject *Sender)
    {
    Memo1->Lines->Strings[0]="Исходное сообщение:";
    Memo1->Lines->Strings[1]=Edit1->Text;
    Button2->Visible=true;
    }

    Memo2->Visible=true;
    int i,j;
    float m,n;
    i=9999;
    for(m=1;m<=i;m++)
    {
      if(m==1)
        {j=0;}
      if(m==2)
        {j=1;}
      if(m>2)
        {
       for(n=2;n<m;n++)
        {
          if(m/n - floor(m/n)==0)
            {
              goto mm;
            }
        }
        j++;
        }
        Memo2 - >Lines - >Strings[j]=m;
        ComboBox1 - >Items - >Strings[j]=m;
          mm: ;
        }
        {
        char *p1=new char[Memo1 - >Lines - >Strings[b - 3].Length()+1];
        strcpy(p1,Memo1 - >Lines - >Strings[b - 3].c_str());
        char *q1=new char[Memo1 - >Lines - >Strings[b].Length()+1];
        strcpy(q1,Memo1 - >Lines - >Strings[b].c_str());
        char *p2=p1;
        char *endptr;
        char *q2=q1;long n,pp,qq;
        pp=strtol(p2, &endptr, 10);
        qq=strtol(q2, &endptr, 10);
        b+=2;Memo1->Lines->Strings[b]="Вычислим модуль n по формуле:";
        n=pp*qq;nn=n;
        n_n=n;b++;
        Memo1->Lines->Strings[b]="n = p*q = "+p+"*"+q+" = "+nn;
        Label4->Visible=true;
        {
          int i;
          b+=2;
          Memo1->Lines->Strings[b]="Секретный ключ x:";
          b++;i=ComboBox3->ItemIndex;
          Memo1->Lines->Strings[b]=ComboBox3->Items->Strings[i];
          ee=Memo1->Lines->Strings[b];
          Button6->Visible=true;
          }
          
          {double i,e,qq,pp,qq1,qq2,qq3;
            e=StrToInt(ee);
            qq=StrToInt(q);
            qq1=qq;pp=StrToInt(p);
            for(i=1;i<e;i++)
            {qq2=qq*qq1;
            if(qq2>pp){qq3=qq2/pp;
            qq2=qq2-pp*floor(qq3);
            qq1=qq2;
            }
            else
            {
            qq1=qq2;
            }
            b+=2;
            Memo1->Lines->Strings[b]="Открытый ключ y:";
            b++;
            Memo1->Lines->Strings[b]=qq2;
            YY=qq2;
            Button7->Visible=true;
            }
            {//Шифрование хэш-значенияAnsiString h_0,kvadrat1_2,m_v_M2,nomer1,n_n2;
            long double h0,m_v_M,summa,summa1,kvadrat;
            //,kvadrat1;
            double h_0_0,kvadrat1_1,m_v_M1,n_n1;
            int i,nomer;randomize();
            h0=rand()%10000;
            h_0_0=h0;
            h_0=h_0_0;
            b+=2;
            Memo1->Lines->Strings[b]=" Вектор инициализации, выбранный случайным образом, H0:";
            b++;
            Memo1->Lines->Strings[b]="H0 = "+h_0;
            b+=2;Memo1->Lines->Strings[b]=" Вычисляем хэш-значение m:";
            b++;
            for(i=0;i<schet1;i++)
            {
            m_v_M=massiv_M[i];
            m_v_M1=m_v_M;
            m_v_M2=m_v_M1;
            summa=m_v_M+h0;
            if(summa>n_n)
            {summa1=summa/n_n;
            summa1=summa-n_n*floorl(summa1);
            }
            Else
            {
            summa1=summa;
            }kvadrat=powl(summa1,2);
            if(kvadrat>n_n)
            {kvadrat1=kvadrat/n_n;
            kvadrat1=kvadrat-n_n*floorl(kvadrat1);
            }else
            kvadrat1=kvadrat;
            }nomer=i+1;
            nomer1=nomer;
            kvadrat1_1=kvadrat1;
            kvadrat1_2=kvadrat1_1;
            n_n1=n_n;
            n_n2=n_n1;
            Memo1->Lines->Strings[b]="H"+nomer1+" = (M"+nomer1+" + H"+i+")^2 (mod n) = ("+m_v_M2+" +"+h_0+")^2 (mod "+n_n2+") = "+kvadrat1_2;
            b++;
            h0=kvadrat1;
            h_0_0=h0;
            h_0=h_0_0;
            }b++;Memo1->Lines->Strings[b]=" Хэш-значение m:";
            b++;Memo1->Lines->Strings[b]="m = "+kvadrat1_2;
            hesch=kvadrat1;
            Label5->Visible=true;
            ComboBox4->Visible=true;
            }
          {
            double i,kk,qq,pp,qq1,qq2,qq3;
            kk=StrToInt(k);
            qq=StrToInt(q);
            qq1=qq;
            pp=StrToInt(p);
            for(i=1;i<kk;i++)
            {
            qq2=qq*qq1;
            if(qq2>pp)
            {
            qq3=qq2/pp;
            qq2=qq2-pp*floor(qq3);
            qq1=qq2;
            }
            Else
            {
            qq1=qq2;
            }}
            b+=2;
            Memo1->Lines->Strings[b]="Определим значение а по формуле:";
            b++;
            Memo1->Lines->Strings[b]="a = q^k (mod p) = "+q+"^"+k+" (mod "+p+") = "+qq2;
            A=qq2;
            Button11->Visible=true;}

          {double i,e,kk,pp,hesch2,v,v1,z,w,g,g1,v2,LLL,LLLL;
            AnsiString hesch184,A184,pp184,g184,LLLL2;
            e=StrToInt(ee);     
            //xkk=StrToInt(k); 
                //khesch2=hesch;  
                 //mpp=StrToInt(p);
            pp=pp-1;            
            //p-1v=hesch2-e*A;
                   //m-x*aif(fabs(v)>pp)
            {v1=v/pp;if(v1<0)
            {v1=fabs(v1);
            v2=floor(v1);
            v2=-1*v2;
            }
            Else
            {v2=floor(v1);
            }
            v=v-pp*v2; 
                     //v (mod p) = v}//b+=2; 
            Memo1->Lines->Strings[b]=v;
            if(v<=0){for(z=1;v!=LLL;z++)
            {w=z*pp;g=w/kk;
            g1=floor(g);
            LLL=kk*g1-w;
            }}
            if(v>0){for(z=1;v!=LLL;z++)
            {w=z*pp;g=w/kk;g1=1+floor(g);        
            LLL=kk*g1-w;
            }}
            ss:
            b+=2;
            Memo1->Lines->Strings[b]="Определим значение bпо формуле";
            b++;
            Memo1->Lines->Strings[b]="m = (xa + kb)(mod (p-1))";
            b++;
            hesch184=hesch2;
            A184=A;
            pp184=pp;
            Memo1->Lines->Strings[b]=hesch184+" = ("+ee+"*"+A184+" + "+k+"*b)(mod "+pp184+")";
            b++;
            LLLL=hesch2-e*A;
            LLLL2=LLLL;
            Memo1->Lines->Strings[b]=k+"*b = "+LLLL2+"(mod "+pp184+")";
            b++;
            g184=g1;
            Memo1->Lines->Strings[b]="b = "+g184;
            B=g1;
            Button8->Visible=true;}

            {doublei,YY1,YY2,pp,YY3,AA1,AA2,AA3,z,z2,hesch2,qq,qq1,qq2,qq3;
              AnsiStringYY10,A10,B10,hesch10,z10,qq10;
              pp=StrToInt(p);
              YY1=YY;
              for(i=1;i<A;i++)
              {YY2=YY*YY1;
              if(YY2>pp)
              {
              YY3=YY2/pp;
              YY3=YY2-pp*floor(YY3);
              YY1=YY3;
              }
              Else
              {YY1=YY2;
              }}AA1=A;
              for(i=1;i<B;i++)
              {AA2=A*AA1;
              if(AA2>pp)
              {AA3=AA2/pp;
              AA3=AA2-pp*floor(AA3);
              AA1=AA3;}
              else{AA1=AA2;}}
              z=YY1*AA1;
              if(z>pp)
              {z2=z/pp;z2=z-pp*floor(z2);
              z=z2;}
              hesch2=hesch;
              qq=StrToInt(q);
              qq1=qq;
              for(i=1;i<hesch2;i++)
              {qq2=qq*qq1;
              if(qq2>pp)
              {qq3=qq2/pp;
              qq3=qq2-pp*floor(qq3);
              qq1=qq3;}
              else
              {qq1=qq2;}
              }b+=2;
              Memo1->Lines->Strings[b]="Для  проверки  подлинности  подписи проверяем выполнение условия:";
              b++;
              Memo1->Lines->Strings[b]="(y^a)*(a^b)(mod p) = (q^m')(mod p)";b++;
              YY10=YY;
              A10=A;
              B10=B;
              hesch10=hesch2;
              Memo1->Lines->Strings[b]="("+YY10+"^"+A10+")("+A10+"^"+B10+")(mod   "+p+") = ("+q+"^"+hesch10+")(mod "+p+")";
              b++;
              z10=z;
              qq10=qq1;
              Memo1->Lines->Strings[b]=z10+"(mod    "+p+")    =    "+qq10+"(mod "+p+")";
              b++;
              Button9->Visible=true;}
            
              {
              Memo1->Lines->SaveToFile("d:\ElGamal_CP.doc");
              }




}
