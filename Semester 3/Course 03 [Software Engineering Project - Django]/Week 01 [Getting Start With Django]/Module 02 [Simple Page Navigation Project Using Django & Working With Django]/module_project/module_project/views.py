from django.http import HttpResponse


def home(request):
    return HttpResponse('''
                        
                        <h1>This is my Home Page!!</h1>
                        
                        <a href='/first_app/about/'> About </a>
                        <a href='/first_app/contact/'> Contact </a>
                        <a href='/second_app/courses/'> Courses </a>
                        <a href='/second_app/feedback/'> Feedback </a>
                        
                        ''')
