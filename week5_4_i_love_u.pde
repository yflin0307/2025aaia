//week5_4_i_love_u
size(300,300);
stroke(255,0,0);
for(int xx=0; xx<300; xx++){
  for(int yy=0; yy<300; yy++){
    float x = (xx-150)/100.0, y = -(yy-150)/100.0;
    float d = x*x + y*y - 1;
    if(d*d*d - x*x*y*y*y < 0) point(xx,yy);
  }
}  
