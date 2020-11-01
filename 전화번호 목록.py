def solution(phone_book):
    phone_book.sort()

    for i in range(1, len(phone_book)):
        if phone_book[i - 1] == phone_book[i][0:len(phone_book[i - 1])]:
            return False
        else:
            return True

# phone_book	                return
# [119, 97674223, 1195524421]	false
# [123,456,789]	                true
# [12,123,1235,567,88]	        false
