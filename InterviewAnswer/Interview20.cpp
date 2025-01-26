class MathUtility:
    @staticmethod
    def add(a, b):
        return a + b

# Calling the static function without creating an instance
result = MathUtility.add(5, 3)
print(result)  # Output: 8
