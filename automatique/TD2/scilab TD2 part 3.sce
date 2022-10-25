p=poly(0,'p');
B=syslin('c',1/p^0);
E=syslin('c',1/p);
R=syslin('c',1/p^2);

//indicielle 1
A1=syslin('c',2/p);
G=A1/.B
t=linspace(0,3,1000);
s1=csim('step',t,G);
eps1=ones(t)-s1;
scf(1)
plot2d(t,[s1;eps1]',leg="rep indicille@erreur");

//rampe 1
sr1=csim(t,t,G);
epsv1=t-sr1;
scf(2);
plot2d(t,[t;sr1;epsv1]',leg="rep rampe@erreur");

//indicielle 2
G2=A1/.B;
s2=csim('step',t,G2);
eps2=ones(t)-s2;
scf(3);
plot2d(t,[s2;eps2]',leg="reponse indicielle@erreur");

//rampe 2
sr2=csim(t,t,G2);
epsv2=t-sr2;
plot2d(t,[sr2;epsv2]',leg="reponse rampe@erreur");