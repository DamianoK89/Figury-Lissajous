//---------------------------------------------------------------------------

#ifndef Unit1H
#define Unit1H
//---------------------------------------------------------------------------
#include <Classes.hpp>
#include <Controls.hpp>
#include <StdCtrls.hpp>
#include <Forms.hpp>
#include <ExtCtrls.hpp>
#include <Buttons.hpp>
#include <Menus.hpp>
//---------------------------------------------------------------------------
class TForm1 : public TForm
{
__published:	// IDE-managed Components
        TPanel *Panel1;
        TGroupBox *GroupBox1;
        TGroupBox *GroupBox2;
        TGroupBox *GroupBox3;
        TGroupBox *GroupBox4;
        TGroupBox *GroupBox5;
        TButton *Button1;
        TButton *Button2;
        TScrollBar *ScrollBar1;
        TScrollBar *ScrollBar2;
        TScrollBar *ScrollBar3;
        TScrollBar *ScrollBar4;
        TScrollBar *ScrollBar5;
        TImage *Image1;
        TColorBox *ColorBox1;
        TColorBox *ColorBox2;
        TLabel *Label1;
        TLabel *Label2;
        TLabel *LabelAx;
        TLabel *LabelAy;
        TLabel *LabelWx;
        TLabel *LabelWy;
        TLabel *LabelF;
        TTimer *Timer1;
        TSpeedButton *SpeedButton1;
        TMainMenu *MainMenu1;
        TMenuItem *Plik1;
        TMenuItem *Pomoc1;
        TMenuItem *Oprogramie1;
        TMenuItem *Zamknij1;
        void __fastcall FormCreate(TObject *Sender);
        void __fastcall Button1Click(TObject *Sender);
        void __fastcall Button2Click(TObject *Sender);
        void __fastcall ScrollBar5Scroll(TObject *Sender,
          TScrollCode ScrollCode, int &ScrollPos);
        void __fastcall ScrollBar1Scroll(TObject *Sender,
          TScrollCode ScrollCode, int &ScrollPos);
        void __fastcall ScrollBar2Scroll(TObject *Sender,
          TScrollCode ScrollCode, int &ScrollPos);
        void __fastcall ScrollBar3Scroll(TObject *Sender,
          TScrollCode ScrollCode, int &ScrollPos);
        void __fastcall ScrollBar4Scroll(TObject *Sender,
          TScrollCode ScrollCode, int &ScrollPos);
        void __fastcall ColorBox1Change(TObject *Sender);
        void __fastcall ColorBox2Change(TObject *Sender);
        void __fastcall Timer1Timer(TObject *Sender);
        void __fastcall SpeedButton1Click(TObject *Sender);
        void __fastcall Zamknij1Click(TObject *Sender);
        void __fastcall Oprogramie1Click(TObject *Sender);
private:	// User declarations
public:		// User declarations
        __fastcall TForm1(TComponent* Owner);
};
//---------------------------------------------------------------------------
extern PACKAGE TForm1 *Form1;
//---------------------------------------------------------------------------
#endif
