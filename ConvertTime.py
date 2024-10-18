# Function to convert seconds to hours, minutes, and seconds
def convert_seconds(total_seconds):
    hours = total_seconds // 3600  # Calculate hours
    remaining_seconds = total_seconds % 3600  # Remaining seconds after hours
    minutes = remaining_seconds // 60  # Calculate minutes
    seconds = remaining_seconds % 60  # Remaining seconds after minutes
    
    # Display the result
    print("************************************************")
    print("           Welcome to my first program           ")
    print("Convert a large number of seconds into hours, minutes, and seconds.")
    print("************************************************")
    print(f"\nPlease enter a large number of seconds: {total_seconds}")
    print(f"The number of hours in the number is: {hours}")
    print(f"The number of minutes in the number is: {minutes}")
    print(f"The number of seconds in the number is: {seconds}")
    print("\nPress any key to continue...")

# Example of calling the function
total_seconds = 3663  # Example input
convert_seconds(total_seconds)
