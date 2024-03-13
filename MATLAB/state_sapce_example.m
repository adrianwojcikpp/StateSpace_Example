%% State space example
%%% File info 
%
% ************************************************************************
%
%  @file     state_space_example.m
%  @author   Adrian Wojcik
%  @version  1.0
%  @date     26-Feb-2024 11:22:59
%  @brief    Generates source, header and data (.csv) files for 
%            state-space model matrices with input and state vector 
% ************************************************************************
%
close all; clc;
clear A B C D mdlc Ts Ad Bd Cd Dc mdld x u

%% CREATE DC MOTOR MODEL
run('DC_motor_model.m');

x = zeros(size(mdld.A,2),1);
u = zeros(size(mdld.B,2),1);

%% EXPORT MATRICES TO .C/.H FILES
generate_mat('Ad', mdld.A);
generate_mat('Bd', mdld.B);
generate_mat('x', x);
generate_mat('u', u);
generate_mat('Ad_x', mdld.A*x);
generate_mat('Bd_u', mdld.B*u);

%% MOVE .C/.H AND .CSV FILES TO Components CATALOG
srcDest = '../Components/Src';
cFiles = dir('*.c');
csvFiles = dir('*.csv');
for i = 1:length(cFiles)
    movefile(cFiles(i).name, fullfile(srcDest, cFiles(i).name));
end
for i = 1:length(csvFiles)
    movefile(csvFiles(i).name, fullfile(srcDest, csvFiles(i).name));
end

incDest = '../Components/Inc';
hFiles = dir('*.h');
for i = 1:length(hFiles)
    movefile(hFiles(i).name, fullfile(incDest, hFiles(i).name));
end