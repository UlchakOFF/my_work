object Form8: TForm8
  Left = 368
  Top = 52
  Width = 1163
  Height = 750
  Caption = #1030#1089#1090#1086#1088#1110#1103' '#1079#1072#1084#1086#1074#1083#1077#1085#1100
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  WindowState = wsMaximized
  OnClose = FormClose
  PixelsPerInch = 96
  TextHeight = 13
  object BitBtn1: TBitBtn
    Left = 1272
    Top = 232
    Width = 193
    Height = 49
    Caption = #1053#1072#1079#1072#1076
    TabOrder = 0
    OnClick = BitBtn1Click
  end
  object GroupBox2: TGroupBox
    Left = 64
    Top = 304
    Width = 1401
    Height = 465
    Caption = #1046#1091#1088#1085#1072#1083' '#1079#1072#1084#1086#1074#1083#1077#1085#1100
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Comic Sans MS'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 1
    object DBGrid2: TDBGrid
      Left = 16
      Top = 24
      Width = 1361
      Height = 425
      DataSource = DM.DataSource5
      TabOrder = 0
      TitleFont.Charset = DEFAULT_CHARSET
      TitleFont.Color = clWindowText
      TitleFont.Height = -13
      TitleFont.Name = 'Comic Sans MS'
      TitleFont.Style = [fsBold]
      OnTitleClick = DBGrid2TitleClick
      Columns = <
        item
          Alignment = taCenter
          Expanded = False
          FieldName = 'ID'
          Title.Alignment = taCenter
          Width = 48
          Visible = True
        end
        item
          Alignment = taCenter
          Expanded = False
          FieldName = 'Article'
          Title.Alignment = taCenter
          Title.Caption = #1040#1088#1090#1080#1082#1091#1083
          Width = 82
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'Type_product'
          Title.Alignment = taCenter
          Title.Caption = #1058#1080#1087' '#1087#1088#1086#1076#1091#1082#1094#1110#1111
          Width = 134
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'Name_product'
          Title.Alignment = taCenter
          Title.Caption = #1053#1072#1079#1074#1072' '#1087#1088#1086#1076#1091#1082#1094#1110#1111
          Width = 170
          Visible = True
        end
        item
          Alignment = taCenter
          Expanded = False
          FieldName = 'Number_product'
          Title.Alignment = taCenter
          Title.Caption = #1050#1110#1083#1100#1082#1110#1089#1090#1100' '#1087#1088#1086#1076#1091#1082#1094#1110#1111
          Width = 139
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'UnitP'
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'Price'
          Title.Alignment = taCenter
          Title.Caption = #1042#1072#1088#1090#1110#1089#1090#1100
          Width = 77
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'Total_Price'
          Title.Alignment = taCenter
          Title.Caption = #1047#1072#1075#1072#1083#1100#1085#1072' '#1074#1072#1088#1090#1110#1089#1090#1100
          Width = 131
          Visible = True
        end
        item
          Expanded = False
          FieldName = 'NManager'
          Title.Alignment = taCenter
          Title.Caption = #1052#1077#1085#1077#1076#1078#1077#1088
          Width = 114
          Visible = True
        end
        item
          Alignment = taCenter
          Expanded = False
          FieldName = 'Date_Shop'
          Title.Alignment = taCenter
          Title.Caption = #1044#1072#1090#1072' '#1087#1086#1082#1091#1087#1082#1080
          Width = 100
          Visible = True
        end
        item
          Alignment = taCenter
          Expanded = False
          FieldName = 'Time_Shop'
          Title.Alignment = taCenter
          Title.Caption = #1063#1072#1089' '#1087#1086#1082#1091#1087#1082#1080
          Width = 100
          Visible = True
        end>
    end
  end
  object GroupBox1: TGroupBox
    Left = 64
    Top = 48
    Width = 449
    Height = 209
    Caption = #1044#1072#1090#1072
    Font.Charset = DEFAULT_CHARSET
    Font.Color = clWindowText
    Font.Height = -13
    Font.Name = 'Comic Sans MS'
    Font.Style = [fsBold]
    ParentFont = False
    TabOrder = 2
    object DBGrid1: TDBGrid
      Left = 16
      Top = 24
      Width = 417
      Height = 129
      DataSource = DM.DataSource8
      TabOrder = 0
      TitleFont.Charset = DEFAULT_CHARSET
      TitleFont.Color = clWindowText
      TitleFont.Height = -13
      TitleFont.Name = 'Comic Sans MS'
      TitleFont.Style = [fsBold]
      Columns = <
        item
          Expanded = False
          FieldName = 'Date_Shop'
          Title.Caption = #1044#1072#1090#1072' '#1087#1086#1082#1091#1087#1082#1080
          Visible = True
        end>
    end
    object DBNavigator1: TDBNavigator
      Left = 16
      Top = 168
      Width = 420
      Height = 25
      DataSource = DM.DataSource8
      TabOrder = 1
    end
  end
end
