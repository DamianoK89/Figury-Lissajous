object Form1: TForm1
  Left = 192
  Top = 122
  Width = 809
  Height = 527
  AutoSize = True
  BorderIcons = [biSystemMenu, biMinimize, biHelp]
  Caption = 'Figury Lissajous'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  Menu = MainMenu1
  OldCreateOrder = False
  Position = poDesktopCenter
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object Image1: TImage
    Left = 265
    Top = 0
    Width = 528
    Height = 469
    Align = alClient
  end
  object Panel1: TPanel
    Left = 0
    Top = 0
    Width = 265
    Height = 469
    Align = alLeft
    TabOrder = 0
    object GroupBox1: TGroupBox
      Left = 8
      Top = 24
      Width = 249
      Height = 89
      Caption = 'Amplituda'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentFont = False
      TabOrder = 0
      object LabelAx: TLabel
        Left = 16
        Top = 24
        Width = 15
        Height = 16
        Caption = 'Ax'
      end
      object LabelAy: TLabel
        Left = 16
        Top = 56
        Width = 16
        Height = 16
        Caption = 'Ay'
      end
      object ScrollBar1: TScrollBar
        Left = 64
        Top = 24
        Width = 169
        Height = 17
        Max = 1
        PageSize = 0
        TabOrder = 0
        OnScroll = ScrollBar1Scroll
      end
      object ScrollBar2: TScrollBar
        Left = 64
        Top = 56
        Width = 169
        Height = 17
        Max = 1
        PageSize = 0
        TabOrder = 1
        OnScroll = ScrollBar2Scroll
      end
    end
    object GroupBox2: TGroupBox
      Left = 8
      Top = 120
      Width = 249
      Height = 89
      Caption = 'Czestotliwosc'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentFont = False
      TabOrder = 1
      object LabelWx: TLabel
        Left = 16
        Top = 24
        Width = 19
        Height = 16
        Caption = 'Wx'
      end
      object LabelWy: TLabel
        Left = 16
        Top = 56
        Width = 20
        Height = 16
        Caption = 'Wy'
      end
      object ScrollBar3: TScrollBar
        Left = 64
        Top = 24
        Width = 169
        Height = 17
        Max = 9
        Min = 1
        PageSize = 0
        Position = 1
        TabOrder = 0
        OnScroll = ScrollBar3Scroll
      end
      object ScrollBar4: TScrollBar
        Left = 64
        Top = 56
        Width = 169
        Height = 17
        Max = 9
        Min = 1
        PageSize = 0
        Position = 1
        TabOrder = 1
        OnScroll = ScrollBar4Scroll
      end
    end
    object GroupBox3: TGroupBox
      Left = 8
      Top = 216
      Width = 249
      Height = 57
      Caption = 'Roznica fazy'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentFont = False
      TabOrder = 2
      object LabelF: TLabel
        Left = 16
        Top = 24
        Width = 8
        Height = 16
        Caption = 'F'
      end
      object ScrollBar5: TScrollBar
        Left = 64
        Top = 24
        Width = 169
        Height = 17
        Max = 360
        PageSize = 0
        Position = 90
        TabOrder = 0
        OnScroll = ScrollBar5Scroll
      end
    end
    object GroupBox4: TGroupBox
      Left = 8
      Top = 280
      Width = 249
      Height = 97
      Caption = 'Kolory'
      Font.Charset = DEFAULT_CHARSET
      Font.Color = clWindowText
      Font.Height = -13
      Font.Name = 'MS Sans Serif'
      Font.Style = []
      ParentFont = False
      TabOrder = 3
      object Label1: TLabel
        Left = 16
        Top = 24
        Width = 28
        Height = 16
        Caption = 'Linia'
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -13
        Font.Name = 'MS Sans Serif'
        Font.Style = []
        ParentFont = False
      end
      object Label2: TLabel
        Left = 16
        Top = 56
        Width = 20
        Height = 16
        Caption = 'T'#322'o'
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -13
        Font.Name = 'MS Sans Serif'
        Font.Style = []
        ParentFont = False
      end
      object ColorBox1: TColorBox
        Left = 64
        Top = 24
        Width = 169
        Height = 22
        ItemHeight = 16
        TabOrder = 0
        OnChange = ColorBox1Change
      end
      object ColorBox2: TColorBox
        Left = 64
        Top = 56
        Width = 169
        Height = 22
        DefaultColorColor = clWhite
        Selected = clWhite
        ItemHeight = 16
        TabOrder = 1
        OnChange = ColorBox2Change
      end
    end
    object GroupBox5: TGroupBox
      Left = 8
      Top = 384
      Width = 249
      Height = 81
      TabOrder = 4
      object SpeedButton1: TSpeedButton
        Left = 176
        Top = 24
        Width = 65
        Height = 41
        AllowAllUp = True
        GroupIndex = 1
        Caption = 'Animacja'
        OnClick = SpeedButton1Click
      end
      object Button1: TButton
        Left = 8
        Top = 24
        Width = 65
        Height = 41
        Caption = 'Rysuj'
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -13
        Font.Name = 'MS Sans Serif'
        Font.Style = []
        ParentFont = False
        TabOrder = 0
        OnClick = Button1Click
      end
      object Button2: TButton
        Left = 88
        Top = 24
        Width = 65
        Height = 41
        Caption = 'Czysc'
        Font.Charset = DEFAULT_CHARSET
        Font.Color = clWindowText
        Font.Height = -13
        Font.Name = 'MS Sans Serif'
        Font.Style = []
        ParentFont = False
        TabOrder = 1
        OnClick = Button2Click
      end
    end
  end
  object Timer1: TTimer
    Enabled = False
    OnTimer = Timer1Timer
    Left = 184
    Top = 8
  end
  object MainMenu1: TMainMenu
    Left = 144
    object Plik1: TMenuItem
      Caption = 'Plik'
      object Zamknij1: TMenuItem
        Caption = 'Zamknij'
        OnClick = Zamknij1Click
      end
    end
    object Pomoc1: TMenuItem
      Caption = 'Pomoc'
      object Oprogramie1: TMenuItem
        Caption = 'O programie'
        OnClick = Oprogramie1Click
      end
    end
  end
end
