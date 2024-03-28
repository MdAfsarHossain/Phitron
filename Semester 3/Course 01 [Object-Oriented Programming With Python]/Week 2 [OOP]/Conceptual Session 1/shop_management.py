class Product:
    def __init__(self, name, price, quantity):
        self.product_name = name
        self.product_price = price
        self.product_quantity = quantity


class Store:
    def __init__(self):
        self.__products_price = {}
        self.__products_quantity = {}
        self.__profit = 0

    def add_product(self, name, price, quantity):
        product = Product(name ,price, quantity)
        self.__products_price[product.product_name] = product.product_price
        self.__products_quantity[product.product_name] = product.product_quantity

    def buy_product(self, name, quantity):
       if name in self.__products_price:
           if self.__products_quantity[name] >= quantity:
                self.__profit = self.__profit + ((5*self.__products_price[name])/100)*quantity
                self.__products_quantity[name] = self.__products_quantity[name] - quantity
                print('Thank You For Your Shoping!!')
           else:
                print('Unavailable')
       else:
            print('Not Found')

    def show_products(self):
        print("All products price: ", self.__products_price)
        print("ALl Products Quantity: ", self.__products_quantity)

    def show_profit(self):
        print("Profit: ", self.__profit)


class Shop(Store):
    def __init__(self, name):
        self.shop_name = name
        super().__init__()


shop1 = Shop('Aapel BD')
shop1.add_product('Iphonex', 400, 12)
shop1.add_product('Umidigi', 350, 20)
shop1.show_products()
shop1.buy_product('Iphonex', 2)
shop1.show_products()
shop1.show_profit()

shop2 = Shop("Gadget 420")
shop2.add_product("Macebook", 800, 7)
shop2.show_products()
