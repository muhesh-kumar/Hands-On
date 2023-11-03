package main

import "fmt"

type contactInfo struct {
	email   string
	zipCode int
}

// type person struct {
// 	firstName string
// 	lastName  string
// 	contact   contactInfo
// }

type person struct {
	firstName string
	lastName  string
	contactInfo
}

func main() {
	// alex := person{"Alex", "Anderson"} // order matters
	// john := person{firstName: "John", lastName: "Doe"}

	// var muhesh person // zero value is assigned
	// fmt.Println(alex)
	// fmt.Println(john)
	// fmt.Println(muhesh)

	// fmt.Printf("%+v\n", muhesh)
	// fmt.Printf("%+v\n", alex)

	// muhesh.firstName = "Muhesh"
	// muhesh.lastName = "Kumar"
	// fmt.Println(muhesh)

	// jim := person{
	// 	firstName: "Jim",
	// 	lastName:  "Party",
	// 	contact: contactInfo{
	// 		email:   "jim@gmail.com",
	// 		zipCode: 94000,
	// 	},
	// }

	jim := person{
		firstName: "Jim",
		lastName:  "Party",
		contactInfo: contactInfo{
			email:   "jim@gmail.com",
			zipCode: 94000,
		},
	}

	// jimPointer := &jim
	// jimPointer.updateName("jimmy")
	// jim.print()
	
	// Shortcut for the above 3 lines of code
	jim.updateName("jimmy")
	jim.print()
}

// Go is a pass by value language
// Slice is a reference type
// There are a few types that are reference types like maps, channels, pointers, functions

func (pointerToPerson *person) updateName(newFirstName string) {
	(*pointerToPerson).firstName = newFirstName
}

func (p person) print() {
	fmt.Printf("%+v\n", p)
}
