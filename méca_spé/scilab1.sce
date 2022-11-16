clear all;
nb_ech=6; //nombre d'échantillon
x=linspace(0,d_x,1);
d_x=1/(nb_ech-1);
c_A=0;
c_B=0;
for i=1:nb_ech-2
       V(i,i)=0
end
H=zeros(nb_ech-2,nb_ech-2); //matrice de zéros dans matlab
y= ((d_x*2)*sin((x(2):d_X:x(nb_ech)-1))*pi);
y(1,1)=Y()
