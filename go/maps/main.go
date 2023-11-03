package main

import "fmt"

func main() {
	colors := map[string]string{
		"red":   "#ff0000",
		"green": "#4bf745",
	}
	fmt.Println(colors)

	var colors2 map[string]string
	fmt.Println(colors2)

	colors3 := make(map[string]string)
	colors3["white"] = "#ffffff"
	// can only access using square brackets and not using '.' operator
	
	printMap(colors)
}

func printMap(c map[string]string) {
	for color, hex := range c { // color is the key for this step through the loop and hex is the value for this step through the loop
		fmt.Println("Hex code for", color, "is", hex)
	}
}