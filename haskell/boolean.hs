-- This is "xor"
xor :: Bool -> Bool -> Bool
xor True False = True
xor False True = True
xor b1 b2 = False

-- This is "and"
and :: Bool -> Bool -> Bool
and True b = b
and False b = False

-- This is "or"
or :: Bool -> Bool -> Bool
or True b = True
or b True = True
or b1 b2 = False
