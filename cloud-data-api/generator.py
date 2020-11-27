from django_eventstream import send_event

send_event('test', 'message', {'text': 'hello world'})