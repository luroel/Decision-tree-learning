%--------------------------Desicion Tree Learning----------------------------%
%---------------Introducción a la Inteligencia Artificial--------------------%
%------------------------LUIS RODRIGUEZ ELIAS-----------------------------%

clear all
clc

wq = readtable('winequality20n.csv');

c = {'fixed acidity' 'volatile acidity' 'citric acid' 'residual sugar' 'chlorides' 'free sulfur dioxide' 'total sulfur dioxide' 'density' 'pH' 'sulphates' 'alcohol' 'quality'};
tree=fitctree(wq,'quality')
view(tree)
view(tree,'mode', 'graph');

A = wq(:,11) %escribe la columna 11
% B = wq(:,6)
A = table2array(A) %Convierte tabla a array
% B = table2array(B)
% 