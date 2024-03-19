contact_list = [
    ('Иван', 'Иванович', 'Иванов', '123456', 'Примечание 1'),
    ('Петр', 'Петрович', 'Петров', '654321', 'Примечание 2'),
    ('Максим', 'Максимович', 'Максимов', '987654', 'Примечание 3')
]

search_query = input('Введите строку для поиска: ')

found_contacts = []
for contact in contact_list:
    if any(search_query.lower() in field.lower() for field in contact):
        found_contacts.append(contact)

if found_contacts:
    print('Найденные контакты:')
    for contact in found_contacts:
        print(contact)
else:
    print('Контакты не найдены.')