p=poly(0,'p');
G=syslin('c',10/(1+0.1*p)*(1+20*p));
t=linspace(0,1,500);
y=csim('step',t,G);

plot2d(t,y)
black(G)
