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

