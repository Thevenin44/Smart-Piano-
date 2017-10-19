%% A simulation program that computes the frequency a given piano key would produce
%%

n = 1:88 % Key Number
a = nthroot(2,12);
f = power(a,(n-49))* 440; %Frequency as a function of key #
display(f) % For singular n value computes singular frequency
% Plots the resulting values
plot(n,f);
xlabel('Key Number');
ylabel('Frequency');
title('Piano key Vs. Frequency');
grid on;
