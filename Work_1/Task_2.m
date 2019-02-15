n = randi(10);
b = 1:n;
A = repmat(b,n,1)';
B =(ones(n,1) * b)';
C = meshgrid(b)';
disp(A);
disp(isequal(A,B,C));