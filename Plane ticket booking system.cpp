// Note This code is done using Visual Studio.

#include <iostream>
#include <string>

int main() {
	std::string passengerName, StartingPoint, Destination, DateOfTravel, TimeOfTravel;
	char Airports[20][20] = { "Delhi", "Mumbai", "Chennai", "Kolkata", "Bangalore", "Hyderabad", "Ahmedabad", "Pune", "Jaipur", "Lucknow", "Kanpur", "Nagpur", "Surat", "Visakhapatnam", "Vadodara", "Indore", "Coimbatore", "Patna", "Bhopal", "Thane" };
	int Tickets, price;
	const int ticketPrice = 1000; // Price of a single ticket in Indian Rupees 

	// You can change the price however you want because it is a constant and idc what you do with it

	std::cout << "Welcome to Airplane ticket booking system!\n";
	std::cout << "----------------------------------------\n";

	std::cout << "Available Airports:\n";
	for (int i = 0; i < 20; i++) {
		std::cout << Airports[i] << "\n";
	}

	std::cout << "----------------------------------------\n";

	std::cout << "Please enter the following details:\n";

	std::cout << "Please enter your name: ";
	std::getline(std::cin, passengerName);

	std::cout << "Please enter your starting Airport: ";
	std::getline(std::cin, StartingPoint);

	std::cout << "Please enter your destination Airport: ";
	std::getline(std::cin, Destination);

	std::cout << "Please enter the date of travel : ";
	std::getline(std::cin, DateOfTravel);


	std::cout << "Please enter the time of travel : ";
	std::getline(std::cin, TimeOfTravel);

	std::cout << "Please enter the number of tickets you want to book: ";
	std::cin >> Tickets;

	if (Destination == StartingPoint) {
		std::cout << "Error: Starting and destination airports cannot be the same.\n";
		exit(1); // This will exit it
	}

	else if (Destination == "Delhi" || Destination == "Mumbai" || Destination == "Chennai" || Destination == "Kolkata" || Destination == "Bangalore" || Destination == "Hyderabad" || Destination == "Ahmedabad" || Destination == "Pune" || Destination == "Jaipur" || Destination == "Lucknow" || Destination == "Kanpur" || Destination == "Nagpur" || Destination == "Surat" || Destination == "Visakhapatnam" || Destination == "Vadodara" || Destination == "Indore" || Destination == "Coimbatore" || Destination == "Patna" || Destination == "Bhopal" || Destination == "Thane") {
		std::cout << "\nBooking your tickets...\n";


		std::cout << "Booking your tickets...\n";
		std::cout << "Booking successful!\n";

		std::cout << "Booking details:\n";

		double totalPrice = Tickets * ticketPrice;

		std::cout << "Passenger Name: " << passengerName << "\n";
		std::cout << "Starting Airport: " << StartingPoint << "\n";
		std::cout << "Destination Airport: " << Destination << "\n";
		std::cout << "Date of Travel: " << DateOfTravel << "\n";
		std::cout << "Time of Travel: " << TimeOfTravel << "\n";
		std::cout << "Number of Tickets: " << Tickets << "\n";
		std::cout << "Total Price: " << totalPrice << " INR\n";

		std::cout << "Thank you for booking with us!\n";
	}
	else {
		std::cout << "\nError: Invalid destination airport.\n";
		exit(1); // same here nothing to explain
	}

	return 0;
}