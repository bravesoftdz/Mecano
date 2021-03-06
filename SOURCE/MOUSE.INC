Const Arrow  = 1;
      Arrow2 = 2;
      Hand   = 3;
      Cross  = 4;
      Cross2 = 5;
      Clock  = 6;
      EdLine = 7;

Type Mask    = array[1..16] of word;
     CurType = record
                ScreenMask : Mask;
                CursorMask : Mask;
                X          : Word;
                Y          : Word;
               end;


Const
Cursors:array[1..7] of CurType=(

  (ScreenMask : ($1FFF,$0FFF,$07FF,$03FF,$01FF,$00FF,$007F,$003F,$001F,$00FF,$007F,$203F,$E01F,$E1FF,$E3FF,$E7FF);
  CursorMask : ($E000,$D000,$C800,$C400,$C200,$C100,$C080,$C040,$C1E0,$D900,$F880,$D840,$19E0,$1A00,$1C00,$1800);
  X          : 1;
  Y          : 0),

  (ScreenMask : (16383,8191,4095,2047,1023,511,255,127,63,63,511,4351,12543,63615,63615,64767);
  CursorMask : (0,16384,24576,28672,30720,31744,32256,32512,32640,31744,27648,17920,1536,768,768,0);
  X          : 0;
  Y          : 0),

  (ScreenMask : (64511,61951,57599,57599,57519,57351,57347,49155,32771,1347,8163,8135,34759,49159,49159,57359);
  CursorMask : (0,1024,2560,2560,2560,2896,2728,6824,10920,18440,16392,16400,8208,4112,8176,0);
  X          : 5;
  Y          : 1),

  (ScreenMask : (64767,63615,63615,63615,63615,63615,32771,1,1,32771,63615,63615,63615,63615,63615,64767);
  CursorMask : (0,768,768,768,768,768,768,32764,32764,768,768,768,768,768,768,0);
  X          : 7;
  Y          : 7),

  (ScreenMask : ($FEFF,$FEFF,$FEFF,$FEFF,$FEFF,$FEFF,$FEFF,$0001,$FEFF,$FEFF,$FEFF,$FEFF,$FEFF,$FEFF,$FEFF,$FEFF);
  CursorMask : ($0000,$0000,$0000,$0000,$0000,$0000,$0000,$0000,$0000,$0000,$0000,$0000,$0000,$0000,$0000,$0000);
  X          : 7;
  Y          : 7),

  (ScreenMask : (57347,57347,58339,57799,61895,61455,63503,63519,63519,63503,61519,61767,57479,58339,57347,57347);
  CursorMask : (4088,2056,2056,1040,1040,864,672,320,320,544,672,1040,1360,2056,2056,4088);
  X          : 0;
  Y          : 0),

  (ScreenMask :($FFFF,$E10F,$EEEF,$FEFF,$FEFF,$FEFF,$FEFF,$FEFF,$FEFF,$FEFF,$FEFF,$FEFF,$EEEF,$E10F,$FFFF,$FFFF);
  CursorMask :($0000,$0000,$0000,$0000,$0000,$0000,$0000,$0000,$0000,$0000,$0000,$0000,$0000,$0000,$0000,$0000);
  X          : 0;
  Y          : 0));
