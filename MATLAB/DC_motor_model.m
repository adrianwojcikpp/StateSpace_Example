%% Define the Physical Electrical Parameters of Motor
R = 1;    %%% Insert the Armature Resistance of your Motor 
L = 0.5;  %%% Insert the Armature Inductance of your Motor 
J = 0.01; %%% Insert the shaft inertia of your Motor 
b = 0.1;  %%% Insert the viscous damping of your Motor 
K = 0.01;  %%% Insert the Motor constant of your Motor 
s = tf('s');   %%% Define the Model in continuous domain first in s domain

%%% Motor continuous Time Transfer Function
G = K/((J*s+b)*(L*s+R)+K^2);  

[A,B,C,D] = compreal(G.num{1}, G.den{1}); % controllable canonical form
mdlc = ss(A,B,C,D);

Ts = 0.002;
mdld = c2d(mdlc, Ts, 'zoh');