/* Generated from ../../../git/cloog/test/vivien.cloog by CLooG 0.14.0-136-gb91ef26 gmp bits in 0.78s. */
if (n >= 0) {
  for (p1=-54*n+4;p1<=4;p1++) {
    if (p1%2 == 0) {
      S1((p1-2)/2) ;
    }
  }
  if (n >= 1) {
    S3(1) ;
  }
  for (p1=max(5,4*n+2);p1<=6;p1++) {
    if (p1%2 == 0) {
      S1((p1-2)/2) ;
    }
  }
  if (n >= 2) {
    S4(1,2) ;
    S1(2) ;
    S6(1,2) ;
  }
  for (p1=7;p1<=min(9,2*n+2);p1++) {
    if (p1%2 == 0) {
      S4(1,(p1-2)/2) ;
    }
    if ((p1+3)%4 == 0) {
      S3((p1-1)/4) ;
    }
    if (p1%2 == 0) {
      S1((p1-2)/2) ;
    }
    if (p1%2 == 0) {
      S6(1,(p1-2)/2) ;
    }
    if ((p1+1)%2 == 0) {
      S2((p1-3)/2,1) ;
    }
  }
  if (n == 3) {
    S3(2) ;
    S2(3,1) ;
  }
  if (n >= 4) {
    S4(2,3) ;
    S4(1,4) ;
    S5(2,3,1) ;
    S6(2,3) ;
    S1(4) ;
    S6(1,4) ;
  }
  if (n == 4) {
    S2(4,1) ;
    S2(3,2) ;
  }
  if (n == 4) {
    S4(2,4) ;
    S5(2,4,1) ;
    S6(2,4) ;
    S1(5) ;
  }
  if (n == 3) {
    S4(2,3) ;
    S5(2,3,1) ;
    S6(2,3) ;
    S1(4) ;
  }
  if (n == 4) {
    S3(3) ;
    S2(4,2) ;
  }
  for (p1=11;p1<=min(13,2*n+2);p1++) {
    p2 = floord(-p1+5,4) ;
    if (p1%2 == 0) {
      S4(-p2,(p1+2*p2)/2) ;
    }
    for (p2=ceild(-p1+6,4);p2<=-1;p2++) {
      if (p1%2 == 0) {
        S4(-p2,(p1+2*p2)/2) ;
      }
      for (p3=1;p3<=-p2;p3++) {
        if (p1%2 == 0) {
          S5(-p2+1,(p1+2*p2-2)/2,1) ;
        }
      }
    }
    if (p1%2 == 0) {
      S6(2,(p1-4)/2) ;
    }
    if ((p1+3)%4 == 0) {
      S3((p1-1)/4) ;
    }
    if (p1%2 == 0) {
      S1((p1-2)/2) ;
    }
    if (p1%2 == 0) {
      S6(1,(p1-2)/2) ;
    }
    if ((p1+1)%2 == 0) {
      S2((p1-3)/2,1) ;
    }
    for (p2=2;p2<=floord(p1-3,4);p2++) {
      if ((p1+1)%2 == 0) {
        S2((p1-2*p2-1)/2,p2) ;
      }
    }
  }
  if (n == 5) {
    S3(3) ;
    S2(5,1) ;
    S2(4,2) ;
  }
  for (p1=14;p1<=2*n+2;p1++) {
    p2 = floord(-p1+5,4) ;
    if (p1%2 == 0) {
      S4(-p2,(p1+2*p2)/2) ;
    }
    p2 = floord(-p1+9,4) ;
    if (p1%2 == 0) {
      S4(-p2,(p1+2*p2)/2) ;
    }
    for (p3=1;p3<=-p2;p3++) {
      if (p1%2 == 0) {
        S5(-p2+1,(p1+2*p2-2)/2,p3) ;
      }
    }
    for (p2=ceild(-p1+10,4);p2<=-1;p2++) {
      if (p1%2 == 0) {
        S4(-p2,(p1+2*p2)/2) ;
      }
      if (p1%2 == 0) {
        S6(-p2+2,(p1+2*p2-4)/2) ;
      }
      for (p3=1;p3<=-p2;p3++) {
        if (p1%2 == 0) {
          S5(-p2+1,(p1+2*p2-2)/2,p3) ;
        }
      }
    }
    if (p1%2 == 0) {
      S6(2,(p1-4)/2) ;
    }
    if ((p1+3)%4 == 0) {
      S3((p1-1)/4) ;
    }
    if (p1%2 == 0) {
      S1((p1-2)/2) ;
    }
    if (p1%2 == 0) {
      S6(1,(p1-2)/2) ;
    }
    if ((p1+1)%2 == 0) {
      S2((p1-3)/2,1) ;
    }
    for (p2=2;p2<=floord(p1-3,4);p2++) {
      if ((p1+1)%2 == 0) {
        S2((p1-2*p2-1)/2,p2) ;
      }
    }
  }
  if (n == 5) {
    S4(3,4) ;
    S4(2,5) ;
    for (p3=1;p3<=2;p3++) {
      S5(3,4,p3) ;
    }
    S6(3,4) ;
    S5(2,5,1) ;
    S6(2,5) ;
    S1(6) ;
  }
  if (n >= 7) {
    if ((n+1)%2 == 0) {
      S3((n+1)/2) ;
    }
    S2(n,1) ;
    for (p2=2;p2<=floord(n,2);p2++) {
      S2(-p2+n+1,p2) ;
    }
  }
  if (n >= 7) {
    p2 = floord(-n,2) ;
    S4(-p2,p2+n+2) ;
    p2 = floord(-n+2,2) ;
    S4(-p2,p2+n+2) ;
    for (p3=1;p3<=-p2;p3++) {
      S5(-p2+1,p2+n+1,p3) ;
    }
    for (p2=ceild(-n+3,2);p2<=-2;p2++) {
      S4(-p2,p2+n+2) ;
      S6(-p2+2,p2+n) ;
      for (p3=1;p3<=-p2;p3++) {
        S5(-p2+1,p2+n+1,p3) ;
      }
    }
    S6(3,n-1) ;
    S5(2,n,1) ;
    S6(2,n) ;
    S1(n+1) ;
  }
  if (n == 6) {
    S2(6,1) ;
    for (p2=2;p2<=3;p2++) {
      S2(-p2+7,p2) ;
    }
  }
  if (n == 6) {
    S4(3,5) ;
    S4(2,6) ;
    for (p3=1;p3<=2;p3++) {
      S5(3,5,p3) ;
    }
    S6(3,5) ;
    S5(2,6,1) ;
    S6(2,6) ;
    S1(7) ;
  }
  for (p1=2*n+5;p1<=min(2*n+58,4*n-10);p1++) {
    p2 = floord(-p1+5,4) ;
    if (p1%2 == 0) {
      S4(-p2,(p1+2*p2)/2) ;
    }
    p2 = floord(-p1+9,4) ;
    if (p1%2 == 0) {
      S4(-p2,(p1+2*p2)/2) ;
    }
    for (p3=1;p3<=-p2;p3++) {
      if (p1%2 == 0) {
        S5(-p2+1,(p1+2*p2-2)/2,p3) ;
      }
    }
    for (p2=ceild(-p1+10,4);p2<=floord(-p1+2*n,2);p2++) {
      if (p1%2 == 0) {
        S4(-p2,(p1+2*p2)/2) ;
      }
      if (p1%2 == 0) {
        S6(-p2+2,(p1+2*p2-4)/2) ;
      }
      for (p3=1;p3<=-p2;p3++) {
        if (p1%2 == 0) {
          S5(-p2+1,(p1+2*p2-2)/2,p3) ;
        }
      }
    }
    p2 = floord(-p1+2*n+2,2) ;
    if (p1%2 == 0) {
      S6(-p2+2,(p1+2*p2-4)/2) ;
    }
    for (p3=1;p3<=-p2;p3++) {
      if (p1%2 == 0) {
        S5(-p2+1,(p1+2*p2-2)/2,p3) ;
      }
    }
    p2 = floord(-p1+2*n+4,2) ;
    if (p1%2 == 0) {
      S6(-p2+2,(p1+2*p2-4)/2) ;
    }
    if ((p1+3)%4 == 0) {
      S3((p1-1)/4) ;
    }
    if (p1%2 == 0) {
      S1((p1-2)/2) ;
    }
    for (p2=ceild(p1-2*n-1,2);p2<=floord(p1-3,4);p2++) {
      if ((p1+1)%2 == 0) {
        S2((p1-2*p2-1)/2,p2) ;
      }
    }
  }
  for (p1=max(2*n+5,4*n-9);p1<=min(2*n+58,4*n-8);p1++) {
    p2 = floord(-p1+5,4) ;
    if (p1%2 == 0) {
      S4(-p2,(p1+2*p2)/2) ;
    }
    for (p2=ceild(-p1+6,4);p2<=floord(-p1+2*n,2);p2++) {
      if (p1%2 == 0) {
        S4(-p2,(p1+2*p2)/2) ;
      }
      for (p3=1;p3<=-p2;p3++) {
        if (p1%2 == 0) {
          S5(-p2+1,(p1+2*p2-2)/2,p3) ;
        }
      }
    }
    for (p2=ceild(-p1+10,4);p2<=floord(-p1+2*n+2,2);p2++) {
      if (p1%2 == 0) {
        S6(-p2+2,(p1+2*p2-4)/2) ;
      }
      for (p3=1;p3<=-p2;p3++) {
        if (p1%2 == 0) {
          S5(-p2+1,(p1+2*p2-2)/2,p3) ;
        }
      }
    }
    p2 = floord(-p1+2*n+4,2) ;
    if (p1%2 == 0) {
      S6(-p2+2,(p1+2*p2-4)/2) ;
    }
    if (p1%2 == 0) {
      S1((p1-2)/2) ;
    }
    for (p2=ceild(p1-2*n-1,2);p2<=floord(p1-3,4);p2++) {
      if ((p1+1)%2 == 0) {
        S2((p1-2*p2-1)/2,p2) ;
      }
    }
  }
  for (p1=max(2*n+5,4*n-7);p1<=min(2*n+58,4*n-6);p1++) {
    p2 = floord(-p1+5,4) ;
    if (p1%2 == 0) {
      S4(-p2,(p1+2*p2)/2) ;
    }
    for (p2=ceild(-p1+6,4);p2<=floord(-p1+2*n,2);p2++) {
      if (p1%2 == 0) {
        S4(-p2,(p1+2*p2)/2) ;
      }
      for (p3=1;p3<=-p2;p3++) {
        if (p1%2 == 0) {
          S5(-p2+1,(p1+2*p2-2)/2,p3) ;
        }
      }
    }
    for (p2=ceild(-p1+10,4);p2<=floord(-p1+2*n+2,2);p2++) {
      if (p1%2 == 0) {
        S6(-p2+2,(p1+2*p2-4)/2) ;
      }
      for (p3=1;p3<=-p2;p3++) {
        if (p1%2 == 0) {
          S5(-p2+1,(p1+2*p2-2)/2,p3) ;
        }
      }
    }
    p2 = floord(-p1+2*n+4,2) ;
    if (p1%2 == 0) {
      S6(-p2+2,(p1+2*p2-4)/2) ;
    }
    if ((p1+3)%4 == 0) {
      S3((p1-1)/4) ;
    }
    if (p1%2 == 0) {
      S1((p1-2)/2) ;
    }
    for (p2=ceild(p1-2*n-1,2);p2<=floord(p1-3,4);p2++) {
      if ((p1+1)%2 == 0) {
        S2((p1-2*p2-1)/2,p2) ;
      }
    }
  }
  for (p1=max(14,4*n-5);p1<=min(2*n+58,4*n-2);p1++) {
    for (p2=ceild(-p1+2,4);p2<=floord(-p1+2*n,2);p2++) {
      if (p1%2 == 0) {
        S4(-p2,(p1+2*p2)/2) ;
      }
    }
    for (p2=ceild(-p1+6,4);p2<=floord(-p1+2*n+2,2);p2++) {
      for (p3=1;p3<=-p2;p3++) {
        if (p1%2 == 0) {
          S5(-p2+1,(p1+2*p2-2)/2,p3) ;
        }
      }
    }
    for (p2=ceild(-p1+10,4);p2<=floord(-p1+2*n+4,2);p2++) {
      if (p1%2 == 0) {
        S6(-p2+2,(p1+2*p2-4)/2) ;
      }
    }
    if ((p1+3)%4 == 0) {
      S3((p1-1)/4) ;
    }
    if (p1%2 == 0) {
      S1((p1-2)/2) ;
    }
    for (p2=ceild(p1-2*n-1,2);p2<=floord(p1-3,4);p2++) {
      if ((p1+1)%2 == 0) {
        S2((p1-2*p2-1)/2,p2) ;
      }
    }
  }
  if ((n <= 29) && (n >= 2)) {
    S2(n,n-1) ;
  }
  for (p1=max(7,4*n);p1<=min(2*n+58,4*n+1);p1++) {
    if ((p1+3)%4 == 0) {
      S3((p1-1)/4) ;
    }
    if (p1%2 == 0) {
      S1((p1-2)/2) ;
    }
  }
  for (p1=max(7,4*n+2);p1<=2*n+58;p1++) {
    if (p1%2 == 0) {
      S1((p1-2)/2) ;
    }
  }
  for (p1=2*n+59;p1<=4*n-10;p1++) {
    p2 = floord(-p1+5,4) ;
    if (p1%2 == 0) {
      S4(-p2,(p1+2*p2)/2) ;
    }
    p2 = floord(-p1+9,4) ;
    if (p1%2 == 0) {
      S4(-p2,(p1+2*p2)/2) ;
    }
    for (p3=1;p3<=-p2;p3++) {
      if (p1%2 == 0) {
        S5(-p2+1,(p1+2*p2-2)/2,p3) ;
      }
    }
    for (p2=ceild(-p1+10,4);p2<=floord(-p1+2*n,2);p2++) {
      if (p1%2 == 0) {
        S4(-p2,(p1+2*p2)/2) ;
      }
      if (p1%2 == 0) {
        S6(-p2+2,(p1+2*p2-4)/2) ;
      }
      for (p3=1;p3<=-p2;p3++) {
        if (p1%2 == 0) {
          S5(-p2+1,(p1+2*p2-2)/2,p3) ;
        }
      }
    }
    p2 = floord(-p1+2*n+2,2) ;
    if (p1%2 == 0) {
      S6(-p2+2,(p1+2*p2-4)/2) ;
    }
    for (p3=1;p3<=-p2;p3++) {
      if (p1%2 == 0) {
        S5(-p2+1,(p1+2*p2-2)/2,p3) ;
      }
    }
    p2 = floord(-p1+2*n+4,2) ;
    if (p1%2 == 0) {
      S6(-p2+2,(p1+2*p2-4)/2) ;
    }
    if ((p1+3)%4 == 0) {
      S3((p1-1)/4) ;
    }
    for (p2=ceild(p1-2*n-1,2);p2<=floord(p1-3,4);p2++) {
      if ((p1+1)%2 == 0) {
        S2((p1-2*p2-1)/2,p2) ;
      }
    }
  }
  for (p1=max(2*n+59,4*n-9);p1<=4*n-8;p1++) {
    p2 = floord(-p1+5,4) ;
    if (p1%2 == 0) {
      S4(-p2,(p1+2*p2)/2) ;
    }
    p2 = floord(-p1+9,4) ;
    if (p1%2 == 0) {
      S4(-p2,(p1+2*p2)/2) ;
    }
    for (p3=1;p3<=-p2;p3++) {
      if (p1%2 == 0) {
        S5(-p2+1,(p1+2*p2-2)/2,p3) ;
      }
    }
    for (p2=ceild(-p1+10,4);p2<=floord(-p1+2*n+2,2);p2++) {
      if (p1%2 == 0) {
        S6(-p2+2,(p1+2*p2-4)/2) ;
      }
      for (p3=1;p3<=-p2;p3++) {
        if (p1%2 == 0) {
          S5(-p2+1,(p1+2*p2-2)/2,p3) ;
        }
      }
    }
    p2 = floord(-p1+2*n+4,2) ;
    if (p1%2 == 0) {
      S6(-p2+2,(p1+2*p2-4)/2) ;
    }
    for (p2=ceild(p1-2*n-1,2);p2<=floord(p1-3,4);p2++) {
      if ((p1+1)%2 == 0) {
        S2((p1-2*p2-1)/2,p2) ;
      }
    }
  }
  for (p1=max(2*n+59,4*n-7);p1<=4*n-6;p1++) {
    p2 = floord(-p1+5,4) ;
    if (p1%2 == 0) {
      S4(-p2,(p1+2*p2)/2) ;
    }
    for (p2=ceild(-p1+6,4);p2<=floord(-p1+2*n,2);p2++) {
      if (p1%2 == 0) {
        S4(-p2,(p1+2*p2)/2) ;
      }
      for (p3=1;p3<=-p2;p3++) {
        if (p1%2 == 0) {
          S5(-p2+1,(p1+2*p2-2)/2,p3) ;
        }
      }
    }
    for (p2=ceild(-p1+10,4);p2<=floord(-p1+2*n+2,2);p2++) {
      if (p1%2 == 0) {
        S6(-p2+2,(p1+2*p2-4)/2) ;
      }
      for (p3=1;p3<=-p2;p3++) {
        if (p1%2 == 0) {
          S5(-p2+1,(p1+2*p2-2)/2,p3) ;
        }
      }
    }
    p2 = floord(-p1+2*n+4,2) ;
    if (p1%2 == 0) {
      S6(-p2+2,(p1+2*p2-4)/2) ;
    }
    if ((p1+3)%4 == 0) {
      S3((p1-1)/4) ;
    }
    for (p2=ceild(p1-2*n-1,2);p2<=floord(p1-3,4);p2++) {
      if ((p1+1)%2 == 0) {
        S2((p1-2*p2-1)/2,p2) ;
      }
    }
  }
  for (p1=max(2*n+59,4*n-5);p1<=4*n-2;p1++) {
    for (p2=ceild(-p1+2,4);p2<=floord(-p1+2*n,2);p2++) {
      if (p1%2 == 0) {
        S4(-p2,(p1+2*p2)/2) ;
      }
    }
    for (p2=ceild(-p1+6,4);p2<=floord(-p1+2*n+2,2);p2++) {
      for (p3=1;p3<=-p2;p3++) {
        if (p1%2 == 0) {
          S5(-p2+1,(p1+2*p2-2)/2,p3) ;
        }
      }
    }
    for (p2=ceild(-p1+10,4);p2<=floord(-p1+2*n+4,2);p2++) {
      if (p1%2 == 0) {
        S6(-p2+2,(p1+2*p2-4)/2) ;
      }
    }
    if ((p1+3)%4 == 0) {
      S3((p1-1)/4) ;
    }
    for (p2=ceild(p1-2*n-1,2);p2<=floord(p1-3,4);p2++) {
      if ((p1+1)%2 == 0) {
        S2((p1-2*p2-1)/2,p2) ;
      }
    }
  }
  if (n >= 30) {
    S2(n,n-1) ;
  }
  for (p1=max(4*n,2*n+59);p1<=4*n+1;p1++) {
    if ((p1+3)%4 == 0) {
      S3((p1-1)/4) ;
    }
  }
}
