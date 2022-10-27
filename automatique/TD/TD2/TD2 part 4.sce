p=poly(0,'p');
B=syslin('c',1/p^0);
E=syslin('c',1/p);
R=syslin('c',1/p^2);

A=syslin('c',1/(p+0.2*p^2+p^3);
fmin=10^0;
fmax=10^6;
frq=logspace(0,6);
repf=repfreq(A,frq);

//Bode
[db,phi]=dbphi(repf);
scf(1);
bode(frq,db,phi);
gainplot(A);

//black
scf(2);
black(A);
