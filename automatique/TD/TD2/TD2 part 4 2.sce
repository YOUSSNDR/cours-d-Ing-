//p=poly(0,'p');
//B=syslin('c',1/p^0);
//E=syslin('c',1/p);
//R=syslin('c',1/p^2);

//A=syslin('c',1/p+0.2*p^(2)+p^(3));

//indicielle 1
//G=A/(1+A)
//t=linspace(0,10,1000);
//s1=csim('step',t,G);
//scf(1)
//plot2d(t,s1,leg="rep indicille@erreur");
close(winsid());
K = 1;
A=syslin('c', K / (p * (1 + 0.2 * p + p * p)));       //fct transfert

scf(5); bode(A); 
   
scf(6); black(A);


F = A / (1 + A);        //systeme en BF a retour unitaire
pole = roots(F.den);

t = linspace(0, 10, 200);
scf(7);
si = csim('step', t, F);    //calcul reponse indicielle
erreurp = ones(t) - si;
plot2d(t, [si; erreurp]', leg = 'reponse@erreur');
