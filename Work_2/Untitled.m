f = @(t,y) [t*y(2);-cos(y(1))];

hold on
for y20=0:0.3:5
  [ts,ys] = ode45(f,[0,10],[0;y20]);
  plot(ys(:,1),ys(:,2))
end
hold off