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

for i=1:length(A)
     if A(i)<9.85
         disp('Calidad 5')
     elseif A(i)>=9.85
         if A(i)<11.65
             disp('Calidad 6')
         elseif A(i)>=11.65
             disp('Calidad 8')
         end
     end
         
%       if B(i)<10.95
%       if B(i)<10.5
%           disp('calidad 3')
%       elseif B(i)>=10.5
%           disp('calidad 4')
%       end
%       else
%           disp('calidad 7')          
%       end
 end