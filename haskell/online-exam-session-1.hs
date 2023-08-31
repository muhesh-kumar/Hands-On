-- problem #1

helper1 :: [Int] -> Int -> Int -> Int -> [Int]
helper1 a n i len
  | i == len = [] 
  | (i + 1) `mod` n == 0 = helper1 a n (i + 1) len
  | otherwise = [a!!i] ++ (helper1 a n (i + 1) len)

f1 :: [Int] -> Int -> [Int]
f1 [] n = []
f1 a n = helper1 a n 0 (length a)


-- problem #2

helper2 :: [Int] -> Int -> Int -> [Int] -> [[Int]]
helper2 [] i len sub = [[]]
helper2 a i len sub
  | i == len = []
  | otherwise = [sub ++ [a!!i]] ++ (helper2 a (i + 1) len (sub ++ [a!!i]))

f2 :: [Int] -> [[Int]]
f2 [] = [[]]
f2 a = [[]] ++ (helper2 a 0 (length a) [])

-- problem #3

-- takes a 2d array and reverses its contents
-- helperRev :: [[Int]] -> Int -> Int -> [[Int]]
-- helperRev a i len
--   | i == len = []
--   | otherwise = [reverse (a!!i)] ++ (helperRev a (i + 1) len)
--
-- helper3 :: [Int] -> Int -> Int -> [Int] -> [[Int]]
-- helper3 a i len sub
--   | i == len = []
--   | otherwise = (helper3 a (i + 1) len (sub ++ [a!!i])) ++ reverse (f2 (sub ++ [a!!i]))
--  
-- f3 :: [Int] -> [[Int]]
-- f3 [] = [[]]
-- f3 a = helperRev ans 0 (length ans)
--   where ans = helper3 (reverse a) 0 (length a) []

removeEmpty :: [[Int]] -> [[Int]]
removeEmpty [] = []
removeEmpty (a:as)
  | length a == 0 = removeEmpty as
  | otherwise = [a] ++ (removeEmpty as)

getTails :: [Int] -> [[Int]]
getTails [] = []
getTails (a:as) = [as] ++ (getTails as)

helper3 :: [[Int]] -> Int -> Int -> [[Int]]
helper3 a i len
  | i == len = []
  | otherwise = (getTails (a!!i)) ++ (helper3 a (i + 1) len)

f3 :: [Int] -> [[Int]]
f3 [] = [[]]
f3 a = [[]] ++ (removeEmpty ans2)
  where ans = f2 a
        ans2 = helper3 ans 0 (length ans)
