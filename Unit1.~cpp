//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;

    int x=-8;
    int y=-8;

    int doWygranej=12;

    bool kolizja( TImage * pilka, TImage * cegla)
    {
        if(pilka->Left >= cegla->Left-pilka->Width &&
           pilka->Left <= cegla->Left+cegla->Width &&
           pilka->Top >= cegla->Top-pilka->Height &&
           pilka->Top <= cegla->Top+cegla->Height)
        return true;
        else return false;
    }
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------

void __fastcall TForm1::timerPilkaTimer(TObject *Sender)
{
    ball->Left+= x;
    ball->Top+= y;

    // odbij od lewej sciany
    if(ball->Left-5 <= background->Left) x = - x;

    // odbij od gornej sciany
    if(ball->Top-5 <= background->Top) y = -y;

    // odbij od prawej sciany
    if(ball->Left+ball->Width+5 >= background->Width) x = -x;

    // skucha!
    if(ball->Top >= paddle->Top+paddle->Height+15)
    {
        timerPilka->Enabled = false;
        ball->Visible = false;
        Button1->Caption = "Pora¿ka! Jeszcze raz?";
        Button1->Visible=true;
    }
    else if (ball->Left > paddle->Left-ball->Width/2 && ball->Left < paddle->Left+paddle->Width &&
            ball->Top+ball->Height > paddle->Top)
            {
                if (y>0) y=-y;
            }
    if (doWygranej <= 0)
    {
        timerPilka->Enabled=false;
        ball->Visible=false;
        Button1->Caption = "Wygrana! Jeszcze raz?";
        Button1->Visible=true;

    }

    // blok 1
    if (kolizja(ball,Image1) && Image1->Visible == true)
    {
     x = -x;
     y = -y;
     Image1->Visible=false;
     doWygranej--;
    }
    // blok 2
    if (kolizja(ball,Image2) && Image2->Visible == true)
    {
     x = -x;
     y = -y;
     Image2->Visible=false;
     doWygranej--;
    }
    // blok 3
    if (kolizja(ball,Image3) && Image3->Visible == true)
    {
     x = -x;
     y = -y;
     Image3->Visible=false;
     doWygranej--;
    }
    // blok 4
    if (kolizja(ball,Image4) && Image4->Visible == true)
    {
     x = -x;
     y = -y;
     Image4->Visible=false;
     doWygranej--;
    }
    // blok 5
    if (kolizja(ball,Image5) && Image5->Visible == true)
    {
     x = -x;
     y = -y;
     Image5->Visible=false;
     doWygranej--;
    }
    // blok 6
    if (kolizja(ball,Image6) && Image6->Visible == true)
    {
     x = -x;
     y = -y;
     Image6->Visible=false;
     doWygranej--;
    }
    // blok 7
    if (kolizja(ball,Image7) && Image7->Visible == true)
    {
     x = -x;
     y = -y;
     Image7->Visible=false;
     doWygranej--;
    }
    // blok 8
    if (kolizja(ball,Image8) && Image8->Visible == true)
    {
     x = -x;
     y = -y;
     Image8->Visible=false;
     doWygranej--;
    }
    // blok 9
    if (kolizja(ball,Image9) && Image9->Visible == true)
    {
     x = -x;
     y = -y;
     Image9->Visible=false;
     doWygranej--;
    }
    // blok 10
    if (kolizja(ball,Image10) && Image10->Visible == true)
    {
     x = -x;
     y = -y;
     Image10->Visible=false;
     doWygranej--;
    }
    // blok 11
    if (kolizja(ball,Image11) && Image11->Visible == true)
    {
     x = -x;
     y = -y;
     Image11->Visible=false;
     doWygranej--;
    }
    // blok 12
    if (kolizja(ball,Image12) && Image12->Visible == true)
    {
     x = -x;
     y = -y;
     Image12->Visible=false;
     doWygranej--;
    }
}

//---------------------------------------------------------------------------
void __fastcall TForm1::lewoTimer(TObject *Sender)
{
    if(paddle->Left >10) paddle->Left -= 10;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::prawoTimer(TObject *Sender)
{
    if(paddle->Left+paddle->Width < background->Width-10) paddle->Left+=10;    
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormKeyDown(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
    if(Key == VK_LEFT) lewo->Enabled=true;
    if(Key == VK_RIGHT) prawo->Enabled=true;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormKeyUp(TObject *Sender, WORD &Key,
      TShiftState Shift)
{
    if(Key == VK_LEFT) lewo->Enabled=false;
    if(Key == VK_RIGHT) prawo->Enabled=false;
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
    ball->Left = 50;
    ball->Top = 50;

    ball->Visible = true;
    x=-8; y=-8;
    timerPilka->Enabled = true;

    Button1->Visible = false;
    doWygranej=12;

    Image1->Visible=true; Image2->Visible=true; Image3->Visible=true;
    Image4->Visible=true; Image5->Visible=true; Image6->Visible=true;
    Image7->Visible=true; Image8->Visible=true; Image9->Visible=true;
    Image10->Visible=true; Image11->Visible=true; Image12->Visible=true;
}
//---------------------------------------------------------------------------
