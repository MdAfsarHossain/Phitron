from django.shortcuts import render
from django.http import HttpResponse

# Create your views here.

def courses(request):
    return HttpResponse('''
                        
                        <h1>This is my Courses Page!!</h1>
                        <a href='/'> Home </a>
                        <a href='/first_app/about/'> About </a>
                        <a href='/first_app/contact/'> Contact </a>
                        <a href='/second_app/feedback/'> Feedback </a>
                        
                        ''')

def feedback(request):
    return HttpResponse('''
                        
                        <h1>This is my Feedback Page!!</h1>
                        <a href='/'> Home </a>
                        <a href='/first_app/about/'> About </a>
                        <a href='/first_app/contact/'> Contact </a>
                        <a href='/second_app/courses/'> Courses </a>
                        
                        ''')
