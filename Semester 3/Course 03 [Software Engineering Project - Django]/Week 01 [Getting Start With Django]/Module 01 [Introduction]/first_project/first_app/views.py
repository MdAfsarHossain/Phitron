from django.shortcuts import render
from django.http import HttpResponse

# Create your views here.

def home(request):
    return HttpResponse("<h1>Hello, This is my First Django APP Project </h1>")


def about(request):
    return HttpResponse("<h1>This is Django APP About Page!!</h1>")

