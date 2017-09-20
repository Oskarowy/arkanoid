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
    }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::lewoTimer(TObject *Sender)
{
    paddle->Left -= 10;    
}
//---------------------------------------------------------------------------
void __fastcall TForm1::prawoTimer(TObject *Sender)
{
    paddle->Left+=10;    
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
