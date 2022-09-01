-- f :: [a] -> (a,b) -> [b] -> [(a,b)]
-- f x y z = y: zip x z

f :: [a] -> [a]
f a = a

myRepeat f 0 x = [x]
myRepeat f n x = f (tail (myRepeat f (n-1) x))
