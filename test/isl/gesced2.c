/* Generated from ../../../git/cloog/test/gesced2.cloog by CLooG 0.14.0-91-g5d3da4b gmp bits in 0.04s. */
for (c1=1;c1<=4;c1++) {
  for (c2=5;c2<=M-10;c2++) {
    S1(i = c1,j = c2) ;
  }
}
for (c1=5;c1<=min(9,M-10);c1++) {
  for (c2=-c1+1;c2<=4;c2++) {
    i = c1+c2 ;
    S2(j = c1) ;
  }
  for (c2=5;c2<=M-10;c2++) {
    S1(i = c1,j = c2) ;
    i = c1+c2 ;
    S2(j = c1) ;
  }
  for (c2=M-9;c2<=-c1+M;c2++) {
    i = c1+c2 ;
    S2(j = c1) ;
  }
}
if (M >= 20) {
  for (c2=-9;c2<=4;c2++) {
    i = c2+10 ;
    S2(j = 10) ;
  }
  for (c2=5;c2<=M-10;c2++) {
    S1(i = 10,j = c2) ;
    i = c2+10 ;
    S2(j = 10) ;
  }
}
for (c1=11;c1<=M-10;c1++) {
  for (c2=-c1+1;c2<=4;c2++) {
    i = c1+c2 ;
    S2(j = c1) ;
  }
  for (c2=5;c2<=-c1+M;c2++) {
    S1(i = c1,j = c2) ;
    i = c1+c2 ;
    S2(j = c1) ;
  }
  for (c2=-c1+M+1;c2<=M-10;c2++) {
    S1(i = c1,j = c2) ;
  }
}
for (c1=M-9;c1<=M;c1++) {
  for (c2=5;c2<=M-10;c2++) {
    S1(i = c1,j = c2) ;
  }
}
