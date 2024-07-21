//---------------------------------------------------------------------------

#include <vcl.h>
#pragma hdrstop

#include "Unit1.h"
#include <math.h>
//---------------------------------------------------------------------------
#pragma package(smart_init)
#pragma resource "*.dfm"
TForm1 *Form1;
//***************************************************************************
double Ax, Ay, omx, omy, t, phi, phi0, Xk, Xp, Yk, Yp;
TColor linia, tlo;
//---------------------------------------------------------------------------
__fastcall TForm1::TForm1(TComponent* Owner)
        : TForm(Owner)
{
}
//---------------------------------------------------------------------------
int ex (double x)
{
return (x-Xp)/(Xk-Xp)*Form1->Image1->Width;
}
int ey (double y)
{
return (Yk-y)/(Yk-Yp)*Form1->Image1->Height;
}

const double pi = 3.14159265358979323846;



void RysujOsie(void)
{
Form1->Image1->Canvas->Pen->Color = clBlack;
Form1->Image1->Canvas->MoveTo(ex(Xp),ey(0.0));
Form1->Image1->Canvas->LineTo(ex(Xk),ey(0.0));
Form1->Image1->Canvas->MoveTo(ex(0),ey(Yp));
Form1->Image1->Canvas->LineTo(ex(0),ey(Yk));
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ScrollBar5Scroll(TObject *Sender,
      TScrollCode ScrollCode, int &ScrollPos)
{
        phi = ScrollBar5->Position;
        phi0=phi*(pi/180);
        LabelF->Caption = "F= " + FloatToStr(phi);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ScrollBar1Scroll(TObject *Sender,
      TScrollCode ScrollCode, int &ScrollPos)
{
        Ax = ScrollBar1->Position;
        LabelAx->Caption = "Ax= " + FloatToStr(Ax);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ScrollBar2Scroll(TObject *Sender,
      TScrollCode ScrollCode, int &ScrollPos)
{
        Ay = ScrollBar2->Position;
        LabelAy->Caption = "Ay= " + FloatToStr(Ay);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ScrollBar3Scroll(TObject *Sender,
      TScrollCode ScrollCode, int &ScrollPos)
{
        omx = ScrollBar3->Position;
        LabelWx->Caption = "Wx= " + FloatToStr(omx);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::ScrollBar4Scroll(TObject *Sender,
      TScrollCode ScrollCode, int &ScrollPos)
{
        omy = ScrollBar4->Position;
        LabelWy->Caption = "Wy= " + FloatToStr(omy);
}
//---------------------------------------------------------------------------
void __fastcall TForm1::FormCreate(TObject *Sender)
{
omx = 1;
omy = 1;

Ax = 1;
Ay = 1;

LabelAx->Caption = "Ax= " + FloatToStr(Ax);
LabelAy->Caption = "Ay= " + FloatToStr(Ay);
LabelWx->Caption = "Wx= " + FloatToStr(omx);
LabelWy->Caption = "Wy= " + FloatToStr(omy);
LabelF->Caption = "F= " + FloatToStr(phi0);
ScrollBar1->Position=Ax;
ScrollBar2->Position=Ay;
ScrollBar3->Position=omx;
ScrollBar4->Position=omy;
ScrollBar5->Position=phi0;

Xk=1.5;
Xp=-1.5;
Yk=1.5;
Yp=-1.5;

linia = ColorBox1->Selected;
tlo = ColorBox2->Selected;


RysujOsie();
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button1Click(TObject *Sender)
{
        double x, y, dx;
        double i, j;

        //x=Xp;
        x=Ax*cos(omx*t);
        y=Ay*cos(omy*t+phi0);

        Image1->Canvas->MoveTo(ex(x),ey(y));
        //Image1->Canvas->LineTo(ex(10),ey(10));

        Image1->Canvas->Pen->Color = linia;
        for (double t=0; t<2*pi; t+=0.01)
        {
                x=Ax*cos(omx*t);
                y=Ay*cos(omy*t+(-phi0));
                Image1->Canvas->LineTo(ex(x),ey(y));
        }
}
//---------------------------------------------------------------------------
void __fastcall TForm1::Button2Click(TObject *Sender)
{
        Image1->Canvas->Brush->Color = tlo;
        Image1->Canvas->FillRect(Image1->ClientRect);
        RysujOsie();
}
//---------------------------------------------------------------------------



void __fastcall TForm1::ColorBox1Change(TObject *Sender)
{
        linia = ColorBox1->Selected;
        Button2Click(0);
        Button1Click(0);

}
//---------------------------------------------------------------------------

void __fastcall TForm1::ColorBox2Change(TObject *Sender)
{
        tlo = ColorBox2->Selected;
        Button2Click(0);
        Button1Click(0);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Timer1Timer(TObject *Sender)
{
        phi0=phi0+6.25;
        ScrollBar5->Position=phi0;
        Refresh();
        Button2Click(Sender);
        Button1Click(Sender);
}
//---------------------------------------------------------------------------

void __fastcall TForm1::SpeedButton1Click(TObject *Sender)
{
        Timer1->Enabled=SpeedButton1->Down;
}
//---------------------------------------------------------------------------




void __fastcall TForm1::Zamknij1Click(TObject *Sender)
{
        Close();
}
//---------------------------------------------------------------------------

void __fastcall TForm1::Oprogramie1Click(TObject *Sender)
{
        Application->MessageBox("Figury Lissajous \nVersion 1.0 \nby Damian Kie³basa \n2013 \ncopyleft \nAll rights reversed", "O programie", MB_OK | MB_ICONINFORMATION);        
}
//---------------------------------------------------------------------------

