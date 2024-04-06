from django.http import HttpResponse

def home(request):
    return HttpResponse("<h1>Hello, This is my First Django Project </h1>")


def about(request):
    return HttpResponse("<h1>This is Django About Page!!</h1>")

