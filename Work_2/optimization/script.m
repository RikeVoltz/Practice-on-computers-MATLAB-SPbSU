teta0=[0,0]; % краевые условия
v0=0.1; %начальное значение(v с чертой)
c0=-9.8; %начальное значение(c с чертой)
tspan=0:1:3000; %временная сетка
a=[200;0]'; %начальное приближение
[ti,tetai]=teta(v0,c0,tspan, teta0); %функция, найденная через солвер
teta_short=@(v0,c0)teta(v0,c0,tspan,teta0); %убрали лишние аргументы
min_func=@(a)target_f(a, tetai(:,1), teta_short); %целевая функция(ее оптимизируем)
fminsearch(min_func, a)

function [ti,tetai]=teta(v, c, tspan, teta0)
[ti, tetai]=ode45(@(ti,tetai) pend(v,c,ti,tetai), tspan, teta0);
end

function dtetadt=pend(v, c, t, teta)
dtetadt=[teta(2);f(t)-v*teta(2)-c*sin(teta(1))];
end

function res=f(t)
res=0.01;
end

function res=target_f(a, tetai, teta_short)
[~, tetaitemp]=teta_short(a(1),a(2));
res=1/size(tetai,1)*sum((tetai-tetaitemp(:, 1)).^2);
end