object DM: TDM
  OldCreateOrder = False
  Left = 399
  Top = 122
  Height = 553
  Width = 654
  object ADOConnection1: TADOConnection
    Connected = True
    ConnectionString = 
      'Provider=Microsoft.Jet.OLEDB.4.0;User ID=Admin;Data Source=D:\Sm' +
      'art_test\base.mdb;Mode=Share Deny None;Persist Security Info=Fal' +
      'se;Jet OLEDB:System database="";Jet OLEDB:Registry Path="";Jet O' +
      'LEDB:Database Password="";Jet OLEDB:Engine Type=5;Jet OLEDB:Data' +
      'base Locking Mode=1;Jet OLEDB:Global Partial Bulk Ops=2;Jet OLED' +
      'B:Global Bulk Transactions=1;Jet OLEDB:New Database Password="";' +
      'Jet OLEDB:Create System Database=False;Jet OLEDB:Encrypt Databas' +
      'e=False;Jet OLEDB:Don'#39't Copy Locale on Compact=False;Jet OLEDB:C' +
      'ompact Without Replica Repair=False;Jet OLEDB:SFP=False'
    LoginPrompt = False
    Mode = cmShareDenyNone
    Provider = 'Microsoft.Jet.OLEDB.4.0'
    Left = 24
    Top = 24
  end
  object ADOTable1: TADOTable
    Active = True
    Connection = ADOConnection1
    CursorType = ctStatic
    TableName = 'Wallpaper'
    Left = 24
    Top = 72
    object ADOTable1Article: TIntegerField
      Alignment = taCenter
      DisplayLabel = #1040#1088#1090#1080#1082#1091#1083
      FieldName = 'Article'
    end
    object ADOTable1Base: TWideStringField
      DisplayLabel = #1054#1089#1085#1086#1074#1072
      DisplayWidth = 14
      FieldName = 'Base'
      Size = 255
    end
    object ADOTable1Destination: TWideStringField
      DisplayLabel = #1055#1088#1080#1079#1085#1072#1095#1077#1085#1085#1103
      DisplayWidth = 14
      FieldName = 'Destination'
      Size = 255
    end
    object ADOTable1Format: TWideStringField
      DisplayLabel = #1060#1086#1088#1084#1072#1090
      DisplayWidth = 14
      FieldName = 'Format'
      Size = 255
    end
    object ADOTable1Price: TIntegerField
      DisplayLabel = #1062#1110#1085#1072
      DisplayWidth = 9
      FieldName = 'Price'
    end
    object ADOTable1Foto: TBlobField
      FieldName = 'Foto'
      Visible = False
    end
  end
  object DataSource1: TDataSource
    DataSet = ADOTable1
    Left = 96
    Top = 72
  end
  object DataSource2: TDataSource
    DataSet = ADOTable2
    Left = 96
    Top = 120
  end
  object ADOTable2: TADOTable
    Active = True
    Connection = ADOConnection1
    CursorType = ctStatic
    IndexFieldNames = 'Article'
    MasterFields = 'Article'
    MasterSource = DataSource1
    TableName = 'Delivery'
    Left = 24
    Top = 120
    object ADOTable2Delivery_num: TAutoIncField
      DisplayLabel = #1053#1086#1084#1077#1088' '#1087#1086#1089#1090#1072#1095#1072#1085#1085#1103
      FieldName = 'Delivery_num'
      ReadOnly = True
    end
    object ADOTable2Article: TIntegerField
      DisplayLabel = #1040#1088#1090#1080#1082#1091#1083
      FieldName = 'Article'
      Visible = False
    end
    object ADOTable2Number_wallpapers: TIntegerField
      DisplayLabel = #1050#1110#1083#1100#1082#1110#1089#1090#1100' '#1088#1091#1083#1086#1085#1110#1074
      FieldName = 'Number_wallpapers'
    end
  end
  object ADOTable3: TADOTable
    Active = True
    Connection = ADOConnection1
    CursorType = ctStatic
    TableName = 'Users'
    Left = 24
    Top = 176
  end
  object DataSource3: TDataSource
    DataSet = ADOTable3
    Left = 96
    Top = 176
  end
  object ADOTable4: TADOTable
    Active = True
    Connection = ADOConnection1
    CursorType = ctStatic
    TableName = 'Manager_R'
    Left = 24
    Top = 232
    object ADOTable4FIO: TWideStringField
      FieldName = 'FIO'
      Size = 255
    end
  end
  object ADOTable5: TADOTable
    Active = True
    Connection = ADOConnection1
    CursorType = ctStatic
    TableName = 'Shop'
    Left = 24
    Top = 280
    object ADOTable5ID: TAutoIncField
      DisplayWidth = 4
      FieldName = 'ID'
      ReadOnly = True
    end
    object ADOTable5Article: TIntegerField
      DisplayLabel = #1040#1088#1090#1080#1082#1091#1083
      DisplayWidth = 8
      FieldName = 'Article'
    end
    object ADOTable5Base: TWideStringField
      DisplayLabel = #1054#1089#1085#1086#1074#1072
      DisplayWidth = 12
      FieldName = 'Base'
      Size = 255
    end
    object ADOTable5Destination: TWideStringField
      DisplayLabel = #1055#1088#1080#1079#1085#1072#1095#1077#1085#1085#1103
      DisplayWidth = 12
      FieldName = 'Destination'
      Size = 255
    end
    object ADOTable5Format: TWideStringField
      DisplayLabel = #1060#1086#1088#1084#1072#1090
      DisplayWidth = 10
      FieldName = 'Format'
      Size = 255
    end
    object ADOTable5Price: TIntegerField
      DisplayLabel = #1062#1110#1085#1072
      DisplayWidth = 8
      FieldName = 'Price'
    end
    object ADOTable5N_M: TWideStringField
      DisplayLabel = #1055#1030#1041' '#1052#1077#1085#1077#1076#1078#1077#1088#1072
      DisplayWidth = 12
      FieldName = 'N_M'
      Size = 255
    end
    object ADOTable5Num_Wall: TIntegerField
      DisplayLabel = #1050#1110#1083#1100#1082#1110#1089#1090#1100' '#1088#1091#1083#1086#1085#1110#1074
      DisplayWidth = 12
      FieldName = 'Num_Wall'
    end
    object ADOTable5Total_Price: TIntegerField
      DisplayLabel = #1047#1072#1075#1072#1083#1100#1085#1080#1081' '#1074#1072#1088#1090#1110#1089#1090#1100
      DisplayWidth = 12
      FieldName = 'Total_Price'
    end
    object ADOTable5Date_Shop: TDateTimeField
      Alignment = taCenter
      DisplayLabel = #1044#1072#1090#1072' '#1079#1072#1084#1086#1074#1083#1077#1085#1085#1103
      DisplayWidth = 10
      FieldName = 'Date_Shop'
    end
  end
  object DataSource4: TDataSource
    DataSet = ADOTable4
    Left = 96
    Top = 232
  end
  object DataSource5: TDataSource
    DataSet = ADOTable5
    Left = 96
    Top = 280
  end
end
