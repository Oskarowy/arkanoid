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
}
//---------------------------------------------------------------------------
