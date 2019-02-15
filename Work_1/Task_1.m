A = randi(100, 4, 3);
B = randi(100, 3, 4);
C = A*B;
D = C(1:3,1:3);
det(D)
poly(D)
eig(D)
