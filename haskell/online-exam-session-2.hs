-- problem #1

helper :: [Int] -> Int -> Int -> [Int] -> [[Int]]
helper [] i len sub = [[]]
helper a i len sub
  | i == len = []
  | otherwise = [sub ++ [a!!i]] ++ (helper a (i + 1) len (sub ++ [a!!i]))

f1 :: [Int] -> [[Int]]
f1 [] = [[]]
f1 a = [[]] ++ (helper a 0 (length a) [])

-- problem #2

appTails :: [Int] -> [[Int]]
appTails [] = []
appTails (a:as)
  | length as > 0 = [a:as] ++ (appTails as)
  | otherwise = [[a]]

helper2 :: [[Int]] -> Int -> Int -> [[Int]]
helper2 a i len
  | i == len = []
  | otherwise = (appTails (a!!i)) ++ (helper2 a (i + 1) len)

f2 :: [Int] -> [[Int]]
f2 [] = [[]]
f2 a = [[]] ++ (helper2 ans 0 (length ans))
  where ans = f1 a

-- problem #3

f3 :: String -> String -> Bool
f3 "" s = True
f3 s "" = False
f3 s t
  | s!!0 == t!!0 = f3 (tail s) (tail t)
  | otherwise = f3 s (tail t)
