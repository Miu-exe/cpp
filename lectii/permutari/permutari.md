permutari = permutari a unui sir cu n elemente <=> toate șirurile cu cele n elemente in orice ordine
ex:
avem un sir cu 3 elemente, x1 x2 x3
permutarile sunt [x1,x2,x3] , [x1,x3,x2] , [x2,x1,x3] , [x2, x3, x1], [x3,x1,x2] , [x3,x2,x1]

nr de permutatri a unui sir cu n elemente = n! (n factorial)


combinari de n elemente luate cate k
ex 
avem un sir cu n=4 elemente 1,2,3,4 si dorim sa le luam cate k = 2 // combinarile se iau o singura data nu conteaza ordiean 
[1,2] [1,3] [1,4] ,
[2,1] // acesta e aceeasi chesite cu [1,2] si nu se mai numara// [2,3] [2,4]
[3,4]

nr de combinari n luate cate k = n!/(k!*(n-k)!)

C(4,2) = 4!/ (2!*(4-2)!) =
1*2*3*4 
/
1*2 * 1*2

1,2,3; 1,2,4; 1,2,5; 1,3,4; 1,3,5; 1,4,5;
2,3,4; 2,3,5; 2,4,5;
3,4,5;

1,2,4; 1,3,4; 1,4,5;
2,3,5; 2,4,5;

1,2 1,4
1,3 1,4
1,4 1,5
2,3 2,5
2,4 2,5