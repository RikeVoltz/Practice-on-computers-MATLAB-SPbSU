n = randi(10);
A = diag(-2*ones(n, 1))+ diag(ones(n-1, 1),1) + diag(ones(n-1, 1),-1)+ ...
    + diag(1,-n+1) + diag(1, n-1);
disp(A);
disp(rank(A));