class BankAccount:
	def __init__(self, forename, surname, balance):
		self.forename = forename
		self.surname = surname
		self.balance = balance

	def getDetails(self):
		print("Forename: ", self.forename)
		print("Surname: ", self.surname)

	def getBalance(self):
		print("Balance: $ ", self.balance)

class ChildBankAccount(BankAccount):
	def __init__(self, forename, surname, balance, restricted=True):
self.forename = forename
self.surname = surname
self.balance = balance
self.restricted = restricted

	def isRestricted(self):
		print("This account is restricted as the user is under 18.")


child_account = ChildBankAccount("Bill", "Appleseed", 100) 
print(child_account.getBalance())
print(child_account.isRestricted())