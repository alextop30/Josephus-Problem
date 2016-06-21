# Josephus-Problem
C++ Implementation of Josephus Problem

This program simulates the Josephus Problem --- description of the problem below

Program will prompt for input of the necessary variables from standard in

The problem is known as the Josephus problem and postulates a group of soldiers of size
N >= 1 surrounded by an overwhelming enemy force. There is no hope for victory without
reinforcements, but there is only a single horse available for escape. The soldiers agree to
a pact to determine which of them is to escape and summon help. They form a circle and
a number M >= 1 is picked from a hat. One of their names is also picked from a hat.
Beginning with the soldier whose name is picked, they begin to count clockwise around
the circle. When the count reaches M, that soldier is removed from the circle, and the
count begins again with the next soldier. The process continues so that each time the
count reaches M, another soldier is removed from the circle. Any soldier removed from
the circle is no longer counted. The last soldier remaining is to take the horse and escape.
The problem is, given a number M, the ordering of the soldiers in the circle, and the
soldier from whom the count begins, to determine the order in which soldiers are
eliminated from the circle and which soldier escapes.

For example, suppose that M = 3 and there are N = 5 soldiers named A, B, C, D, and E. We
count three soldiers starting at A, so that C is eliminated first. We then begin at D and
count D, E, and back to A, so that A is eliminated next. Then we count B, D, and E, and
finally B, D, and B, so that D is the one who escapes.

