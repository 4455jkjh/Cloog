/* Generated from ../../../git/cloog/test/yosr.cloog by CLooG 0.14.0-117-g7c6f653 gmp bits in 0.07s. */
if (n >= 2) {
  for (j=2;j<=n;j++) {
    S1(i = 1) ;
  }
  for (proc=2;proc<=n-1;proc++) {
    for (i=1;i<=proc-1;i++) {
      for (j=i+1;j<=n;j++) {
        S2(k = proc) ;
      }
    }
    for (j=proc+1;j<=n;j++) {
      S1(i = proc) ;
    }
  }
  for (i=1;i<=n-1;i++) {
    for (j=i+1;j<=n;j++) {
      S2(k = n) ;
    }
  }
}
