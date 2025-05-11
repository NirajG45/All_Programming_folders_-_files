# while True:
#     name = input("Customer name: ")
#     Total = 0

#     while True:
#         print("Enter amount and quantity:")
#         Amount = float(input("Enter amount: "))
#         Quantity = float(input("Enter quantity: "))
#         Total += Amount * Quantity

#         repeat = input("Do you want to add more items? (yes/no): if yes to press y and enter or n to exit: ")
#         if repeat.lower() == "n":
#             break

#     print("-" * 45)
#     print("Name:", name)
#     print("Total Amount:", Total)
#     print("-" * 45)
#     print("***** HAPPY SHOPPING *****")

#     repeat1 = input("Do you want to go to a new customer? (yes/no): if yes to press y and enter or n to exit: ")
#     if repeat1.lower() == "n":
#         break

# this is a simple billing system in python using while loop and for loop to calculate total amount of customer bill...
print("=" * 50)
print("🛒 Welcome to Simple Billing System 🧾".center(50))
print("=" * 50)

while True:
    name = input("Enter Customer Name: ").title()
    Total = 0.0
    item_count = 0

    while True:
        print("\nEnter Item Details:")
        try:
            Amount = float(input("➤ Enter amount (per item): ₹"))
            Quantity = float(input("➤ Enter quantity: "))
        except ValueError:
            print("❌ Please enter valid numbers for amount and quantity.")
            continue

        item_total = Amount * Quantity
        Total += item_total
        item_count += 1

        print(f"✅ Item {item_count} added: ₹{item_total:.2f}")
        repeat = input("➤ Add another item? (Y/N): ").strip().lower()
        if repeat == "n":
            break

    print("\n" + "-" * 50)
    print("🧾 Customer Bill".center(50))
    print("-" * 50)
    print(f"👤 Name        : {name}")
    print(f"🛍️  Items Bought: {item_count}")
    print(f"💰 Total Amount: ₹{Total:.2f}")
    print("-" * 50)
    print("🎉 Thank You! HAPPY SHOPPING! 🎉".center(50))
    print("-" * 50)

    repeat1 = input("➤ Process next customer? (Y/N): ").strip().lower()
    if repeat1 == "n":
        print("\n🔚 Billing System Closed. Have a great day!")
        break
